#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opt, n_elementos;
	Lista lista;
	Tipo_elem elem;
	definir(&lista);

	do{
		printf("\n=========================");

		printf("\n0 - Sair\n");
		printf("1 - Exibir\n");
		printf("2 - Inserir no inicio\n");
		printf("3 - Inserir no final\n");
		printf("4 - Verificar vazia\n");
		printf("5 - Verificar cheia\n");
		printf("6 - Remover\n");
		printf("7 - Esvaziar\n");
		printf("8 - Inserir ordenado\n");
		printf("9 - Buscar elemento\n");

		printf("\nDigite uma opcao: ");
		scanf("%d", &opt);
		printf("=========================\n");

		switch(opt){
			case 0:
				printf("Saindo do programa...\n");
				break;
			case 1:
				exibir(&lista);
				break;
			case 2:
				printf("Digite a chave: ");
				scanf("%d", &elem.chave);
				inserir_inicio(&lista, elem);
				break;
			case 3:
				printf("Digite a chave: ");
				scanf("%d", &elem.chave);
				inserir_fim(&lista, elem);
				break;
			case 4:
				ver_vazia(&lista);
				break;
			case 5:
				ver_cheia(&lista);
				break;
			case 6:
				printf("Digite a chave que deseja remover: ");
				scanf("%d", &elem.chave);
				remover(&lista, elem.chave);
				break;
			case 7:
				esvaziar(&lista);
				break;
			case 8:
				printf("Digite a chave: ");
				scanf("%d", &elem.chave);
				inserir_ordenado(&lista, elem);
				break;
			case 9:
				printf("Digite a chave que deseja buscar: ");
				scanf("%d", &elem.chave);
				busca(&lista, elem.chave);
				break;
			default:
				printf("Digite uma opcao valida!\n");
				break;
		}

	} while(opt!=0);
	return 0;
}