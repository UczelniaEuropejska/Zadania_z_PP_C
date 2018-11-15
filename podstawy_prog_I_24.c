// Instrukcja break i jej zastosowanie
#include <stdio.h>
main()
{
  int i = 0;
  while (1)
  {
    i = i + 1;
    printf(" wartosc i wynosi: %d\n");
    if (i>5) break;
  }
  return (0);
}

