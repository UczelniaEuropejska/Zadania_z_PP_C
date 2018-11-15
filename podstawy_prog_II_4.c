// Znalezienie maksymalnego elementu w tablicy.

#include<stdio.h>
main()
{
   const zakr=5;
   int a[zakr],i,suma=0,max;
   float srednia=0.0;

   system("clear");
   printf("wprowadz  elementy tablicy  \n");

   /* czytanie elementow tablicy */
   for(i=0;i<zakr;i++)scanf("%d",&a[i]); 
   printf("tablica zawiera nastepujace elementy: \n");

   /* pisanie elementow tablicy */
   for(i=0;i<zakr;i++) printf("%d ",a[i]);
   printf("\n");
   
   // wyszukac i wydrukowac najwieksza liczbe z tablicy
   max=a[0];
   for(i=1;i<zakr;i++)
   if( a[i]>max)max=a[i];

   printf("max:%d \n",max);
   return(0);
}

