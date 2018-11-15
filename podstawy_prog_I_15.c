//Zakres zmiennej typu int
#include <stdio.h>
int main()
{
int i,j;
  i = 1;
  while (i > 0)
  {
    j = i;
    i++;
  }
  printf ("Maksymalna wartosc zmiennej int wynosi %d\n",j);
  printf ("Wartosc zmiennej int  po przepelnieniu wynosi %d\n",i);
  return (0);
}

