// Instrukcja warunkowa if-else.
#include <stdio.h>
int main()
{
int i,j,big;            // deklaracje
  scanf("%d%d",&i,&j);  // czytanie danych
  if(i < j)
  {
    big = j;
  }
  else
  {
    big = i;
  }
  printf("wieksza z dwoch liczb jest %d \n",big);
  return(0);
}


