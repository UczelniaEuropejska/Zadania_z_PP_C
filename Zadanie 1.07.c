//Zadanie 1.07: Napisaæ program obliczaj¹cy obwód kwadratu o podanym przez u¿ytkownika boku a. Ob=4*a.

#include <stdio.h>

float Ob,a;

int main()
{ 
     printf("%s","Wprowadz bok a kwadratu aby obliczyc obwod "); 
     scanf("%f",&a);
       Ob=4*a;
     printf("Obwod kwadratu wynosi %.2f \n",Ob);
return (0);
}


