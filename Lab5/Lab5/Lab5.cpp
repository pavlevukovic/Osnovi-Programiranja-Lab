// Lab5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main1() //zadatak1
{
	int i, fak;
	long n;
	i = 1; n = 1;
	printf("lzracunavanje n!\nUkucajte broj ? ");
	scanf("%d", &fak);
	do
	{
		n *= i;
		i++;
	} while (i <= fak);
	printf("%d! = %ld\n", fak, n);
}

void main1_1()
{
	int i, fak;
	long n=1;
	printf("lzracunavanje n!\nUkucajte broj ? ");
	scanf("%d", &fak);
	for (i = 1; i <= fak; i++) n *= i;
	printf("%d! = %ld\n", fak, n);
}

void main2() //zadatak2
{
	char ch;
	int a_ct, e_ct, i_ct, o_ct, u_ct, ostalo;
	a_ct = e_ct = i_ct = o_ct = u_ct = ostalo = 0;
	printf("Unesi tvoje ime i prezime; Unesi # za izlaz.\n");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case 'a': a_ct++; break;
		case 'A': a_ct++; break;
		case 'e': e_ct++; break;
		case 'E': e_ct++; break;
		case 'i': i_ct++; break;
		case 'I': i_ct++; break;
		case 'o': o_ct++; break;
		case 'O': o_ct++; break;
		case 'u': u_ct++; break;
		case 'U': u_ct++; break;
		default: ostalo++; break;
		}	 /* kraj switch */
	}	 /* dok petlji nije kraj */
	printf("Broj samoglasnika: A E I O U\n");
	printf("%4d %4d %4d %4d %4d\n", a_ct, e_ct, i_ct, o_ct, u_ct);
}

void main3() //zadatak3
{
	int x1, x2, x3; int a1, a2, a3; int b1, b2, b3;
	int c1, c2, c3; int r1, r2, r3;
	printf("Unesite a11, a12, a13 i b1 \n");
	scanf("%d %d %d %d", &a1, &b1, &c1, &r1);
	printf("Unesite a21, a22, a23 i b2 \n");
	scanf("%d %d %d %d", &a2, &b2, &c2, &r2);
	printf("Unesite a31, a32, a33 i b3 \n");
	scanf("%d %d %d %d", &a3, &b3, &c3, &r3);
	int d = a1 * b2*c3 + a2 * b3*c1 + a3 * b1*c2 - c1 * b2*a3 - c2 * b3*a1 - c3 * b1*a2;
	int d1 = r1 * b2*c3 + r2 * b3*c1 + r3 * b1*c2 - c1 * b2*r3 - c2 * b3*r1 - c3 * b1*r2;
	int d2 = a1 * r2*c3 + a2 * r3*c1 + a3 * r1*c2 - c1 * r2*a3 - c2 * r3*a1 - c3 * r1*a2;
	int d3 = a1 * b2*r3 + a2 * b3*r1 + a3 * b1*r2 - r1 * b2*a3 - r2 * b3*a1 - r3 * b1*a2;
	x1 = d1 / d; x2 = d2 / d; x3 = d3 / d;
	printf("determinante: %d %d %d %d", d, d1, d2, d3);
	printf("\npromenljive: %d %d %d\n", x1, x2, x3);
}

void main4() //zadatak4a
{
	int i = 2, ret = 1, n;
	scanf("%d", &n);
	while (i <= n)
	{
		ret *= i;
		i++;
	}
	printf("%d", ret);
}

void main5() //zadatak4b
{
	int i, z = 0;
	for (i = 1; i <= 10; i++)
	{
		z = z + i;
	}
	printf("%d", z);
}

void main6() //zadatak4c
{
	int i = 1, z = 0;
	while (i <= 10) {
		z = z + i; i++;
	}
	printf("%d", z);
}

void main7() //zadatak5
{
	int x;
	printf("1- Program matematika \n2- Program finansija \n3- Program zabave\n4- Exit\n");
	scanf("%d", &x);
	while (x != 4)
	{
		switch (x)
		{
		case 1: printf("\nProgram matematika\n\n"); break;
		case 2: printf("\nProgram finansija\n\n"); break;
		case 3: printf("\nProgram zabave\n\n"); break;
		//case 4: break;
		}
		printf("1- Program matematika \n2- Program finansija \n3- Program zabave\n4- Exit\n");
		scanf("%d", &x);
	}
}

void main8() //zadatak6
{
	int A[32000];
	int x, k = 3, i, j, p;
	scanf("%d", &x);
	A[0] = 2; A[1] = 3; A[2] = 5;
	for (i = 7; i < x; i += 2)
	{
		p = 0;
		if (i % 3 != 0 && i % 5 != 0)
		{
			for (j = k - 1; j > 2; j--)
			{
				if (i%A[j] == 0)
				{
					p = 1; j = 0;
				}
			}
			if (p == 0)
			{
				A[k++] = i;
			}
		}
	}
	for (i = 0; i < k; i++)
	{
		printf("%d \n", A[i]);
	}
}

