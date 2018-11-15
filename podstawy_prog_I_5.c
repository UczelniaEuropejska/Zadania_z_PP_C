// Wprowadzanie liczb z klawiatury
#include <stdio.h>
int main()
{
  int i,j,k;
  printf("%s","wprowadz i="); // %s format znakowy
  scanf("%d",&i);  // czytanie liczba
  printf("%s","wprowadz j="); // %s format znakowy
  scanf("%d",&j);  // czytanie liczba
  k = i + j;
  printf("suma dwoch liczb wynosi %d \n",k); // %d format liczbowy
  return(0);
}

