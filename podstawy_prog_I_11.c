// Wczytanie liczb z klawiatury.
#include <stdio.h>
main()
{
  int a,b,c;
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("suma=%d \n",c);
  c=a-b;
  printf("roznica=%d \n",c);
  c=a*b;
  printf("iloczyn=%d \n",c);
  c=a/b;
  printf("iloraz=%d \n",c);
  return (0);
}