int main9() //zadatak7
{
	printf("TEST");
	int i;
	for (i = 0; i<5; i++)
	{
		switch (i % 3)
		{
		case 2: printf(" %d ", i++);// break;
		case 1: printf(" %d ", ++i);// break;
		default: printf(" %d ", 0); //break;
		}
	}
	return 0;
}

long fak(long c)
{
	int i;
	long fak = 1;
	for (i = 2; i <= c; i++)
	{
		fak *= i;
	}
	return fak;
}

void main10() //zadatak8a
{
	int i, s, x;
	long cif;
	for (i = 100; i < 1000; i++)
	{
		s = 0;
		x = i;
		while (x != 0)
		{
			cif = x % 10;
			x /= 10;
			cif = fak(cif);
			s += cif;
		}
		if (s == i)
			printf("%ld", i);
	}
}

void main11() //zadatak8b
{
	srand(time(NULL));
	int n = 1, m = 0, v = 0;
	while (n != 500)
	{
		n = rand() % 1000 + 1;
		if (n < 500) m++;
		else if (n > 500) v++;
	}
	printf("Broj 500 je pronadjen iz %d. puta\n", v + m + 1);
	if (v > m) printf("Vise cifara je generisano iz intervala [501,1000], i to %d \n", v);
	else printf("Vise cifara je generisano iz intervala [1,499], i to %d \n", m);
}

void main12() //zadatak8c
{
	srand(time(NULL));
	int n = 1, i = 0;
	while (n != 100)
	{
		n = rand() % 1000;
		i++;
		if (i == 1000)
		{
			printf("1000 pokusaja, nijednom broj 100\n");
			break;
		}
	}
	if (n == 100) printf("100 je nadjen iz %d. puta \n", i);
}

void main13() //zadatak8d
{
	int n, cif, i, s = 0;
	int bin[8];
	printf("Unesite broj \n");
	scanf("%d", &n);
	int x = n;
	for (i = 7; i >= 0; i--)
	{
		cif = x % 2;
		bin[i] = cif;
		x = x / 2;
	}
	printf("Uneti broj u binarnom obliku je\n");
	for (i = 0; i < 8; i++)
	{
		printf("%d", bin[i]);
		s += bin[i];
	}
	printf("\nZbir njegovih cifara je %d \n", s);
}

void main() //zadatak8e
{
	char ch;
	int n = 0;
	int ca = 0, ce = 0, ci = 0, co = 0, cu = 0;
	scanf(" %c", &ch);
	while (ch!='.')//((ch=getchar()) != '.')
	{
		
			n++;
			switch (ch)
			{
			case 'a': ca++; break;
			case 'e': ce++; break;
			case 'i': ci++; break;
			case 'o': co++; break;
			case 'u': cu++; break;
			default: break;
			}
			scanf(" %c", &ch);

	}
	printf("A \t E \t I \t O \t U \n");
	printf("%d \t %d \t %d \t %d \t %d \n", ca, ce, ci, co, cu);
	
	printf("Proporcionalno u odnosu na broj unetih karaktera:\n");
	printf("A \t E \t I \t O \t U \n");
	printf("%.2f \t %.2f \t %.2f \t %.2f \t %.2f \n", 1.0* ca / n * 100, 1.0*ce / n * 100, 1.0*ci / n * 100, 1.0*co / n * 100, 1.0*cu / n * 100);
}

//void main()
//{
//	int x;
//	printf("\n \nUnesite broj zadatka koji zelite da vidite \n 1. n! \n 2. Broj samoglasnika \n 3. Sistem jednacina \n 4. Petlja 1 \n 5. Petlja 2 \n 6. Petlja 3 \n 7. Meni \n 8. Prosti brojevi \n 9. TEST \n 10. Trocifreni=Suma n! \n 11. Slucajni trocifreni 500 \n 12. Slucajni trocifreni 100 \n 13. Binarni zapis \n 14. Samoglasnici, proporcija \n \n 0. Exit \n");
//	scanf("%d", &x);
//
//	switch (x)
//	{
//	case 1: main1(); main(); break;
//	case 2: main2(); main(); break;
//	case 3: main3(); main(); break;
//	case 4: main4(); main(); break;
//	case 5: main5(); main(); break;
//	case 6: main6(); main(); break;
//	case 7: main7(); main(); break;
//	case 8: main8(); main(); break;
//	case 9: main9(); main(); break;
//	case 10: main10(); main(); break;
//	case 11: main11(); main(); break;
//	case 12: main12(); main(); break;
//	case 13: main13(); main(); break;
//	case 14: main14(); main(); break;
//	case 0: break;
//	}
//}