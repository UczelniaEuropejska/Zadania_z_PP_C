// Zadanie 1.05: Napisać program obliczający pole trapezu o podanych przez użytkownika długościach podstaw (a i b), oraz wysokości (h). P=0.5*(a+b)*h.

#include <stdio.h>

float a,b,h,P;

int main()
{ 
  printf("%s","Wprowadz 1 dlugosc podstawy trapezu "); 
  scanf("%f",&a);
  printf("%s","wprowadz 2 dlugosc podstawy trapezu "); 
  scanf("%f",&b);
  printf("%s","wprowadz wysokosc trapezu "); 
  scanf("%f",&h);
  P=0.5*(a+b)*h;
  printf("Pole trapezu wynosi %.2f \n",P);
return (0);
}

