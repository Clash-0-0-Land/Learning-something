#include <stdio.h>

int main(){
	int maior, cont, num, menor;
	float sum;
	
	
	for (cont=0; cont<5; cont++){
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		sum+=num;
		
		if (num>maior) maior = num;	
		if (num<menor) menor = num;
	};
	printf("O maior numero eh: %d\nO menor numero eh: %d", maior, menor);
	printf("\nA media eh: %f", sum/5);
	return 0;
};
