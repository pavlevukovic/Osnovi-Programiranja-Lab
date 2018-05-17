// Lab7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define VELIC 10
#define VELICINA 5
long sump(int *pok, int vel);
void prikazniza(double niz[], int n);
void uvecajniz(double broj, double *pok);
void swap(int *a, int *b);

void main1() //zadatak1
{
	float broj[5];
	double rez = 0;
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("Unesite broj %d : ", i + 1);
		scanf("%f", &broj[i]);
	}
	for (i = 4; i + 1; i--)
		rez += broj[i];
	printf("Zbir unesenih brojeva je %lf \n", rez);
}

void main1_3()
{
	char niz[] = { 'a', 'a', 'a', 'a' };
	niz[1] = 'm';
	niz[3] = 'm';
	int i;
	for (i = 0; i < 4; i++)
		printf("%c", niz[i]);
}

void main1_4()
{
	char niz[4] = { 'a', 'a', 'a', 'a' };
	niz[1] = 'm';
	niz[3] = 'm';
	niz[4] = 'm';
	int i;
	for (i = 0; i < 5; i++)
		printf("%c", niz[i]);
}

void main2() //zadatak2
{
	int n, i;
	int x[50];
	int imax = 0;

	printf("Unesite N\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Unesite %d. clan niza\n", i + 1);
		scanf("%d", &x[i]);
	}
	
	for (i = 1; i < n; i++)
	{
		if (x[i]>x[imax]) imax = i;
	}
	printf("Redni broj maksimalnog elementa niza je %d\n", imax + 1);
}

void main3() //zadatak3
{
	static int niz[VELIC] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
	long odgovor;
	odgovor = sump(niz, VELIC);
	printf("Suma niza je: %ld.\n", odgovor);
}

long sump(int *ar, int n)
{
	int i;
	long ukupno = 0;
	for (i = 0; i < n; i++)
	{
		ukupno += *ar;
		ar++;
	}
	return ukupno;
}

void main4() //zadatak4
{
	double dip[VELICINA] ={20.0, 17.66, 8.2, 15.3, 22.22};
	int i, mnozi;
	printf("Cime mnozite?\n");
	scanf("%d", &mnozi);
	for (i = 0; i < VELICINA; i++)
		dip[i] *= mnozi;
	printf("\n");
	for (i = 0; i < VELICINA; i++)
		printf("%8.3f ", dip[i]);
	printf("\n");
}

void main4_1() 
{
	double dip[VELICINA] = { 20.0, 17.66, 8.2, 15.3, 22.22 };
	int i, uvecaj;
	printf("Cime uvecavate?\n");
	scanf("%d", &uvecaj);
	for (i = 0; i < VELICINA; i++)
		dip[i] += uvecaj;
	printf("\n");
	for (i = 0; i < VELICINA; i++)
		printf("%8.3f ", dip[i]);
	printf("\n");
}

void main4_2() 
{
	double dip[VELICINA] = { 20.0, 17.66, 8.2, 15.3, 22.22 };
	int n;
	printf("Cime uvecavate?\n");
	scanf("%d", &n);
	prikazniza(dip, VELICINA);
	printf("\n");
	uvecajniz(n, dip);
	prikazniza(dip, VELICINA);
}

void prikazniza(double niz[], int n)
{
	int i;
	for (i = 0; i < n; i++)
			printf("%8.3f  ", niz[i]);
}

void uvecajniz(double broj, double *pok)
{
	int i;
	for (i = 0; i < VELICINA; i++)
	{
		*pok += broj;
		pok++;
	}
}

void main5() //zadatak5
{
	int ar[10] = { 7, 3, 9, 2, 11, 20, 17, 19, 6, 4 };
	int i, j, n;

	printf("Vektor pre sortiranja:\n");
	for (i = 0; i<10; i++) 
		printf("ar[%d]=%d\n", i, ar[i]);
	n = 10;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - 1; j++)
		{
			if (ar[j]>ar[j + 1])
				swap(&ar[j], &ar[j + 1]);
		}
	printf("\nVektor posle sortiranja:\n");
	for (i = 0; i<10; i++) 
		printf("ar[%d]=%d\n", i, ar[i]);
}

void swap(int*a, int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void main6() //zadatak6
{
	int niz[1000];
	int nizb[1000];
	int i, j, n, b, k=0;
	printf("Unesi n:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Unesi %d. clan niza:", i + 1);
		scanf("%d", &niz[i]);
	}
	for (i = 0; i < n; i++)
	{
		b = 0;
		for (j = 0; j < n; j++)
		{
			if (niz[i] == niz[j])
				b ++;
		}
		if (b == 1)
		{
			//printf("%d\t", niz[i]);
			nizb[k++] = niz[i];
		}
	}
	for (i = 0; i < k; i++)
		printf("%d\t", nizb[i]);
}

