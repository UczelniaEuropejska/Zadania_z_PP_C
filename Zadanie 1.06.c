//Zadanie 1.06: Napisaæ program obliczaj¹cy obwód ko³a o podanym przez u¿ytkownika promieniu r. Ob=2*PI*r. Uwaga: PI nale¿y zadeklarowaæ jako sta³¹.

#include <stdio.h>

float Ob,PI,r,p;

int main()
{ 
     printf("%s","wprowadz promien kola aby obliczyc obwod "); 
     scanf("%f",&r);
     PI=3.1415;
     Ob=2*PI*r;
     printf("Obwod kola wynosi %.2f \n",Ob);

return (0);
}



