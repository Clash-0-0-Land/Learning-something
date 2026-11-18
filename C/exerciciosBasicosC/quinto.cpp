#include <stdio.h>
#include <math.h>

main(){
	float cat1, cat2, perim, area, hipot;
	
	printf("Cateto 1: ");
	scanf("%f", &cat1);
	
	printf("Cateto 2: ");
	scanf("%f", &cat2);
	
	
	hipot = pow(cat1, 2) + pow(cat2, 2);
	
	perim = hipot+cat1+cat2;
	area = cat1*hipot/2;
	
	printf("Hipotenusa: %f, perimetro: %f, area: %f", hipot, perim, area);
	
	
	
}
