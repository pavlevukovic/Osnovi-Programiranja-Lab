// Lab9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main1()
{
	srand(time(NULL));

	int a[5][5], i, n, j;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			a[i][j] = rand() % 10;
	
	for (i = 0; i < 5;printf ("\n"), i++)
		for (j = 0; j < 5; j++)
			printf(" %d", a[i][j]);
	printf("\n");

	for (i = 4; i >= 0; i--)
		printf(" %d", *(*(a + i) + 5 - 1 - i));
	printf("\n");

	for (i = 4; i >= 0; i--)
		printf(" %d", a[i][4-i]);
	printf("\n");
}

void main2()
{
	int a[4][4], i, n=1, j;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			a[i][j] = n++;

	for (i = 0; i < 4; printf("\n"), i++)
		for (j = 0; j < 4; j++)
			printf("   %d   ", a[i][j]);
	printf("\n");

	for (i = 3; i >=0; printf("\n"), i--)
		for (j = 3; j >=0; j--)
			printf("   %d   ", a[i][j]);
	printf("\n");
}

void main3()
{
	int mat[4][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 }, { 13, 14, 15, 16 } };
	int i, j, s ;
	printf("\nPolazna matrica je\n");
	for (i = 0; i<4; i++)
	{
		for (j = 0; j<4; j++)
			printf("%2d ", mat[i][j]);
		printf("\n");
	}
	for (i = 0; i < 4; i++)
	{	
		s = 0;
		for (j = 0; j < 4; j++)
			s += mat[i][j];
		printf("Suma %d. reda je: %d \n", i+1, s);
	}
}

void main4()
{
	srand(time(NULL));

	int a[5][5], i, s=0, j;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			a[i][j] = rand() % 10;

	for (i = 0; i < 5; printf("\n"), i++)
		for (j = 0; j < 5; j++)
			printf(" %d", a[i][j]);
	printf("\n");


	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (i == j) s += a[i][j];
	printf("\n");
	printf("Suma na glavnoj dijagonali je %d\n",s);
}

void main5()
{
	srand(time(NULL));

	int a[5][5], i, j, k=0,b[25],s=0;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			a[i][j] = rand() % 15;

	for (i = 0; i < 5; printf("\n"), i++)
		for (j = 0; j < 5; j++)
			printf(" %d", a[i][j]);
	printf("\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (a[i][j] > 10)
				b[k++] = a[i][j];
	for (i = 0; i < k; i++)
	{
		printf(" %d ", b[i]);  s += b[i];
	}
	printf("\n\nSuma je %d\n", s);
}

void main6()
{
	srand(time(NULL));

	int a[5][5],b[5][5],c[5][5], i, j;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			a[i][j] = rand() % 10;
	for (i = 0; i < 5; printf("\n"), i++)
		for (j = 0; j < 5; j++)
			printf(" %d", a[i][j]);
	printf("\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			b[i][j] = rand() % 10;
	for (i = 0; i < 5; printf("\n"), i++)
		for (j = 0; j < 5; j++)
			printf(" %d", b[i][j]);
	printf("\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			c[i][j] = a[i][j] + b[i][j];
	for (i = 0; i < 5; printf("\n"), i++)
		for (j = 0; j < 5; j++)
			printf(" %d", c[i][j]);
	printf("\n");
}


void stampa(int a[25][25], int n)
{
	int i, j;
	for (i = 0; i < n; printf("\n"), i++)
		for (j = 0; j < n; j++)
			printf(" %d	", a[i][j]);
	printf("\n");
}

void sporedna(int a[25][25],int n)
{
	int i, j, temp,b[25];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i + j == n - 1)
			{
				b[i] = a[i][j];
			}
			else a[i][j] = 1;
						
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
				if (b[j] < b[j + 1])
				{
					temp = b[j];
					b[j] = b[j + 1];
					b[j + 1] = temp;
				}

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i + j == n - 1)
			{
				a[i][j] = b[i];
			}
}

void main7()
{
	srand(time(NULL));
	int a[25][25], n, i, j;
	printf("Unesi n \n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = rand() % 10;
	
	stampa(a, n);
	sporedna(a, n);
	stampa(a, n);

}

void main8()
{
	srand(time(NULL));
	int a[25][25], n, i, j,k,l,temp;
	printf("Unesi n \n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = rand() % 10;
	
	stampa(a, n);
	printf("Unesi k \n");
	scanf("%d", &k);
	printf("Unesi l \n");
	scanf("%d", &l);
	k -= 1; l -= 1;
	for (i = 0; i < n; i++)
	{
		temp = a[i][k];
		a[i][k] = a[i][l];
		a[i][l] = temp;
	}
	printf("Zamena kolona\n");
	stampa(a, n);
	for (i = 0; i < n; i++)
	{
		temp = a[k][i];
		a[k][i] = a[l][i];
		a[l][i] = temp;
	}
	printf("Zamena redova\n");
	stampa(a, n);
}

void main9()
{
	srand(time(NULL));
	int a[25][25], n, i, j,raz=0;
	printf("Unesi n \n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = rand() % 20 -10;
	stampa(a, n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i + j > n - 1)
				raz -= a[i][j];
	printf("Razlika je %d", raz);

}

