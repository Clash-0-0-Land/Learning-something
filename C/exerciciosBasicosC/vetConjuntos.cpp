#include <stdio.h>
#define TF 10

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
	printf("\n");
};

void somaVetores(int vA[TF], int vB[TF], int vC[TF]){
	int i;
	for (i=0; i<TF; i++){
		vC[i] = vA[i] + vB[i];	
	};
};

int verItem(int vetor[TF], int item){
	int i;
	for (i=0; i<TF; i++){
		if (vetor[i] == item) {
			return i;
		};
	};
	return -1;
};


void interVet(int vA [TF], int vB[TF], int vC[TF*2], int &tlcP){
	int i;
	tlcP = 0;
	for(i = 0; i<TF; i++){
		if (verItem(vB, vA[i]) != -1) vC[tlcP++] = vA[i];
	};
	
};

void uniaoVet(int vA [TF], int vB[TF], int vC[TF*2], int &tlcP, int rep){
	int i;
	tlcP = 0;
	if (rep == 0){
		for (i = 0; i<TF; i++){
			vC[tlcP++] = vA[i];
			vC[tlcP++] = vB[i];
		};
	}
	
	else {
		//"Zera" o vetor vC primeiro
		for(i=0;i<TF*2;i++){
			if (verItem(vC, vA[i]) != -1) vC[tlcP++] = -999999;
			if (verItem(vC, vB[i]) != -1) vC[tlcP++] = -999999;
		};
		vC[0] = vA[0];
		tlcP=1;
		
		for (i = 0; i<TF; i++){
			if (verItem(vC, vA[i]) == -1) vC[tlcP++] = vA[i];
			if (verItem(vC, vB[i]) == -1) vC[tlcP++] = vB[i];
		};

	};

};

void difEntreVet(int vA[TF], int vB[TF], int vC[TF*2], int &tlcP){
	int valor, pos, i;
	tlcP=0;
	
	for(i=0;i<TF;i++){
		valor = vA[i];
		pos =  verItem(vB, valor);
		if (pos == -1) {
			vC[tlcP++] = valor;	
		};
	};	
};

void exibirTLC(int vetor[TF*2], int tlcP){
	int i;
	for (i=0; i<tlcP; i++){
		printf("\n Vetor[%d]: [%d]", i, vetor[i]);	
	};
	printf("\n");		
};



int main() {
	int vetorA[TF], vetorB[TF], vetorC[TF*2], opt=0, it, indice, tlc = 0;
	
	while (opt!=8){
		printf("\n1 - Leitura vetor A");
		printf("\n2 - Leitura vetor B");
		printf("\n3 - Diferenca A-B");
		printf("\n4 - Diferenca B-A");
		printf("\n5 - Interseccao A e B");
		printf("\n6 - Uniao de A e B");
		printf("\n7 - Uniao de A e B (sem repeticao de itens)");
		printf("\n8 - Sair");
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
				exibirTLC(vetorC, tlc);
				break;
			case 5:
				interVet(vetorA, vetorB, vetorC, tlc);
				exibirTLC(vetorC, tlc);
				break;
			case 6:
				uniaoVet(vetorA, vetorB, vetorC, tlc, 0);
				exibirTLC(vetorC, tlc);
				break;
			case 7:
				uniaoVet(vetorA, vetorB, vetorC, tlc, 1);
				exibirTLC(vetorC, tlc);
				break;			
				
		};

	};
	return 0;
};
