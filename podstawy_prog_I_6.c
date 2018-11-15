// Wprowadzanie liczb z klawiatury cd.
#include <stdio.h>
int main()
{
  int i,j,k;
  printf("%s \n","wprowadz dwie liczby"); // %s format znakowy
  scanf("%d%d",&i,&j);  // czytanie liczb
  k = i + j;
  printf("suma dwoch liczb wynosi %d \n",k); // %d format liczbowy
  return(0);
}


