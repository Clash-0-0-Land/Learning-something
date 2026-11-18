#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

#include <string.h>

void iniciar(Lista *l) {
    l->head = NULL;
}

void destruir(Lista *L) {
    No *p;
    while (L->head) {
        p=L->head;
        L->head = L->head->prox;
        free(p);
    }
}

int vazia(Lista *L) {
    return L->head == NULL;
}

int inserir_inicio(Lista *L, tipo_elem v) {
    No *p;
    p = (No *) malloc(sizeof(No));
    if (!p) return 0;
    p->info = v;
    p->prox = L->head;
    L->head = p;
}

int inserir_final(Lista *L, tipo_elem v) {
    No *p, *q;
    if (vazia(L)) return inserir_inicio(L, v);
    p = L->head;
    while (p->prox) {
        p=p->prox;
    }
    q= (No* )malloc(sizeof(No));
    if (!q) return 0;
    q->info = v;
    q->prox = NULL;
    p->prox = q;
}

int inserir_ord(Lista *L, tipo_elem v) {
    if (vazia(L)) return inserir_inicio(L, v);
    if (v.chave<L->head->info.chave) return inserir_inicio(L, v);

    No *p, *q;
    p = L->head;
    q=NULL;

    while (p && p->info.chave<v.chave) {
        q=p;
        p=p->prox;
    }
    p = (No* )malloc(sizeof(No));

    if (!p) return 0;
    p->info = v;
    p->prox = q->prox;
    q->prox = p;

    return 1;
}

int remover(Lista *L, int v) {
    if (vazia(L)) return 0;
    No *p, *q;
    p = L->head;
    while (p && p->info.chave<v) {
        q=p;
        p= p->prox;
    }

    if (p->info.chave==v) {
        q->prox = p->prox;
        free(p);
    }
    return 1;
}

int remover_inicio(Lista *L) {
    if (vazia(L)) return 0;
    No *p = L->head;
    L->head = p->prox;
    return 1;
}

int remover_final(Lista *L) {
    if (vazia(L)) return 0;
    No *p, *q;
    p = L->head;

    while (p->prox) {
        q=p;
        p=p->prox;
    }

    q->prox = NULL;
    free(p);
    return 1;
}

void exibir(Lista *L) {
    No *p;
    p=L->head;
    while (p) {
        printf("%d ", p->info.chave);
        p=p->prox;
    }
}

int buscar(Lista *L, int chave, tipo_elem *v) {
    if (vazia(L)) return 0;
    No *p;
    p = L->head;
    while (p && p->info.chave< chave) {
        p= p->prox;
    }
    if (!p || p->info.chave!=chave) {
        return 0;
    }
    *v= p->info;
    return 1;
}

