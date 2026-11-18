#include <stdio.h>
#include "pilha.h"
#include <stdlib.h>
#include <conio.h>

void imprimir_pilha(Pilha *p) {
    system("cls");
    int i = 0;
    for (i = 0; i<= p->topo; i++) printf("%c ", p->elementos[i]);
}

void editor() {
    Pilha p;
    Tipo_elem c;
    iniciar_pilha(&p);

    do {
        c = _getch();
        switch (c) {
            case 0x0d:
                break;
            case '#':
                if (vazia(&p)) {
                    printf("Erro!\n");
                    break;
                }
                pop_up(&p);
                break;
            case '@':
                iniciar_pilha(&p);
                break;
            default:
                if (cheia(&p)) {
                    printf("Erro!\n");
                    break;
                }
                push(&p, c);
                system("cls");
                break;
        }

        imprimir_pilha(&p);
    }while (c!='-');
}


int main(void) {
    editor();

    return 0;
}
