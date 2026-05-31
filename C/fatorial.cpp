#include <stdio.h>

int fatorial(int num){
	long cont, result;
	result=1;
	
	for (cont=num; cont>0; cont--){
		printf("%d ", cont);
		result = result*cont;
	};
	printf("\nResultado: %d", result);
};

int main(){
	long nume;
	
	printf("Digite o numero: ");
	scanf("%d", &nume);
	
	while(nume> -1){
		fatorial(nume);
		printf("\n\nDigite o numero: ");
		scanf("%d", &nume);
		
	}
	
	return 0;
;}
