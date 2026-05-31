#include <stdio.h>
#define TF 5

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


void interVet(int vA [TF], int vB[TF], int vC[TF*2]){
	int i, tamanho = 0;
	
	for(i = 0; i<TF; i++){
		if (verItem(vB, vA[i]) != -1) vC[tamanho++] = vA[i];
	};
	
};

void uniaoVet(int vA [TF], int vB[TF], int vC[TF*2]){
	int i, tamanho = 0;
	for (i = 0; i<TF; i++){
		vC[tamanho++] = vA[i];
	};
	for (i = 0; i<TF; i++){
		vC[tamanho++] = vB[i];
	};
};

void difEntreVet(int vA[TF], int vB[TF], int vC[TF*2], int *tlcP){
	int i, valor, pos;
	
	for(i=0;i<10;i++){
		valor = vC[i];
		pos =  verItem(vB, valor);
		if (pos == -1) {
			vC[tlcP] = valor;	
			tlcP++;
		};
	};			
};

void exibirTLC(int vetor[TF*2], int tlcP){
	int i;
	for (i=0; i<tlc; i++){
		printf("\n Vetor[%d]: [%d]", i, vetor[i]);	
	};		
};



int main(){
	int vetorA[TF], vetorB[TF], vetorC[TF*2], opt=0, it, indice, tlc = 0;
	
	while (opt!=6){
		printf("\n1 - Leitura vetor A");
		printf("\n2 - Leitura vetor B");
		printf("\n3 - Diferenca A-B");
		printf("\n4 - Diferenca B-C");
		printf("\n5 - Interseccao A e B");
		printf("\n6 - Sair");
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
				difEntreVet(vetorA, vetorB, vetorC, tlc);
				exibirTLC(vetorC, tlc);
				break;
			case 4:
				difEntreVet(vetorB, vetorA, vetorC, tlc);
				exibirVetor(vetorC, tlc);
				break;
			case 5:
				interVet(vetorA, vetorB, vetorC);
				exibirVet(vetorC);
				break;
			
			/*case 4:
				printf("\nDigite qual item deseja verificar no vetor: ");
				scanf("%d", &it);
				if(indice=verItem(vetorC, it) != -1) printf("\n %d-> esse e o indice do item %d", verItem(vetorC, it), it);
				else printf("\nO numero nao existe no vetor.");
				break;*/				
				
		};

	};
	return 0;
};
