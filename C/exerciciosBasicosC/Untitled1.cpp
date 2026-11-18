#include <stdio.h>

int fatorial(int num){
	long cont, result;
	result=1;
	
	for (cont=num; cont>0; cont--){
		//printf("%d ", cont);
		result = result*cont;
	};
	return result;
};

/*

int main(){
	long nume, resultado;
	printf("Digite o numero: ");
	scanf("%d", &nume);
	while(nume> -1){
		resultado = fatorial(nume);
		
		printf("\nResultado: %d", resultado);
		
		printf("\n\nDigite o numero: ");
		scanf("%d", &nume);
	};
	
	
	
	return 0;
;}*/


int main(){
	
	int n, p;
	
	printf("Digite o n: ");
	scanf("%d", &n);
	printf("\nDigite o p: ");
	scanf("%d", &p);
	
	printf("%d", n/(fatorial(n-p)*p));
	
	
	
		
	
	
};
