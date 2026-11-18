#include <stdio.h>

int main(){
	
	int num, impar, contP;
	
	
	while (num != -999){
		printf("Entre com um numero: ");
		scanf("%d", &num);
		
		if (num == -999) printf("\nSaindo do programa...");
		
		else{
			if (num % 2 ==0) contP+=1;
			else impar+=num;	
		};
	};
		
	printf("\nForam digitados %d numeros pares\nA soma de todos os numeros impares eh %d", contP, impar);
	
	return 0;
	
};
