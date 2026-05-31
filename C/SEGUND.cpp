#include <stdio.h>
#include <math.h>

//faren para celsius

main(){
	
	float faren, cels;
	
	
	printf("Digite o valor da temperatura em F: ");
	scanf("%f", &faren);
	
	cels = (faren - 32)*5/9;
	printf("Valor em C: %f", cels);
	
	printf("\nEndereco do C na memoria em hexadecimal: %p", cels);
	
	
	
}
