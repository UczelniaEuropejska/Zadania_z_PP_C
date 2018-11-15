//Wczytanie dowolnej iloœci liczb.
#include <stdio.h>
main()
{
  int i,liczba,suma,mark;
  printf("Wprowadz dowolna ilosc liczb sumowanie wcisnieciem 0 \n");
  suma=0;
  i=0;
  mark=0;
  while (mark==0)
  {
    scanf("%d",&liczba);
    suma=suma+liczba;
    if (liczba==0){mark=1;};
    i++;
  }
  printf("suma liczb wynosi= %d \n",suma);
  return (0);
}

