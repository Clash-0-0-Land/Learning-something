#include <stdio.h>

int main(){
	
	float nasc=0, contMor=0, mortM=0, idade, doisAnos=0;
	char sexo;
	
	printf("Criancas nascidas: ");
	scanf("%f", &nasc);
	
	printf("Sexo da crianca morta: ");
	scanf(" %c", &sexo);
	
	while (sexo != 'T'){
		
		contMor+=1;
		
		printf("Idade em meses: ");
		scanf("%f", &idade);
		
		if (sexo == 'M') mortM+=1;
		
		if (idade<=24) doisAnos+=1;	
	
		printf("\nSexo da crianca morta: ");
		scanf(" %c", &sexo);	
		
	};
	
	printf("\nO percentual de criancas mortas eh: %.2f", (contMor/nasc)*100);
	printf("\nO percentual de meninnos mortos eh: %.2f", (mortM/nasc)*100);
	printf("\nO percentual de criancas com 2 anos ou menos mortas eh: %.2f", (doisAnos/nasc)*100);
	
	return 0;	
	
};
