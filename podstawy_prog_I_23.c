//Instrukcja switch i jej zastosowanie
#include <stdio.h>
main()
{
  int i = 0;
  switch (i/10)
  {
    case 0: printf ("liczba mniejsza niz 10");
            break;
    case 1: printf ("liczba mniejsza niz 20");
            break;
    case 2: printf ("Nliczba mniejsza niz 30");
            break;
    default: printf ("Number liczba wieksza lub rowna 40");
            break; 
  }
  return (0);
}

