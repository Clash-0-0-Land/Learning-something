#include <stdio.h>
#include "lista.h"

int ver_vazia(Lista *l) {
    return l->inicio==-1;
}

int ver_cheia(Lista *l) {
    return l->dispo==-1;
}

void exibir(Lista *l) {
    if (ver_vazia(l)) {
        printf("Lista vazia!\n");
        return;
    }
    for (int i=l->inicio; i!=-1; i=l->A[i].prox) {
        printf("%d ", l->A[i].info.chave);
    }
    printf("\n");
}

int definir(Lista *l) {
    int i;
    l->inicio=-1;
    l->dispo=0;
    for (i=0;i<MAX-1;i++) {
        l->A[i].prox=i+1;
    }
    l->A[i].prox=-1;
}

int inserir_fim(Lista *l, Tipo_elem v) {
    if (ver_cheia(l)) {
        printf("Lista cheia!\n");
        return 0;
    }
    if (ver_vazia(l)) return inserir_inicio(l, v);

    int j=l->inicio;
    while (l->A[j].prox!=-1) {
         j=l->A[j].prox;
    }
    j = l->dispo;
    l->dispo = l->A[l->dispo].prox;
    l->A[j].info=v;
    l->A[j].prox=-1;
    l->A[j].prox=j;

    return 1;
}

int inserir_inicio(Lista *l, Tipo_elem v) {
    if (ver_cheia(l)) {
        printf("Lista cheia!\n");
        return 0;
    }

    int j=l->dispo;
    l->dispo=l->A[j].prox;
    l->A[j].info=v;
    l->A[j].prox=l->inicio;
    l->inicio=j;
    return 1;
}

int inserir_ordenado(Lista *l, Tipo_elem v) {
    if (ver_cheia(l)) {
        printf("Lista cheia!\n");
        return 0;
    }
    if (ver_vazia(l)) {
        printf("Lista vazia!\n");
        return inserir_inicio(l, v);
    }
    int j=l->dispo;
    l->dispo=l->A[j].prox;

    //buscar a posição

    int i= l->inicio;
    int ant=-1;
    while (l->A[i].prox!=-1 && l->A[i].info.chave<v.chave) {
        ant=i;
        i=l->A[i].prox;
    }
    if (ant==-1) return inserir_inicio(l, v);
    l->A[j].prox=i;
    l->A[ant].prox=j;
    return 1;
}

int remover(Lista *l, int chave) {
    if (ver_vazia(l)) {
        printf("Lista vazia!\n");
        return 0;
    }
    int ant=-1;
    int i=l->inicio;
    while (i!=-1 && l->A[i].info.chave!=chave) {
        ant=i;
        i=l->A[i].prox;
    }
    if (ant==1) {
        l->inicio=l->A[i].prox;
    }
    else {
        l->A[ant].prox=l->A[i].prox;
    }

    l->A[i].prox=l->dispo;
    l->dispo=i;
    return 1;
}

void esvaziar(Lista *l) {
    definir(l);
}

int busca(Lista *l, int chave) {
    int i;
    i=l->inicio;
    while (i!=-1 && l->A[i].info.chave!=chave) {
        i=l->A[i].prox;
    }
    if (i==-1) return 0;
    return 1;
}