#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

void iniciar(Lista *L) {

}

void destruir(Lista *L) {


}

int cheia(Lista *L) {


}
int vazia(Lista *L) {

}
int inserir_inicio(Lista *L, tipo_elem v) {

}
int inserir_final(Lista *L, tipo_elem v) {

}
int inserir_ord(Lista *L, tipo_elem v){}
int remover(Lista *L, int chave){}
int remover_inicio(Lista *L){}
int remover_final(Lista *L){}

//Italo
void exibir(Lista *L) {
    No *p= L->head;
    while (p != NULL) {
        printf("Chave: %d\n", p->info.chave);
        printf("Nome: %s\n", p->info.chave);
        p = p->prox;
    }
}


int buscar(Lista *L, int chave, tipo_elem *v) {
    No *p= L->head;
    while (p != NULL) {
        if (p->info.chave == chave) {
            *v = p->info;
            return 1;
        }
    }
    return 0;
}

int tamanho(Lista *L) {
    int tam=0;
    No *p= L->head;
    while (p != NULL) {
        tam++;
        p = p->prox;
    }
    return tam;
}

int tamanho_rec_aux(No *p) {
    if (p == NULL) {
        return 0;
    }
    return 1 + tamanho_rec_aux(p->prox);
}

int tamanho_rec(Lista *L) {
    return tamanho_rec_aux(L->head);
}

int buscar_rec_aux(No *p, int chave, tipo_elem *v) {
    if (p==NULL) return 0;
    if (p->info.chave == chave) {
        *v = p->info;
        return 1;
    }
    return buscar_rec_aux(p->prox, chave, v);
}

int buscar_rec(Lista *L, int chave, tipo_elem *v) {
    return buscar_rec_aux(L->head, chave, v);
}


void exibir_rec_aux(No *p) {
    if (p == NULL) return;
    printf("Chave: %d\n", p->info.chave);
    printf("Nome: %s\n", p->info.nome);
    exibir_rec_aux(p->prox);
}

void exibir_rec(Lista *L) {
    exibir_rec_aux(L->head);
}


void exibir_inverso_rec_aux(No *p) {
    if (p == NULL) return;
    exibir_inverso_rec_aux(p->prox);
    printf("Chave: %d\n", p->info.chave);
    printf("Nome: %s\n", p->info.nome);
}

void exibir_inverso_rec(Lista *L) {
    return exibir_inverso_rec_aux(L->head);
}

int contar_maiores(Lista *L, int chave) {
    int cont=0;
    No *p= L->head;
    while (p != NULL) {
        if (p->info.chave > chave) {
            cont++;
            p = p->prox;
        }
    }
    return cont;
}


int contar_maiores_rec_aux(No *p, int chave) {
    if (p == NULL) return 0;
    if (p->info.chave>chave) {
        return 1+contar_maiores_rec_aux(p->prox, chave);
    }
}

int contar_maiores_rec(Lista *L, int chave) {
    contar_maiores_rec_aux(L->head, chave);
}

