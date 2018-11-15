//Zastosowanie pêtli for do wczytania i sumowania liczb.
#include <stdio.h>
main()
{
  float i,liczba,suma;
  suma=0;
  for (i=0;i<10;i++)
  {
    scanf("%f",&liczba);
    suma=suma+liczba;
  }
  printf("suma 10 liczb wynosi= %f \n",suma);
  return (0);
}

