// Zadanie 1.02: Napisać program obliczający pole prostokąta o podanych przez użytkownika bokach a i b (P=a*b).

#include <stdio.h>

float a, b, P;

int main()
{
	printf("Podaj bok a aby obliczyć pole prostokata "); 
		scanf("%f",&a);
	printf("Podaj bok b aby obliczyc pole prostokata ");
		scanf("%f",&b);
   	 P=a*b;
   	 printf("Pole prostokata wynosi: %.2f \n", P);
return 0;
}
