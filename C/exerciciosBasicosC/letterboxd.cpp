#include <stdio.h>

int main(){
	float estr1, estr2, estr3, estr4, estr5, cont, maiorId, menorId, idadeRuim, maiorIdadePes, maiorIdadeRuim, maiorIdadeOtimo;
	int idade, nota;
	
	printf("Idade: ");
	scanf("%d", &idade);
	
	while(idade!=0){
		cont++;
		
		printf("5 - 0timo\n4 - Bom\n3 - Medio\n2 - Ruim\n1 - Péssimo\n\nNota: ");	
		scanf("%d",&nota);
		
		
		if (nota==5){
			estr5++;
			if(idade>maiorIdadePes) maiorIdadeOtimo=idade;
		};
		
		
		if (nota==4) estr4++;
		if(nota==3) estr3++;
		if (nota==2) {
			estr2++;	
			idadeRuim+=idade;
			if(idade>maiorIdadeRuim) maiorIdadeRuim=idade;
		}
		
		
		if(nota==1) {
			estr1++;
			if(idade>maiorIdadePes) maiorIdadePes=idade;	
			
		};
		
			
		printf("Idade: ");
		scanf("%d", &idade);
		
		if(idade>maiorId) maiorId=idade;
		
	};
	
	
	printf("\n\nQuantidade de pessoas que deram nota Otimo: %f", estr5);
	printf("\nDiferenca percentual entre Otimo e Medio: %.2f", ((estr5/cont) - (estr3/100)) * 100);
	printf("\nMedia de idade de pessoas que deram nota Ruim: %.2f", idadeRuim/estr1);
	printf("\nPercentual de notas Pessimas: %.2f", (estr1/cont)*100);
	printf("\nMaior idade a dar a nota Pessimo: %f", maiorIdadePes);
	printf("\nDiferenca entre a maior idade que deu nota Otimo e a maior idade que deu nota Ruim: %f", maiorIdadeOtimo-maiorIdadeRuim);
};
