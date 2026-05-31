#include <stdio.h>
#include <locale.h>
#include <math.h>


//VERIFICAR SE UM NÚMERO É PAR, e elevá-lo ao quadrado
main(){
	setlocale(LC_ALL, "portuguese");
	
	int num;
	
	printf("Digite o número: ");
	scanf("%d", &num);
	
	if (num % 2 ==0){
		printf(num**2);
	}
	
}
