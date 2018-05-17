// Lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main1() //zadatak 1
{
	unsigned neoznacen = -39000;
	printf("neoznacen = %u, i nije %d \n", neoznacen, neoznacen);
	printf("characters: %c %c \n", 'a', 65);
	printf("decimals: %d, %ld \n", 1977, 650000L);
	printf("preceding with blanks: %10d \n", 1977);
	printf("preceding with zeros: %010d \n", 1977);
	printf("some different: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	printf("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	printf("width tricks: %*d \n", 5, 10);
	printf("%s \n", "A string");

}

void main2() //zadatak 2
{
	float fpro;
	double dpro;
	fpro = 106.11;
	dpro = -0.0000654;
	printf("fpro=%2f\n", fpro);
	printf("dpro=%.11f\n", dpro);
	printf("fpro=%e\n", fpro);
	printf("dpro=%G\n", dpro);
}

void main3() //zadatak3
{
	char ch;
	printf("Unesite proizvoljan karakter.\n");
	scanf(" %c", &ch); /*naredba za unos podataka*/
	printf("ASCII kod unetog karaktera %c je %d\n", ch, ch);
}

void main4() //zadatak4
{
	int x, y;
	x = 10; y = 10;
	printf("Vrednost izraza ++x je %d\n", ++x);
	printf("Vrednost izraza y++ je %d\n", y++);
	printf("Nakon inkrementiranja vrednost za x je %d\n", x);
	printf("Nakon inkrementiranja vrednost za y je %d\n", y);
	printf("Vrednost izraza --x je %d\n", --x);
	printf("Vrednost izraza y-- je %d\n", y--);
	printf("Nakon dekrementiranja vrednost za x je %d\n", x);
	printf("Nakon dekrementiranja vrednost za y je %d\n", y);
}

void main7() //zadatak7
{
	int a, b;
	int c;
	bool p;

	p = ((5 == 5) && (3 > 6));
	printf("Za izraz p = ((5 == 5) && (3 > 6)) \n p = false \n \n");

	p = ((5 == 5) || (3 > 6));
	printf("Za izraz p = ((5 == 5) || (3 > 6)) \n p = true \n \n");

	a = 2;
	b = 7;
	c = (a > b) ? a : b;
	printf("Za izraz c = (a > b) ? a : b  \n c = 7, zato sto je izraz (a>b)=false, pa je c=b \n \n");

	a = 2;
	b = 7;
	a += 3 + b;
	printf("Za izraze a += 3 + b; \n a=%d\t b=%d \n \n", a, b);

	a = 2;
	b = 7;
	a += 3 + b++;
	//b = 1;
	printf("Za izraze a += 3 + b++; ????b = 1; \n a=%d\t b=%d \n \n", a, b);

	a = 2;
	b = a >> 2 || a == 3 | a;
	printf("Za izraz b = a >> 2 || a == 3 | a \n b ima vrednost: %d", b);
}

void mainime()
{
	int i, n;
	char ime[30];
	printf("Unesite svoje ime\n");
	scanf(" %s", ime);
	for (i = 0; i < 30; i++)
	{
		if (ime[i]>0)
			printf("ASCII kod slova %c je %d \n", ime[i], ime[i]);
		else break;
	}
}

void main()
{
	int x;
	printf("\n \n Unesite broj zadatka koji zelite da vidite \n 1. Konverzioni znaci \n 2. Pokretni zarez \n 3. ASCII kod karaktera \n 4. ASCII kod imena \n 5. Inkrement i dekrement \n 6. Prioritet operatora \n 0. Exit \n");
	scanf("%d", &x);

	switch (x)
	{
	case 1: main1(); main(); break;
	case 2: main2(); main(); break;
	case 3: main3(); main(); break;
	case 4: mainime(); main(); break;
	case 5: main4(); main(); break;
	case 6: main7(); main(); break;

	case 0: break;
	}

}