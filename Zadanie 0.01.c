//  Zadanie 0.01: Napisaæ program który wyœwietli sumê 3 liczb oraz œredni¹ z pracy domowej

#include <stdio.h>

float a, b, c, d, e;

int main()
{
	printf("Podaj 1 liczbe "); 
		scanf("%f",&a);
	printf("Podaj 2 liczbe ");
		scanf("%f",&b);
    printf("Podaj 3 liczbe ");
   		 scanf("%f",&c);
   	 d=a+b+c;
   	 printf("Suma liczb wynosi: %.2f \n", d);
   	 e=d/3;
   	printf("Srednia 3 liczb wynosi: %.2f \n", e);
return 0;
}
