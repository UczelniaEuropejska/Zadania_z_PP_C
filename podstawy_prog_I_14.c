//Zakres zmiennej typu char
#include <stdio.h>
int main()
{
char i,j;
  i = 1;
  while (i > 0)
  {
    j = i;
    i++;
  }
  printf ("Maksymalna wartosc zmiennej char wynosi %d\n",j);
  printf ("Wartosc zmiennej char po przepelnieniu wynosi %d\n",i);
  return (0);
}
