// Zadanie 1.04: Napisać program obliczający pole równoległoboku o podanych przez użytkownika przekątnych p i q. P=0.5*p*q.

#include <stdio.h>
#include <math.h>

float p, q, P;

int main()
{
	printf("Podaj 1 wielkosc przekatnej rownolegloboku aby obliczyc pole "); 
		scanf("%f",&p);
	printf("Podaj 2 wielkosc przekatnej rownolegloboku aby obliczyc pole ");
		scanf("%f",&q);
   	 P=0.5*p*q;
   	 printf("Pole rownolegloboku wynosi: %.2f \n", P);
return 0;
}
