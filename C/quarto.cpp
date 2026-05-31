#include <stdio.h>
#include <math.h>

main(){
	
	float a, b, c, r1, r2, delt;
	
	printf("A: ");
	scanf("%f", &a);
	
	printf("B: ");
	scanf("%f", &b);
	
	printf("C: ");
	scanf("%f", &c);
	
	
	delt = pow(b, 2) - 4 * a * c;
	printf("Delta: %f", delt);
	
	if (delt >= 0){
		
	r1 = (-b + sqrt(delt) )/ (2*a);
	r2 = (-b - sqrt(delt) )/ (2*a);
	printf("\nAs raizes sao: %f e %f", r1, r2);
	
	
			
	}
	
	else {
		printf("\nNao ha uma raiz real de delta.");
	}
	
	
	
	
	
}
