#include <stdio.h>
#define TF 5
#include <stdbool.h>

void leituraVetor(int v[TF]){
	int i;
	for (i=0; i<TF; i++){
		printf("\nEntre com o  valor do indice %d: ", i);
		scanf("%d", &v[i]);
	};
	
};

void exibirVetor(int v[TF]){
	int i;
	for (i=0; i<TF;i++){
		printf("\nVetor [%d]: [%d]", i, v[i]);
	};
};

void somaVetores(int vA[TF], int vB[TF], int vC[TF]){
	int i;
	for (i=0; i<TF; i++){
		vC[i] = vA[i] + vB[i];	
	};
};

int verItem(int vetor[TF], int item){
	int i, pos = -1;
	for (i=0; i<TF; i++){
		if (vetor[i] == item) {
			pos = i;
		};
	};
	return pos;
	
};



int main(){
	int vetorA[TF], vetorB[TF], vetorC[TF], opt=0, it, indice;
	
	while (opt!=5){
		printf("\n1 - Leitura vetor A");
		printf("\n2 - Leitura vetor B");
		printf("\n3 - Somar e exibit vetor C");
		printf("\n4 - Verificar item no vetor C");
		printf("\n5 - Sair");
		printf("\n\nOpcao: ");
		scanf("%d", &opt);
		
		switch(opt){
			case 1:
				leituraVetor(vetorA);
				exibirVetor(vetorA);
				break;
			case 2:
				leituraVetor(vetorB);
				exibirVetor(vetorB);
				break;
			case 3:
				somaVetores(vetorA, vetorB, vetorC);
				exibirVetor(vetorC);
				break;
			case 4:
				printf("\nDigite qual item deseja verificar no vetor: ");
				scanf("%d", &it);
				if(indice=verItem(vetorC, it) != -1) printf("\n %d-> esse e o indice do item %d", verItem(vetorC, it), it);
				else printf("\nO numero nao existe no vetor.");
				break;
		};
	
	};
	return 0;
};
