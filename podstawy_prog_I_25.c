// Instrukcja continue i jej zastosowanie.
#include <stdio.h>
main()
{
  int i = 0;
  for(i = 0;i < 11; i++)
  {
    if ((i == 4) || (i == 7)) continue;
    printf(" wartosc i wynosi: %d\n", i);
  }
  return (0);
}

