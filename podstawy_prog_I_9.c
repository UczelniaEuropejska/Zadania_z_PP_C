// Pêtla do-while - przyk³ad zastosowania.
#include <stdio.h>
int main()
{
int i,n;
  scanf("%d",&n);
  i = 0;
  do
  {
    printf("Liczba wynosi: %d \n",i);
    i = i +1;
  }
  while( i<n) ;
  return (0);
}



