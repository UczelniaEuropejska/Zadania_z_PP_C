//  Zadanie 0.01: Napisaæ program który wyœwietli sumê 3 liczb oraz œredni¹ z pracy domowej

#include <stdio.h>

float C, K, F;

int main()
{
	printf("%s","Podaj stopnie Celsjusza aby zamienic na stopnie Kelvina i Fahreneita "); 
		scanf("%f",&C);
			K=C+274;
	printf("Stopnie Kelvina:  %.2f \n",K);
			F=C*1.8+32;
    printf("Stopnie Fahrenheita:  %.2f \n",F);
return 0;
}
