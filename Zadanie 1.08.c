//Zadanie 1.08: Napisaæ program obliczaj¹cy obwód prostok¹ta o podanych przez u¿ytkownika bokach a i b. Ob=2*a+2*b.

#include <stdio.h>

float Ob,a,b;

int main()
{
     printf("%s","wprowadz wielkosc a boku prostokata aby obliczyc obwod Ob="); 
     scanf("%f",&a);
     printf("%s","wprowadz wielkosc b boku prostokata aby obliczyc obwod Ob="); 
     scanf("%f",&b);
    Ob=2*a+2*b;
     printf("Obwod prostokata wynosi %.2f \n",Ob);
return (0);
}



