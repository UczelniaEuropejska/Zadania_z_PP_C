//Zamiana stopni fahrenheit na celsius.
#include <stdio.h>
main()
{
// C=(5/9)(F-32)
 int fahr, celsius;
 int lower,upper,step;
 lower=0;
 upper=300;
 step=20;
 fahr=lower;
 while(fahr<=upper)
 {
   celsius=5*(fahr-32)/9;
   printf("%d\t %d\n",fahr,celsius);
   fahr=fahr+step;
 }
 return(0);
}

