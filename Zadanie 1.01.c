// Zadanie 1.01: Napisaæ program obliczaj¹cy pole ko³a o podanym przez u¿ytkownika promieniu (Wzór na pole ko³a P=pi*r*r). Uwaga: Wartoœæ PI (3.1415) nale¿y zadeklarowaæ jako sta³¹.

#include <stdio.h>

float r, P; 
#define PI 3.1415

int main()
{

  printf("Wprowadz promier r aby obliczyc pole kola r="); 
  scanf("%f",&r);
  P=PI*r*r;
  printf("Pole kola wynosi %.2f \n",P);
return 0;
}


