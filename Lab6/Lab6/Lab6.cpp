// Lab6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define IME "Visa tehnicka skola"
#define ADRESA "Beogradska 20"
#define MESTO "18000 Nis"
#define LIMIT 65
void zvezde(); /* deklaracija funkcije bez argumenata */
void zvezde1(int x);
int imin(int n, int m);
float funkcija(float x1, float x2);
float hipotenuza(float n, float m);

void main1() //zadatak1
{
	zvezde(); /* poziv korisnicke funkcije */
	printf("%s \n", IME); /*poziv funkcije iz st. biblioteke*/
	printf("%s \n", ADRESA);
	printf("%s \n", MESTO);
	zvezde();
}

/*definicija korisnickih funkcija*/
void zvezde() /*funkcija nema argumenata*/
{
	int brojac;
	for (brojac = 1; brojac <= LIMIT; brojac++)
		printf("%c", '*');
	printf("\n");
}

void main1_4() //zadatak1.4
{
	char ime[50];
	char adresa[50];
	char mesto[50];
	
	printf("Unesite svoje ime \n");
	scanf(" %s", ime);

	printf("Unesite svoju adresu \n");
	scanf(" %s", adresa);

	printf("Unesite mesto odakle ste \n");
	scanf(" %s", mesto);

	zvezde();
	printf("%s \n", ime);
	printf("%s \n", adresa);
	printf("%s \n", mesto);
	zvezde();
}

void zvezde1(int x)
{
	int i;
	for (i = 0; i < x; i++)
	{
		printf("*");
	}
	printf("\n");
}

void main1_5() //zadatak1.5
{
	char ime[50];
	char adresa[50];
	char mesto[50];
	int x, y, z;
	
	printf("Unesite svoje ime \n");
	scanf(" %s", ime);
	
	printf("Unesite svoju adresu \n");
	scanf(" %s", adresa);

	printf("Unesite mesto odakle ste \n");
	scanf(" %s", mesto);

	printf("Koliko zvezdica zelite na pocetku?\n");
	scanf("%d", &x);
	printf("Koliko zvezdica zelite u sredini?\n");
	scanf("%d", &y);
	printf("Koliko zvezdica zelite na kraju?\n");
	scanf("%d", &z);
	zvezde1(x);
	printf("%s \n", ime);
	zvezde1(y);
	printf("%s \n", adresa);
	zvezde1(y);
	printf("%s \n", mesto);
	zvezde1(z);
}

void main2() //zadatak2
{
	int broj1, broj2, vrati, rez;
	printf("Unesite 2 proizvoljna broja: \n");
	vrati = scanf("%d %d", &broj1, &broj2);
	rez = imin(broj1, broj2);
	if (vrati == 2)
	{
		printf("Manji od %d i %d je %d\n", broj1, broj2, imin(broj1, broj2));
		printf("Manji od %d i %d je %d\n", broj1, broj2, rez);
	}
}
int imin(int n, int m) /* definicija funkcije */
{
	int min;
	if (n<m) min = n;
	else min = m;
	return min;
}

void main3() //zadatak3
{
	float x1, x2;
	printf("Unesite x1 i x2\n");
	scanf("%f %f", &x1, &x2);
	printf("Rezultat je y=%4.2f", funkcija(x1, x2));
}

float funkcija(float x1, float x2)
{
	if (x1 < x2) return x1 + x2;
	else if (x1 == x2) return x1 * x2;
	else return x1 - x2;
}

void main4() //zadatak4
{
	float kat1, kat2, hip;
	printf("Unesite 2 proizvoljna broja: \n");
	scanf("%f %f", &kat1, &kat2);
	hip = hipotenuza(kat1, kat2);
	printf("Hipotenuza je %4.2f\n", hipotenuza(kat1, kat2));
	printf("Hipotenuza je %4.2f\n", hip);
}

float hipotenuza(float n, float  m)
{
	float rez = sqrt(n * n + m * m);
	return rez;
}

void main5(int argc, char *argv[]) //zadatak5
{
	float kat1 = atof(argv[1]), kat2 = atof(argv[2]);
	printf("Hipotenuza je %4.2f\n", hipotenuza(kat1, kat2));
}

void promeni(int u, int v)
{
	printf("U funkciji originalne vrednosti su: u = %d a v = %d.\n", u, v);
	int temp = u;
	u = v;
	v = temp;
	printf("U funkciji nakon promene: u = %d a v = %d. \n", u, v);
}

void main6() //zadatak6
{
	int x = 5, y = 10;
	printf("U programu originalne vrednosti: x = %d a y = %d.\n", x, y);
	promeni(x, y);
	printf("U programu nakon poziva funkcije je: x = %d a y = %d.\n", x, y);
}

void promeni1(int *u, int *v)
{
	printf("U funkciji originalne vrednosti su: u = %d a v = %d.\n", *u, *v);
	int temp = *u;
	*u = *v;
	*v = temp;
	printf("U funkciji nakon promene: u = %d a v = %d. \n", *u, *v);
}

void main6_1() //zadatak6.1
{
	int x = 5, y = 10;
	printf("U programu originalne vrednosti: x = %d a y = %d.\n", x, y);
	promeni1(&x, &y);
	printf("U programu nakon poziva funkcije je: x = %d a y = %d.\n", x, y);
}

int faktorijel(int x)
{
	int fak = 1;
	for (int i = 2; i <= x; i++)
	{
		fak = fak * i;
	}
	return fak;
}

