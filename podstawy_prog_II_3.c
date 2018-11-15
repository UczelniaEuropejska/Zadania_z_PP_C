// Policzenie sumy i wartoœci œredniej elementów tablicy.

#include<stdio.h>
main()
{
   const zakr=5;
   int a[zakr],i,suma=0;
   float srednia=0.0;
   system("clear");
   printf("wprowadz  elementy tablicy  \n");
   
   /* czytanie elementow tablicy */
   for(i=0;i<zakr;i++)scanf("%d",&a[i]); 
   printf("tablica zawiera nastepujace elementy: \n");
   
   /* pisanie elementow tablicy */
   for(i=0;i<zakr;i++) printf("%d ",a[i]);
   printf("\n");

   for(i=0;i<zakr;i++) suma=suma+a[i];
   srednia=(float)suma/(float)i;
   printf("suma:%d \n",suma);
   printf("srednia:%f \n",srednia);
   return(0);
}

