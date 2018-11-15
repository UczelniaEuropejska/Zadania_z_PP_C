//Zamiana typu zmiennej (int na float).
#include <stdio.h>
main()
{
  int i,suma,liczba;
  float srednia;
  srednia=0.0;
  suma=0;
  i=0;
  while (i<5)
  {
    scanf("%d",&liczba);
    suma=suma+liczba;
    i++;
  }
  srednia=(float)suma/i;
  printf("suma liczb=%d \n",suma);
  printf("srednia=%.2f \n",srednia);
  return (0);
}