int stepen(int x, int y)
{
	int st = 1;
	for (int i = 0; i < y; i++)
	{
		st = st * x;
	}
	return st;
}

void main7() //zadatak7
{
	int n, s = 0, i, x;
	printf("Unesite X\n");
	scanf("%d", &x);
	printf("Unesite N\n");
	scanf("%d", &n);

	for (i = 5; i <= n; i++)
	{
		s = s + (stepen(x, i)) / ((faktorijel(i) + n));
	}
	printf("%d", s);
}

float trougaoo(float x, float y, float z)
{
	return (x + y + z);
}

float trougaop(float x, float y, float z)
{
	float s = trougaoo(x, y, z) / 2;
	return sqrt(s*(s - x)*(s - y)*(s - z));
}

void trougao()
{
	int n;	float x, y, z;
	printf("Unesite broj figura \n");
	scanf("%d", &n);
	printf("a = ");
	scanf("%f", &x);
	printf("\nb = ");
	scanf("%f", &y);
	printf("\nc = ");
	scanf("%f", &z);
	printf("\nZbir povrsina %d trouglova sa stranicama %4.2f, %4.2f, %4.2f je %4.2f, a zbir obima %4.2f.\n", n, x, y, z, n*trougaop(x, y, z), n*trougaoo(x, y, z));
}

float rombp(float x, float y)
{
	return x * y / 2;
}

float rombo(float x)
{
	return 4 * x;
}

void romb()
{
	int n; float a, d1, d2;
	printf("Unesite broj figura \n");
	scanf("%d", &n);
	printf("a = ");
	scanf("%f", &a);
	printf("\nd1 = ");
	scanf("%f", &d1);
	printf("\nd2 = ");
	scanf("%f", &d2);
	printf("\nZbir povrsina %d rombova sa stranicom a = %4.2f i dijagonalama d1 = %4.2f	d2 = %4.2f je %4.2f, a zbir obima %4.2f.\n", n, a, d1, d2, n*rombp(d1, d2), n*rombo(a));

}

float pravp(float x, float y)
{
	return x * y;
}

float pravo(float x, float y)
{
	return 2 * (x + y);
}

void pravougaonik()
{
	int n;	float x, y;
	printf("Unesite broj figura \n");
	scanf("%d", &n);
	printf("a = ");
	scanf("%f", &x);
	printf("\nb = ");
	scanf("%f", &y);
	printf("\nZbir povrsina %d pravougaonika sa stranicama a = %4.2f i b = %4.2f je %4.2f, a zbir obima %4.2f.\n", n, x, y, n*pravp(x, y), n*pravo(x, y));
}

float valjakp(float r, float h)
{
	return 6.28*(r*r + r * h);
}

float valjakz(float r, float h)
{
	return 3.14 * r*r*h;
}

void valjak()
{
	int n;	float r, h;
	printf("Unesite broj figura \n");
	scanf("%d", &n);
	printf("r = ");
	scanf("%f", &r);
	printf("\nH = ");
	scanf("%f", &h);
	printf("\nZbir povrsina %d valjka sa poluprecnikom r = %4.2f i visinom h = %4.2f je %4.2f, a zbir zapremina %4.2f.\n", n, r, h, n*valjakp(r, h), n*valjakz(r, h));
}

float kupap(float r, float h)
{
	return 3.14 * r*(r + sqrt(r*r + h * h));
}

void kupa()
{
	int n;	float r, h;
	printf("Unesite broj figura \n");
	scanf("%d", &n);
	printf("r = ");
	scanf("%f", &r);
	printf("\nH = ");
	scanf("%f", &h);
	printf("\nZbir povrsina %d kupa sa poluprecnikom r = %4.2f i visinom h = %4.2f je %4.2f, a zbir zapremina %4.2f.\n", n, r, h, n*kupap(r, h), n*valjakz(r, h) / 3);
}

void figure() //zadatak 8
{
	printf("\nOdaberite geometrijsku figuru\n");
	printf("\n 1. Trougao \n 2. Romb \n 3. Pravougaonik \n 4. Valjak \n 5. Kupa \n\n 0. Nazad u glavni program\n");
	int x;
	scanf("%d", &x);
	switch (x)
	{
	case 1: trougao(); figure(); break;
	case 2: romb(); figure(); break;
	case 3: pravougaonik(); figure(); break;
	case 4: valjak(); figure(); break;
	case 5: kupa(); figure(); break;
	default: break;
	}
}

void main()
{
	int x;
	printf("\nUnesite broj zadatka koji zelite da vidite\n");
	printf("1. Zvezde\n2. Unos podataka - zvezde\n3. Unos broja zvezdi\n4. Minimum 2 broja\n5. Funkcija Y\n");
	printf("6. Hipotenuza\n7. Promeni (samo u f-ji)\n8. Promeni(reference i pokazivaci)\n9. Suma\n10. Figure\n\n0. Izlaz\n");
	scanf("%d", &x);

	switch (x)
	{
	case 1: main1(); main(); break;
	case 2: main1_4(); main(); break;
	case 3: main1_5(); main(); break;
	case 4: main2(); main(); break;
	case 5: main3(); main(); break;
	case 6: main4(); main(); break;
	case 7: main6(); main(); break;
	case 8: main6_1(); main(); break;
	case 9: main7(); main(); break;
	case 10: figure(); main(); break;
	case 0: break;
	}
}