// Zadanie 1.01: Napisa� program obliczaj�cy pole ko�a o podanym przez u�ytkownika promieniu (Wz�r na pole ko�a P=pi*r*r). Uwaga: Warto�� PI (3.1415) nale�y zadeklarowa� jako sta��.

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


