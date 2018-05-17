// Lab4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



void main1() //zadatak1
{
	int i;
	for (i = 0; i <= 20; i++)
	{
		if (i % 2 == 1) printf("%d \n", i);
	}
}

void main2() //zadatak2
{
	long s = 0;
	int br;
	printf("Unesite broj\n");
	scanf("%ld", &br);
	while (br != 0)
	{
		s = s + br;
		printf("Unesite naredni broj ili 0\n");
		scanf("%ld", &br);
	}
	printf("Suma je s=%ld.\n", s);
}

void main3() //zadatak3
{
	long x, y = 0, c;
	printf("Unesite neki broj\n");
	scanf("%ld", &x);
	while (x != 0)
	{
		c = x % 10;
		x = x / 10;
		y = y * 10 + c;
	}
	printf("Procitan unazad broj je %ld\n", y);
}

void main4() //zadatak4
{
	int n, z;
	float a, s = 0;
	printf("Unesi n\n");
	scanf("%d", &n);
	z = n;
	while (z != 0)
	{	
		printf("Unesi broj\n");
		scanf("%f", &a);
		s = s + a;
		z--;
	}
	//s = s / n;
	printf("Srednja vrednost brojeva je %.2f", s/n);
}

void main5() //zadatak5 ?????
{
	float ans1 = 18.0 / sqr1(2 + 1);
	float ans2 = 18.0 / sqr2(2 + 1);
	float ans3 = 18.0 / sqr3(2 + 1);
	float ans4 = 18.0 / sqr4(2 + 1);
	printf("Resenja su \n %f \n %f \n %f \n %f \n", ans1, ans2, ans3, ans4);
}

void main7() //zadatak7
{
	long x, a, b, m = 1, k, st;
	int i;
	printf("Unesi broj \n");
	scanf("%ld", &x);
	printf("Unesi broj rotacija\n");
	scanf("%ld", &k);
	st = 1;
	for (i = 1; i <= k; i++)
	{
		st = st * 10;
	}
	a = x % st;
	b = x / st;
	while (m<b)
	{
		m = m * 10;
	}
	x = a * m + b;
	printf("nakon rotacije broj=%ld \n", x);
}

void main8() //zadatak8
{
	long x, s = 0;
	int c;
	printf("Unesi broj\n");
	scanf("%ld", &x);
	while (x > 0)
	{
		c = x % 10;
		x = x / 10;
		s = s + c * c;
	}
	printf("Suma kvadrata je %ld\n", s);
}

void main9() //zadatak9
{
	int i, k = 7;
	for (i = 0; k < 10; k++)
	{
		printf("%d", i);
	}
	while (k < 16)
	{
		printf("%d", i++);
	}
}

void mainA() //zadatak10
{
	int i, n, j;
	printf(" Unesite broj \n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("#");
	}
	printf("\n");
	for (i = 0; i < n - 2; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		printf("#\n");
	}
	for (i = 0; i < n; i++)
	{
		printf("#");
	}
}

void mainB() //zadatak10
{
	int i, n, j;
	printf(" Unesite broj \n");
	scanf("%d", &n);
	if (n % 2 == 0) n /= 2;
	else	n = n / 2 + 1;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("#");
		}
		for (j = 0; j <= i - 1; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}

void mainC() //zadatak10
{
	int i, n, j;
	printf(" Unesite broj \n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}

void mainasd() //zadatak10
{
	int i, n, j;
	printf(" Unesite broj \n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}

void main() //zadatak10
{
	int i, n, j;
	printf(" Unesite broj \n");
	scanf("%d", &n);
	n =n/2+1 ;
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i - 1; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= n - i; j++)
		{
			printf("#");
		}
		for (j = 0; j <= n - i - 1 ; j++)
		{
			printf("#");
		}

		printf("\n");
	}
}

//void main()
//{
//	int x;
//	printf("\n \n Unesite broj zadatka koji zelite da vidite \n");
//	printf(" 1. Neparni <20 \n 2. Sumiranje \n 3. Permutovanje \n 4. Srednja vrednost \n 5. #define squared \n 6. Rotacija cifara \n 7. Zbir kvadrata cifara \n 8. Mrtve petlje \n");
//	printf(" 9. Oblik 1 \n 10. Oblik 2 \n 11. Oblik 3 \n 12. Oblik 4 \n 13. Oblik 5 \n \n 0. Izlaz \n");
//	scanf("%d", &x);
//
//	switch (x)
//	{
//	case 1: main1(); main(); break;
//	case 2: main2(); main(); break;
//	case 3: main3(); main(); break;
//	case 4: main4(); main(); break;
//	case 5: main5(); main(); break;
//	case 6: main7(); main(); break;
//	case 7: main8(); main(); break;
//	case 8: main9(); main(); break;
//	case 9: mainA(); main(); break;
//	case 10: mainB(); main(); break;
//	case 11: mainC(); main(); break;
//	case 12: mainD(); main(); break;
//	case 13: mainE(); main(); break;
//	case 0: break;
//	}
//
//}