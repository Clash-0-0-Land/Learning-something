#include "lista.h"
#include <stdio.h>


int ver_vazia(Lista *l){
	int ver_cheia(Lista *l);
	return (l->n_elem==0);
}

int ver_cheia(Lista *l){
	return (l->n_elem==MAX);
}

int definir(Lista *l){
	l->n_elem=0;	
	return 1;
}

void exibir(Lista *l){
	int q;
	if (ver_vazia(l)){
		printf("Lista vazia!");
		return;
	}
	
	for ( q=0; q<l->n_elem; q++){
		printf("%d", l->A[q].chave);
	}
}

int inserir_fim(Lista *l, Elem v){
	if(ver_cheia(l)){
		printf("Lista cheia");
		return 0;
	}
	l->A[l->n_elem]= v;
	printf("Insercao ocorrida com sucesso!\n");
	return 1;
}	

int inserir_inicio(Lista *l, Elem v){
	int q;
	if(ver_cheia(l)){
		printf("Lista cheia\n");
		return 0;
	}
		
	for (q=1; q<l->n_elem; q++){
		l->A[q] = l->A[q-1];		
	}
	
	l->A[0]=v;
	l->n_elem++;
	printf("Insercao ocorrida com sucesso!\n");
	return 1;

};

int inserir_ordenado(Lista *l, Elem v);


int remover(Lista *l, int chave);
void esvaziar(Lista *lista);








