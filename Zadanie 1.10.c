//Zadanie 1.10: Napisa� program obliczaj�cy pole powierzchni kuli o promieniu r. P=4*PI*r*r. Uwaga: PI nale�y zadeklarowa� jako sta��.

#include <stdio.h>

float P,PI,r;

int main()
{
     printf("%s","wprowadz promien r aby obliczyc powierzchnie kuli "); 
     scanf("%f",&r);
     PI=3.14;
	 P=4*PI*r*r;
     printf("Pole powierzchni kuli wynosi %.2f \n",P);
return (0);
}

