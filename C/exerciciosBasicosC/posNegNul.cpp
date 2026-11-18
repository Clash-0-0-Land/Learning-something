#include <stdio.h>

int main(){
	int cont, pos, neg, nul, num;
	
	nul =0;
	pos = 0;
	neg=0;
	
	for (cont=0; cont<10; cont++){
		printf("Insira um numero: ");
		scanf("%d", &num);
		
		if (num == 0){
			nul+=1;
		}
		else{
			if (num > 0) pos+=1;
			else neg+=1;
		};
	
	};
	
	printf("\nQuantidade de\n\nNumeros positivos: %d \nNumeros negativos: %d \nNumeros nulos: %d", pos, neg, nul);
	
	
}
