#include <stdio.h>
#define TF 3


void lerMatriz(int matriz[TF][TF]){
	int i, q;
	for (i=0; i<TF; i++){
		for(q=0; q<TF; q++){
			printf("Digite o valor para [%d][%d]: ", i, q);
			scanf("%d", &matriz[i][q]);
		};
	};
};

void exibirMatriz(int matriz[TF][TF]){
	int i, q;
	for(i=0;i<TF;i++){
		for(q=0;q<TF;q++){
			printf("[%d] ", matriz[i][q]);	
		};
		printf("\n");
	};
};

int somarDiagPrinc(int matriz[TF][TF]){
	int soma=0, i, q;
	for(i=0; i<TF; i++){
		for(q=0; q<TF; q++){
			if(i == q) soma+=matriz[i][q];
		};
	};
	return soma;
};

int somarDiagSec(int matriz[TF][TF]){
	int soma = 0, i, q=TF-1;
	
	for(i=0; i<TF; i++){
		soma+=matriz[i][q];
		q--;
		
	};
	return soma;
	 	
};

void maiorItem(int matriz[TF][TF]){
	int maior= -30000, i, q, lin, col;
	for(i=0; i<TF; i++){
		for(q=0; q<TF; q++){
			if (matriz[i][q] > 0) {
				maior = matriz[i][q];
				lin=i;
				col=q;
			};
		};
		
	};
	printf("\n\nO maior valor eh %d, e sua posicao eh [%d][%d]", maior, lin, col);
};

void somaDeLinhas(int matriz[TF][TF]){
	int soma, i=0, q=0, vetorSomLin[TF];
	
	for (i=0; i<TF;i++){
		vetorSomLin[i] = 0;	
	};
	
	for(i=0; i<TF; i++){
		for(q=0; q<TF; q++)
			vetorSomLin[i]+=matriz[i][q];	
	};
	
	for(i=0; i<TF;i++)
		printf("Linha %d: %d\n", i, vetorSomLin[i]);
	printf("\n");
};

void calcTransp(int m[TF][TF]){
	int i, q, mTransp [TF][TF];
	
	for (i=0; i<TF; i++){
		
		for (q=0; q<TF; q++)
			mTransp[q][i] = m[i][q];
	};
	
	exibirMatriz(mTransp);
	
};

void exibirValAbMat(int m[TF][TF]){
	int i, q;
	
	for (i=0; i<TF; i++){
		for(q=0; q<TF; q++){
			if (i >= q) printf("%d ", m[i][q]);
		};
		printf("\n");
	};
		
	
};

int main(){
	int arrBi[TF][TF], opt;
	
	while(opt!=9){
		
		printf("\n1 - Ler matriz");
		printf("\n2 - Exibir matriz");
		printf("\n3 - Somar diagonal principal");
		printf("\n4 - Somar diagonal secundaria");
		printf("\n5 - Exibir maior item");
		printf("\n6 - Exibir vetor da soma das linhas da matriz");
		printf("\n7 - Calcular e exibir transposta");
		printf("\n8 - Exibir itens abaixo da diagonal principal");
		printf("\n9 - Sair");
		
		printf("\n\nOpcao: ");
		scanf("%d", &opt);	
		
		switch(opt){
			
			case 1:
				lerMatriz(arrBi);
				break;	
			case 2:
				exibirMatriz(arrBi);
				break;
			case 3:
				printf("\n\nA soma da diagonal principal eh: %d", somarDiagPrinc(arrBi));
				break;
			case 4:
				printf("\n\nA soma da diagonal secundaria eh: %d", somarDiagSec(arrBi));
				break;
			case 5:
				maiorItem(arrBi);
				break;
			case 6:
				somaDeLinhas(arrBi);
				break;
			case 7:
				calcTransp(arrBi);
				break;
			case 8:
				exibirValAbMat(arrBi);
				break;
		};	
	};
	
	return 0;
};

