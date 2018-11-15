// Zastosowanie funkcji rand() do wype³nienia tablicy.

#include<stdio.h>
#include<stdlib.h>
int rand(void);
main()
{
   const zakr=5;
   int a[zakr],i;

   system("clear");

   /* wprowadzanie elementow do tablicy */
   for(i=0;i<zakr;i++)a[i]=rand()%100; 
   
   printf("tablica zawiera elementy: \n");
   /* pisanie elementow tablicy */
   for(i=0;i<zakr;i++) printf("%d ",a[i]);
   printf("\n");

   return(0);
}


