// Lab10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main1()
{
	FILE *fp;
	fp = fopen("test.txt", "w+");
	fprintf(fp, "This is testing for fprintf...\n");
	fputs("This is testing for fputs...\n",fp);
	fclose(fp);
}

void main2()
{
	FILE *fp;
	char buff[255];
	fp = fopen("test.txt", "r"); 
	fscanf(fp, "%s", buff); 
	printf("1 : %s\n", buff);

	fgets(buff, 255, (FILE*)fp); 
	printf("2: %s\n", buff);

	fgets(buff, 255, (FILE*)fp);
	printf("3: %s\n", buff);
	fclose(fp);
}

double prosekOcena(double pro, double k)
{
	//return pro*(k-1) + pro/k + rez / k;
	return pro / k;
}

void main4()
{
	FILE *fp, *fpr;
	char ime[20], prezime[20];// rez[5];
	int i = 1, n; //r1 = 0, r3 = 0; ???
	double prosek = 0, rezultat, k = 0;
	
	fp = fopen("zad3.txt", "r");
	fpr = fopen("rez.txt", "w");
	while (fscanf(fp, "%s %s %lf", ime, prezime, &rezultat) != EOF)
	{		
		k++;
		prosek += rezultat;
		
		if (rezultat>50)
		{
			printf("%d: %s %s %.0lf \n", i, ime, prezime, rezultat);
			fprintf(fpr, "%d: %s %s %.0lf \n", i, ime, prezime, rezultat);
			//printf("%d: %d %d \n", i, r1, r3); ???
			i++;
		}
	}

	prosek = prosekOcena(prosek, k);
	printf("Prosek ocena je: %.2lf\n", prosek); 
	fclose(fp);
}

void main5()
{
	FILE *fp, *fpr;
	int c, i = 0;
	fp = fopen("zad5.txt", "r");
	fpr = fopen("rez5.txt", "w");
	while ((c = fgetc(fp)) != EOF)
	{
		if (c == 'q') {
			fputc('l', fpr); fputc('j', fpr); i++; //c + 1 = 'j'
		}
		else if (c == 'w') {
			fputc('n', fpr); fputc('j', fpr); i++;
		}
		
		else fputc(c, fpr);

	}
	fclose(fp);
	printf("Bilo je ukupno %d promena", i);
}

void main6()
{
	FILE *fp, *fpr;
	int i=0;
	fp = fopen("zad6.txt", "r");
	fpr = fopen("rez6.txt", "a");
	while (fscanf(fp, "%d", &i) != EOF)
		if (i % 3 == 0 && i % 7 == 0) fprintf(fpr, "%d ", i);
		 
	fclose(fp);

}

void main7()
{
	FILE *fp, *fpr;
	int n, i = 0;
	char buff[255];
	fp = fopen("zad7.txt", "r");
	fpr = fopen("zad71.txt", "a");
	printf("Koji red zelite da obrisete?\n");
	scanf("%d", &n);
	while (fgets(buff, 255, (FILE*)fp) != NULL)
	{
		//fgets(buff, 255, (FILE*)fp);
		if (i != n - 1)
		{
			fputs(buff, fpr);
			i++;
		}
		else i++;
	}
	fclose(fp);
	fclose(fpr);
	remove("zad7.txt");
	rename("zad71.txt", "zad7.txt");
}

void main8()
{
	FILE *fp;
	fp = fopen("dat.txt", "a+");
	fprintf(fp, "\nZdravo svima!");
	fclose(fp);
}

void main9()
{
	FILE *fp, *fpr;
	char ulaz[255], izlaz[255], buff[255];
	int n,i,vok;
	printf("Unesite ime fajla iz kog citate\n");
	gets(ulaz);
	printf("Unesite ime fajla u koji upisujete\n");
	gets(izlaz);
	fp = fopen(ulaz, "r");
	fpr = fopen(izlaz, "a");
	while (fgets(buff, 255, (FILE*)fp) != NULL)
	{
		n = strlen(buff);
		vok = 0;
		for (i = 0; i < n; i++)
			if (buff[i] == 'a' || buff[i] == 'A' || buff[i] == 'e' || buff[i] == 'E' || buff[i] == 'i' || buff[i] == 'I' || buff[i] == 'o' || buff[i] == 'O' || buff[i] == 'u' || buff[i] == 'U') vok++;
		fprintf(fpr, "%c%c%c%c%c%c%c%c%c%d\n", buff[0], buff[1], buff[2], buff[n - 5], buff[n - 4], buff[n - 3], buff[n - 2], buff[n - 8], buff[n - 7], vok);
	}
}