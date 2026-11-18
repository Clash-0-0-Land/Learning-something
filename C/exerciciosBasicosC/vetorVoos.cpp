#include <stdio.h>
#define lin 1

void cadastro(int vet1[lin], int vet2[lin]){

	int q;
	for(q=0; q<lin;q++){
		printf("\nDigite o numero do voo na posicao %d: ", q);
		scanf("%d", &vet1[q]);	
		printf("\nDigite o numero de passagens ja vendidas para o voo %d, localizado na pos %d: ", vet1[q], q);
		scanf("%d", &vet2[q]);
	};
};

void exibirVetores(int vet1[lin], int vet2[lin]){
	int q;
	printf("\nNumero do voo | Numero de passagens compradas\n\n");
	for (q=0; q<lin; q++){
		printf("[ %d ] ", vet1[q]);
		printf("[ %d ] ", vet2[q]);
		printf("\n");
	};
};

int buscarVoo(int vet[lin], int nVoo){
	int q;
	for(q=0; q<lin; q++){
		if (vet[q] == nVoo) return q;
		else return -1;
	};
};

void comprarPas(int vetVoo[lin], int quantVet[lin], int nVoo){
	int quantidade, nV=buscarVoo(vetVoo, nVoo), pasDisp;
	if (nV!=-1){
		if (quantVet[nV] < 150){
			printf("\nVoo localizado. Ele tem um total de %d passagens dispnoveis. Quantas passagens voce deseja comprar: ", 150 - quantVet[nV]);
			scanf("%d", &quantidade);
			pasDisp = 150 - quantVet[nV];
			if(quantidade<=pasDisp) {
				printf("\nPassagens compradas com sucesso.");
				quantVet[nV]+=quantidade;
			}
			else printf("\nNao e possivel comprar esse numero de passagens");
		}
		else printf("Voo lotado.");
	}
	else printf("Seu voo nao foi localizado.");
};

int main(){
	int vetorVoo[lin], vetorNumPas[lin], opt, voo, verVoo;
	
	while(opt!=5){
		printf("\n1 - Ler vetores");
		printf("\n2 - Exibir");
		printf("\n3 - Buscar voo");
		printf("\n4 - Comprar passagem");
		printf("\n5 - Sair");
		
		printf("\n\nOpcao: ");
		scanf("%d", &opt);
		
		switch(opt){
			case 1:
				cadastro(vetorVoo, vetorNumPas);
				break;
			case 2:
				exibirVetores(vetorVoo, vetorNumPas);
				break;
			case 3:
				printf("\nDigite o numero do voo que voce deseja buscar: ");
				scanf("%d", &voo);
				verVoo= buscarVoo(vetorVoo, voo);
				if(verVoo != -1) printf("\nVoo localizado com sucesso na posicao %d.", verVoo);
				else printf("\nEsse voo nao existe");
				break;
			case 4:
				printf("\nDigite o numero do voo que voce deseja buscar: ");
				scanf("%d", &voo);
				comprarPas(vetorVoo, vetorNumPas, voo);
				break;
		};
	};
	
	return 0;
};
