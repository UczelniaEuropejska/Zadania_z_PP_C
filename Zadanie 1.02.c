// Zadanie 1.02: Napisa� program obliczaj�cy pole prostok�ta o podanych przez u�ytkownika bokach a i b (P=a*b).

#include <stdio.h>

float a, b, P;

int main()
{
	printf("Podaj bok a aby obliczy� pole prostokata "); 
		scanf("%f",&a);
	printf("Podaj bok b aby obliczyc pole prostokata ");
		scanf("%f",&b);
   	 P=a*b;
   	 printf("Pole prostokata wynosi: %.2f \n", P);
return 0;
}
