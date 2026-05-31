#include <stdio.h>
#include <string.h>

int main(){
	int idade, maior;
	float cont=0, contM=0;
	char corC, corO, sexo;
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	while(idade != -1){
		cont+=1;
		printf("Digite o sexo [M/F]: ");
		scanf(" %c", &sexo);
		
	
		printf("Digite a cor dos olhos: ");
		scanf(" %c", &corO);
		
		printf("Digite a cor do cabelo: ");
		scanf(" %c", &corC);
					
					
		if (idade>maior) maior = idade;
		
		if ((sexo == 'F') && ( idade > 18 && idade <=35) && (corC == 'L') && (corO =='V') ){
			contM+=1;
		
		};
	
			
		printf("\n\nDigite a idade: ");
		scanf("%d", &idade);
	
	};
	
	printf("A maior idade foi: %d", maior);
	printf("\nO percentual de mulheres loiras de olhos verdes com idade entre 18 e 35 anos eh igual a: %.2f", (contM/cont)*100);
	return 0;	
};
