// Wprowadzanie i wyœwietlanie danych do/z tablicy.

#include<stdio.h>
main()
{
   int a[5],i;

   system("clear"); // wywolanie instrukcji linux
   printf("wprowadz  elementy tablicy  \n");

   /* czytanie elementow tablicy */
   for(i=0;i<5;i++)scanf("%d",&a[i]); 
   printf("tablica zawiera nastepujace elementy: \n");

   /* pisanie elementow tablicy */
   for(i=0;i<5;i++) printf("%d ",a[i]);
   printf("\n");
   return(0);
}

