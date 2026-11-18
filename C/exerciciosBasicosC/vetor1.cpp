#include <stdio.h>
#define TF 5

int lerExibir(int nume[TF]){
	int i;
	
	for (i=0; i<TF; i++){
		printf("Digite o valor a ser guardado no indice %d: ", i);
		scanf("%d", &nume[i]);
		printf("\n");
	};
	
	printf("\nValores armazenados com sucesso!\n");
	printf("Os valores do vetor sao: ");
	for (i=0; i<TF; i++){
		printf("%d ", nume[i]);
	};
	return nume[TF];
};


float somaVet(int num[TF], int op){
	float soma=0;
	int cont;
	
	for (cont=0; cont<TF; cont++){
		soma+=num[cont];
	};	
	if (op == 1){
		printf("\nResultado da soma dos valores do vetor: %.2f\n", soma);
		printf("Media: %.2f\n", soma/TF);	
	}
	return soma/TF;
};	

int maioresVal(int val[TF]){
	int i;
	for (i=0; i<TF; i++){
		if (val[i] > somaVet(val, 0))	{
			printf("\n[%d]: %d", i, val[i]);
		}
	};
	
};


int main(){
	int valores[TF], opt;
	
	while (opt!=4){		
		printf("\n\nEscolha uma das opcoes abaixo: ");
		printf("\n1 - Ler e exibir vetor\n2 - Calcular soma e media\n3 - Exibir indices e e conteudo dos valores acima da media\n4 - Sair\n");
		printf("Digite uma das opcoes acima: ");
		scanf("%d", &opt);
			
		switch(opt){
			case 1: 
				lerExibir(valores);
				break;
			case 2: 
				somaVet(valores, 1);
				break;
			case 3: 
				maioresVal(valores);
				break;
		};
		opt = 0;
	};
	return 0;
}