void main7() //zadatak7
{
	int i, j;
	int A[1000],n;
	int B[1000],m;
	int C[1000],k=0;
	printf("Unesi n:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Unesi %d. clan niza A:", i + 1);
		scanf("%d", &A[i]);
	}
	printf("Unesi m:");
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		printf("Unesi %d. clan niza B:", i + 1);
		scanf("%d", &B[i]);
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (A[i] == B[j])
				C[k++] = A[i];
	
	for (i = 0; i < k; i++)
		printf("%d\t", C[i]);
}

int *unija(int A[], int a, int B[], int b)
{
	int C[1000];
	int i, j, n = 0, p;
	for (i = 0; i < a; i++)
		C[n++] = A[i];
	for (i = 0; i < b; i++)
	{
		p = 0;
		for (j = 0; j < n; j++)
			if (B[i] == C[j]) p = 1;
		if (p == 0) C[n++] = B[i];
	}
	return C;
}

int *presek(int A[], int a,  int B[], int b)
{
	int C[1000];
	int i, j, p, k, n = 0;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
			if (A[i] == B[j])  C[n++] = A[i];
	}
	return C;
}

int *razlika(int A[], int a, int B[], int b)
{
	int C[1000];
	int i, j, n = 0, p;
	for (i = 0; i < a; i++)
	{
		p = 0;
		for (j = 0; j < b; j++)
			if (A[i] == B[j]) p = 1;
		if (p == 0) C[n++] = A[i];
	}
	return C;
}

void stampa(int niz[])
{
	int i;
	printf("{");
	for (i = 0; i < 10; i++)
		if (niz[i]<100 && niz[i]> -100)
			printf("%d  ", niz[i]);
	printf("}\n");
}

int duzina(int niz[])
{
	int i=0;
	while (niz[i]>0 && niz[i] < 10)
		i++;
	return i;
}

void mainX() //zadatak8
{
	int A[1000], B[1000], C[1000];
	int i, n, m, k, p;
	int *D, *E;
	printf("Broj clanova niza A = ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("Unesite %d. clan niza A: ", i + 1);
		scanf("%d", &A[i]);
	}
	printf("Broj clanova niza B = ");
	scanf("%d", &m);
	for (i = 0; i < n; i++)
	{
		printf("Unesite %d. clan niza B: ", i + 1);
		scanf("%d", &B[i]);
	}
	printf("Broj clanova niza C = ");
	scanf("%d", &k);
	for (i = 0; i < k; i++)
	{
		printf("Unesite %d. clan niza C: ", i + 1);
		scanf("%d", &C[i]);
	}

	p=duzina(A);
	printf("%d", p);

	printf("A unija B = ");
	D = unija(A, n, B, m);
	stampa(D);
	
	printf("A presek B = ");
	D = presek(A, n, B, m);
	stampa(D);
	
	printf("A razlika B = ");
	D = razlika(A, n, B, m);
	stampa(D);

	printf("(A unija B) razlika C = ");
	D = unija(A, n, B, m);
	p=duzina(D);
	printf("%d", p);
	E = razlika(D, p, C, m);
	stampa(E);
	
	printf("(A presek B) razlika C = ");
	D = presek(A, n, B, m);
	p = duzina(presek(A, n, B, m));
	E = razlika(D, p, C, m);
	stampa(E);
}

void main()
{
	int A[100], B[100], C[100], D[100];
	int i, j, n, m, k, p=0;
	
	printf("Broj clanova niza A = ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Unesite %d. clan niza A: ", i + 1);
		scanf("%d", &A[i]);
	}
	printf("Broj clanova niza B = ");
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		printf("Unesite %d. clan niza B: ", i + 1);
		scanf("%d", &B[i]);
	}
	printf("Broj clanova niza C = ");
	scanf("%d", &k);
	for (i = 0; i < k; i++)
	{
		printf("Unesite %d. clan niza C: ", i + 1);
		scanf("%d", &C[i]);
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			if (A[i] == B[j])  D[p++] = A[i];
	}

	for (i = 0; i < p; i++)
		for (j = 0; j < k; j++)
			if (D[i] == C[i])
			{
				D[i] = D[i + 1];
				p--;
			}
	printf("{");
	for (i = 0; i < p; i++)
		printf(" %d ", D[i]);
	printf("}");
}