// Lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main1() //zadatak1
{
	char ch;
	printf("Unesite neki karakter\n");
	scanf(" %c", &ch);
	if (ch >= 'a' && ch <= 'z')
		printf("Karakter je malo slovo\n");
	else if (ch >= 'A' && ch <= 'Z')
		printf("Karakter je veliko slovo\n");
	else if (ch >= '0' && ch <= '9')
		printf("Karakter je broj\n");
	else if (ch == '\n' || ch == '\t' || ch == ' ')
		printf("Karakter je novi red, blanko, ili tab\n");
	return 0;
}

void main2() //zadatak2
{
	int sl, dv, x, y;
	srand(time(NULL));
	sl = rand();
	dv = sl * 2;
	x = rand() % 10;
	y = rand() % 10 + 10;
	printf("Slucajan broj je %d\n", sl);
	printf("Dvostruki slucajan broj je %d\n", dv);
	printf("Jos neki slucajni brojevi %d, \t %d \n", x, y);
}

void main3() //zadatak3
{
	int x, y, z;
	x = 10;
	y = 3;
	z = (x / y) * y;
	if (x == z)
		printf("Vrednosti x i z su jednake\n");
	if (x <= z)
		printf("Vrednost x je < ili = od vrednosti z \n");
	if (x >= z)
		printf("Vrednost x je > ili = od vrednosti z \n");
	printf("Vrednost x je %d\n", x);
	printf("Vrednost z je %d\n", z);
}

void main4() //zadatak4
{
	double a, b, c;
	double x1, x2, pom;
	a = 1; b = 1; c = -2;
	pom = sqrt(b*b - 4 * a*c);
	x1 = ((-b) + pom) / 2 * a;
	x2 = ((-b) - pom) / 2 * a;
	printf("Vrednost prvog korena x1 = %f\n", x1);
	printf("Vrednost drugog korena x2 = %f\n", x2);
}

void main5() //zadatak5
{
	//x2 + x - 2 = 0
	float a, b, c;
	float x1, x2, pom;
	_complex r1, r2;
	printf("Unesite a, b i c");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	pom = pow(b, 2) - 4 * a*c;
	if (pom >= 0)
	{
		x1 = (sqrt(pom) - b) / 2*a;
		x2 = -(sqrt(pom) + b) / 2*a;
		printf("Vrednost prvog korena x1 = %f\n", x1);
		printf("Vrednost drugog korena x2 = %f\n", x2);
	}
	else
	{
		r1 = _(sqrt(pom) - b) / 2*a;
		r2 = _-(sqrt(pom) + b) / 2*a;
		printf("Resenja su kompleksni brojevi");
	}
}

void main6() //zadatak6
{
	double stopa, period, glavnica;
	printf("Unesite mesecnu kamatnu stopu: ");
	scanf("%lf", &stopa); /* ulaz u pokretnom zarezu */
	/* konverzija u procente */
	stopa = stopa / 100.0;
	printf("Unesite glavnicu: ");
	scanf("%lf", &glavnica);
	printf("Unesite vreme orocavanja u mesecima: ");
	scanf("%lf", &period);
	printf("Ukamacena vrednost je = %.2f\n",
		glavnica * pow((1.0 + stopa), period));
}

void main7() //zadatak7
{
	float x, y;
	printf("Unesite x\n");
	scanf("%f", &x);
	if (x < 2) y = x;
	else if (x < 3) y = 2;
	else y = x - 1;
	printf("y = %f", y);
}

void main8() //zadatak9a
{
	float x, y, k1, k2, k3;
	printf("Unesite x koordinatu");
	scanf("%f", &x);
	printf("Unesite y koordinatu");
	scanf("%f", &y);
	k1 = pow(x - 1, 2) + pow(y, 2);
	k2 = pow(x - 1, 2) + pow(y - 2, 2);
	k3 = pow(x, 2) + pow(y - 2, 2);
	if (k1 < 1 && k3 < 1 && k2<1) printf("Oblast D");
	else if (k1 < 1 && k2 < 1) printf("Oblast B");
	else if (k2 < 1 && k3 < 1) printf("Oblast C");
	else if (k1 < 1 && k3 < 1) printf("Oblast A");
	else if (k1 < 1) printf("Oblast E");
	else if (k2 < 1) printf("Oblast F");
	else if (k3 < 1) printf("Oblast G");
	else printf("Tacka je van svih oblasti");
}

void main9() //zadatak9b
{
	float x, y, k;
	printf("Unesite x koordinatu");
	scanf("%f", &x);
	printf("Unesite y koordinatu");
	scanf("%f", &y);
	k = x * x + y * y;
	if (k < 1) printf("Unutar kruznice");
	else if (x<1 && y<1) printf("Oblast I");
	else if (x<1 && y>-1) printf("Oblast II");
	else if (x>-1 && y>-1) printf("Oblast III");
	else if (x>-1 && y<1) printf("Oblast IV");
	else printf("Tacka je van svih oblasti");
}

void main10() //zadatak 9c
{
	float x, y, k;
	printf("Unesite x koordinatu");
	scanf("%f", &x);
	printf("Unesite y koordinatu");
	scanf("%f", &y);
	k = pow(x - 3, 2) + pow(y - 2, 2);
	if (k < 1) printf("Oblast B");
	else if (x>2 && x<4 && y>1 && y<3) printf("Oblast C");
	else if (y>3 && y<2 * x - 1 && y<-2 * x + 11) printf("Oblast A");
	else printf("Tacka je van svih oblasti");
}

void main11() //zadatak 9d
{
	float x, y;
	printf("Unesite x koordinatu");
	scanf("%f", &x);
	printf("Unesite y koordinatu");
	scanf("%f", &y);
	if (y>3 && y<2 * x - 1 && y<-2 * x + 11) printf("Oblast A");
	else if (x>2 && y<3 && y>x - 1) printf("Oblast B");
	else if (x<4 && y>1 && y<x - 1) printf("Oblast C");
	else printf("Tacka je van svih oblasti");
}

void main12() //zadatak 9e
{
	float x, y, k;
	printf("Unesite x koordinatu");
	scanf("%f", &x);
	printf("Unesite y koordinatu");
	scanf("%f", &y);
	k = pow(x - 3, 2) + pow(y - 2, 2);
	if (k < 0.25) printf("Oblast B");
	else if (x>2 && x<4 && y>1 && y<3) printf("Oblast C");
	else if (y>3 && y<2 * x - 1 && y<-2 * x + 11) printf("Oblast A");
	else printf("Tacka je van svih oblasti");
}

void main()
{
	int x;
	printf("\n \n Unesite broj zadatka koji zelite da vidite \n");
	printf(" 1. Tip karaktera \n 2. Slucajni brojevi \n 3. If naredba \n 4. Kvadratna jednacina \n 5. Kvadratna jednacina (unos) \n 6. Kamata \n");
	printf(" 7. Funkcija \n 8. Grafik 1 \n 9. Grafik 2 \n 10. Grafik 3 \n 11. Grafik 4 \n 12. Grafik 5 \n \n 0. Exit \n");
	scanf("%d", &x);

	switch (x)
	{
	case 1: main1(); main(); break;
	case 2: main2(); main(); break;
	case 3: main3(); main(); break;
	case 4: main4(); main(); break;
	case 5: main5(); main(); break;
	case 6: main6(); main(); break;
	case 7: main7(); main(); break;
	case 8: main8(); main(); break;
	case 9: main9(); main(); break;
	case 10: main10(); main(); break;
	case 11: main11(); main(); break;
	case 12: main12(); main(); break;
	case 0: break;
	}

}