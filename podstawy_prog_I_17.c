//Zastosowanie pêtli while do wczytania i sumowania liczb.
#include <stdio.h>
main()
{
  int i,liczba,suma;
  suma=0;
  i=0;
  while (i<10)
  {
    scanf("%d",&liczba);
    suma=suma+liczba;
    i++;
  }
  printf("suma 4  liczb wynosi= %d \n",suma);
  return (0);
}

