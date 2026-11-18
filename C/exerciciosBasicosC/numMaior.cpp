#include <stdio.h>

/*main(){
	float numA, numB;
	
	printf("Numero A: ");
	scanf("%f", &numA);
	
	printf("Numero B: ");
	scanf("%f", &numB);
	
	if (numA > numB) printf("%f eh maior que %f", numA, numB);
	if (numB > numA) printf("%f eh maior que %f", numB, numA);
	
	
	
};*/


main(){
	
	float numA, numB;
	printf("Numero A: ");
	scanf("%f", &numA);
	
	printf("Numero B: ");
	scanf("%f", &numB);
	
	if (numA == numB) printf("A: %f eh igual a B: %f", numA, numB);
	
	else {
		if (numA > numB) printf("A: %f eh maior que B: %f", numA, numB);
		else printf("B: %f eh maior que A: %f", numB, numA);
	
	};
	
	
	
}
