//Zadanie 1.09: Napisaæ program obliczaj¹cy obwód trapezu o podanych przez u¿ytkownika bokach a, b, c i d. Ob=a+b+c+d.

#include <stdio.h>

float Ob,a,b,c,d; 

int main()
{
     printf("%s","wprowadz wielkosc a boku trapezu aby obliczyc obwod "); 
     scanf("%f",&a);
     printf("%s","wprowadz wielkosc b boku trapezu aby obliczyc obwod "); 
     scanf("%f",&b);
     printf("%s","wprowadz wielkosc c boku trapezu aby obliczyc obwod "); 
     scanf("%f",&c);
     printf("%s","wprowadz wielkosc d boku trapezu aby obliczyc obwod "); 
     scanf("%f",&d);
     Ob=a+b+c+d;
     printf("Obwod trapezu wynosi %.2f \n",Ob);
return (0);
}

