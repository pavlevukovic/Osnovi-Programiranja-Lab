// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main1() //zadatak 1
{
	printf("Moj prvi program u programskom jeziku C.\n");
	return 0;
}

int main() //zadatak 2
{
	int razlika = 100 - 90;
	printf("razlika 100-90=%d \n", razlika);
	return 0;
}

int main3() //zadatak 3
{
	int zbir = 0, i;
	for (i = 0; i < 10; i++) {
		zbir = zbir + i;
		printf("Trenutne vrednosti \n i=%d \n zbir=%d \n", i, zbir);
	}
	printf("Konacni zbir je %d \n", zbir);
	return 0;
}

int main4() //zadatak 4
{
	int a = 3, b = 2, c;
	c = a / b;
	printf("c=%d \n", c);
	return 0;
}

int main5() //zadatak 5
{
	int a = 3, b = 0, c;
	c = a / b;
	printf("c=%d \n", c);
	return 0;
}

int main6a() //zadatak 6a
{
	int x, y;
	printf("Unesi x \n");
	scanf("%d", &x);
	if (x < 2) { y = x; }
	else if (x < 3) { y = 2; }
	else { y = x - 1; };
	printf("y=%d \n", y);

	/*char m;
	scanf_s("%c", &m);
	while (m != 's') {
	scanf_s("%c",m);
	};*/
	return 0;
}

int main6b() //zadatak 6b
{
	int i;
	for (i = 0; i < 1000; i++) {
		printf("vase ime\n");
	}
	return 0;
}

int main6c() //zadatak 6c
{
	int x, i, p = 1;
	printf("Unesi x \n");
	scanf("%d", &x);
	for (i = 0; i < 5; i++) {
		p = p * x;
	}
	printf("p=%d \n", p);
	return 0;
}

int main6d() //zadatak 6d
{
	int x, i, p = 1, n;
	printf("Unesi x \n");
	scanf("%d", &x);
	printf("Unesi stepen \n");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		p = p * x;
	}
	printf("p=%d \n", p);
	return 0;
}
