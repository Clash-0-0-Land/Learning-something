#include <stdio.h>
#include "pilha.h"

int vazia(Pilha *p) {
    if (p->topo == -1) return 1;
    return 0;
}

int cheia(Pilha *p) {
    if (p->topo == MAX) return 1;
    return 0;
}

void iniciar_pilha(Pilha *p) {
    p->topo = -1;
}

void push(Pilha *p, Tipo_elem elemento) {
    if (!cheia(p)) {
        p->elementos[++p->topo] = elemento;
        return;
    }
    printf("Lista cheia!\n");
}

void pop(Pilha *p) {
    if (!vazia(p)) {
        p->elementos[--p->topo] = p->elementos[p->topo];
        return;
    }
    printf("Lista vazia!\n");
}

Tipo_elem pop_up(Pilha *p) {
    pop(p);
    return p->elementos[p->topo+1];
}

void destruir_pilha(Pilha *p) {
    iniciar_pilha(p);
}

Tipo_elem topo(Pilha *p) {
    return p->elementos[p->topo];
}

