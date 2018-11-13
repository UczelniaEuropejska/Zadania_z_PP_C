// Zadanie 1.03: Napisaæ program obliczaj¹cy pole trójk¹ta o podanych przez u¿ytkownika: podstawie (a) i wysokoœci (h). P=0.5*a*h.

#include <stdio.h>

float a, h, P;

int main()
{
	printf("Podaj wielkosc podstawy a aby obliczyc pole trojkata "); 
		scanf("%f",&a);
	printf("Podaj wysokosc h aby obliczyc pole trojkata ");
		scanf("%f",&h);
   	 P=0.5*a*h;
   	 printf("Pole trojkata wynosi: %.2f \n", P);
return 0;
}
