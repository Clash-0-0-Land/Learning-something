#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
	int op;
	Lista L;
	tipo_elem v;
	int chave;

	iniciar(&L);
	do{
		system("cls");
		printf("1-Vazia\n");
		printf("2-Inserir inicio\n");
		printf("3-Inserir final\n");
		printf("4-Inserir lista ordenada\n");
		printf("5-Remover inicio\n");
		printf("6-Remover final\n");
		printf("7-Remover elemento\n");
		printf("8-Destruir\n");
		printf("9-Exibir\n");
		printf("0-Sair\n\n");

		printf("Digite a opcao:");
		scanf("%d", &op);
		switch(op){
			case 1://vazia
				if(vazia(&L))
					printf("Lista vazia!\n");
			break;
			case 2: // inserir inicio
				printf("Digite a chave: ");
				scanf("%d", &v.chave);
				if(inserir_inicio(&L,v))
					printf("Elmemento inserido com sucesso!\n");
				else
					printf("\nNao foi possivel inserir\n");
			break;
			case 3: // inserir final
				printf("Digite a chave: ");
				scanf("%d", &v.chave);
				if(inserir_final(&L,v))
					printf("Elmemento inserido com sucesso!\n");
				else
					printf("\nNao foi possivel inserir\n");
			break;
			case 4: //inserir lista ordenada
				printf("Digite a chave: ");
				scanf("%d", &v.chave);
				if(inserir_ord(&L,v))
					printf("Elmemento inserido com sucesso!\n");
				else
					printf("\nNao foi possivel inserir\n");
			break;
			case 5: // remover inicio
				if(remover_inicio(&L))
					printf("\nElemento removido!\n");
				else
					printf("\nNao foi possivel remover\n");
			break;
			case 6: // remover final
				if(remover_final(&L))
					printf("\nElemento removido!\n");
				else
					printf("\nNao foi possivel remover\n");
			break;
			case 7: // remover elemento
				printf("Digite a chave do elemento a ser removido: ");
				scanf("%d", &chave);
				if(remover(&L, chave))
					printf("\nElemento removido!\n");
				else
					printf("\nNao foi possivel remover\n");
			break;
			case 8: // destruir lista
				destruir(&L);
			break;
			case 9: // exibir
				exibir(&L);
			break;
			default:
				printf("\nopcao invalida!\n");
			break;
		}
		system("pause");
	}while(op!=0);
	destruir(&L);
	return 0;
}