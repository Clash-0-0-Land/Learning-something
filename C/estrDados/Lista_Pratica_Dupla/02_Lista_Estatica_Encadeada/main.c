#include <stdio.h>
#include "lista.h"

tipo_elem preencher_elem(tipo_elem elem) {
    printf("Digite a chave do elemento: ");
    scanf("%d", &elem.chave);
    while (getchar() != '\n');
    printf("Digite o nome do produto: ");
    fgets(elem.nome, 50, stdin);
    int cont=0;
    while (1) {
        if (elem.nome[cont] == '\n') {
            elem.nome[cont] = '\0';
            break;
        }
        cont++;
    }
    return elem;
}


int main(){
    int opt=-1;
    tipo_elem elem;
    Lista L;
    iniciar(&L);
    int chave;

    while(opt!=0){

        printf("==============================================\n");
        printf("0 - Sair\n");
        printf("1 - Destruir lista\n");
        printf("2 - Verificar se esta vazia\n");
        printf("3 - Inserir elemento no inicio\n");
        printf("4 - Inserir elemento no final\n");
        printf("5 - Inserir elemento ordenadamente\n");
        printf("6 - Remover determinado elemento\n");
        printf("7 - Remover elemento do inicio\n");
        printf("8 - Remover elemento do final\n");
        printf("9 - Exibir elementos\n");
        printf("10 - Buscar elemento\n");
        printf("11 - Buscar elemento (modo recursivo)\n");
        printf("12 - Verificar tamanho\n");
        printf("13 - Verificar tamanho (modo recursivo)\n");
        printf("14 - Exibir elementos (modo recursivo)\n");
        printf("15 - Exibir elementos inversamente (modo recursivo)\n");
        printf("16 - Verificar a quantidade de elementos com chaves maiores que n\n");
        printf("17 - Verificar a quantidade de elementos com chaves maiores que n (modo recursivo)\n");

        printf("==============================================\n");

        printf("OPCAO: ");
        scanf("%d", &opt);

        switch(opt){
            case 1:
                destruir(&L);
                printf("\nLista destruida com sucesso!");
                break;

            case 2:
                if(vazia(&L)) printf("\nVazia");
                else printf("\n Nao vazia");
                break;

            case 3:
                inserir_inicio(&L, preencher_elem(elem));
                break;
            case 4:
                inserir_final(&L, preencher_elem(elem));
                break;

            case 5:
                inserir_ord(&L, preencher_elem(elem));
                break;

            case 6:
                printf("\nDigite a chave do elemento que deseja remover: ");
                scanf("%d", &chave);

                if(remover(&L, chave)) printf("\nElemento removido com sucesso!\n");
                else printf("\nElemento nao encontrado!\n");
                break;

            case 7:
                if(remover_inicio(&L)) printf("\nElemento removido com sucesso!\n");
                break;

            case 8:
                if(remover_final(&L)) printf("\nElemento removido com sucesso!\n");
                break;

            case 9:
                exibir(&L);
                break;

            case 10:
                printf("\nDigite a chave do elemento que voce quer: ");
                scanf("%d", &chave);
                if(buscar(&L, chave, &elem)) {
                    printf("Elemento encontrado com sucesso!\n");
                    printf("Chave: %d\n", elem.chave);
                    printf("Nome do produto: %s\n", elem.nome);
                }
                else printf("Elemento nao encontrado!\n");
                break;

            case 11:
                printf("\nDigite a chave do elemento que voce quer: ");
                scanf("%d", &chave);
                if(buscar_rec(&L, chave, &elem)) {
                    printf("Elemento encontrado com sucesso!\n");
                    printf("Chave: %d\n", elem.chave);
                    printf("Nome do produto: %s\n", elem.nome);
                }
                else printf("Elemento nao encontrado!\n");
                break;

            case 12:
                printf("\nQuantidade de elementos na lista: %d\n", tamanho(&L));
                break;

            case 13:
                printf("\nQuantidade de elementos na lista: %d\n", tamanho_rec(&L));
                break;

            case 14:
                exibir_rec(&L);
                break;

            case 15:
                exibir_inverso_rec(&L);
                break;

            case 16:
                printf("\nDigite a chave do elemento: ");
                scanf("%d", &chave);
                printf("Quantidade de elementos maiores que %d: %d\n", chave, contar_maiores(&L, chave));
                break;

            case 17:
                printf("\nDigite a chave do elemento: ");
                scanf("%d", &chave);
                printf("Quantidade de elementos maiores que %d: %d\n", chave, contar_maiores_rec(&L, chave));
                break;

            default:
                printf("Digite uma opcao valida!\n\n");
                break;
        }
           printf("==============================================");
    }

	destruir(&L);
    return 0;
}
