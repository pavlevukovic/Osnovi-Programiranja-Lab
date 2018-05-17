// Lab8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define MSG1 "All your base are belong to us!"

void main1()
{
	char c = ' ';
	int i;
	printf("\t\tTablica ASCII kodova \n\n");
	for (i = 0; i < 95; i++)
	{
		printf("%3d %c		", c + i, c + i);
		if ((i+1)%5==0)
			printf("\n");
	}
}

int main2(void)
{
	const char msg[] = MSG1;
	puts(msg);
	return 0;
}

void main4()
{
	char c; int sl = 0, br = 0, ostalo = 0;
	while ((c = getchar()) != EOF)
	{
		if ((c >= 'A' && c <= 'Z') || (c >= 'a'&&c <= 'z')) sl++;
		else if (c >= '0' && c <= '9') br++;
		else ostalo++;
	}
	printf("slova: %d\nbrojevi: %d\nostalo: %d\n", sl, br, ostalo);
}

void main3()
{
	char ch;
	int i = 0;
	while (ch = getchar() != EOF)
		i++;
	printf("%d", i-1);
}

void main5() //zadatak5 
{
	char ch[50]; int i, j=0;
	while ((ch[j] = getchar()) != '%') j++;
	
		for (i = 0; i < j; i++)
		{
			if (ch[i] >= 'A' && ch[i] <= 'Z')
				printf("%c", ch[i] + 32);
			else printf("%c", ch[i]);
		}
}

void main6() //zadatak6
{
	char arr1[200], arr2[200];
	gets(arr1); 
	gets(arr2);
	strcat(arr1, arr2);
	_strrev(arr1);
	puts(arr1);
}

void main()
{
	char grad[255][20], pom[20];
	int i = 0, j, n;

	while ((*grad[i] = getchar()) != 10)
	{				
		gets(pom);
		n = strlen(pom);
		for (j = 1; j <= n+1; j++)
			grad[i][j]=pom[j - 1];
		i++;
	} 
	n = i;
	

	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (strcmp(grad[j], grad[j + 1]) > 0)
			{
				strcpy(pom, grad[j]);
				strcpy(grad[j], grad[j+1]);
				strcpy(grad[j+1],pom);
			}
	printf("Gradovi u abecednom redosledu: \n");
	for (i = 0; i < n; i++)
		printf("\n%s", grad[i]);
	printf("\n");
}

void main9()
{
	char rec[50];
	int i, a=0, e=0;
	gets(rec);
	for (i = 0; i <= strlen(rec); i++)
	{
		if (rec[i] == 'a' || rec[i] == 'A') a++;
		else if (rec[i] == 'e' || rec[i] == 'E') e++;
	}
	a>e ? printf("Vise A\n"):printf( "Vise E\n");

	/*if (a>e) printf("Vise slova a"); 
	else printf("Vise slova e");*/
}

