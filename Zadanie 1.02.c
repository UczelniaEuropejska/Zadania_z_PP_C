// Zadanie 1.02: Napisaæ program obliczaj¹cy pole prostok¹ta o podanych przez u¿ytkownika bokach a i b (P=a*b).

#include <stdio.h>

float a, b, P;

int main()
{
	printf("Podaj bok a aby obliczyæ pole prostokata "); 
		scanf("%f",&a);
	printf("Podaj bok b aby obliczyc pole prostokata ");
		scanf("%f",&b);
   	 P=a*b;
   	 printf("Pole prostokata wynosi: %.2f \n", P);
return 0;
}
