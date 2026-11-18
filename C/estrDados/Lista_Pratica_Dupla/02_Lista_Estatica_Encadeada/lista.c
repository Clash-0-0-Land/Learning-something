#include "lista.h"
#include <stdio.h>

void iniciar(Lista *L){
		int i;
		L->inicio = -1;
		L->dispo = 0;
		for(i=0;i<MAX-1;i++){
			L->A[i].prox =i+1;
		}
			
		L->A[i].prox=-1; 
	}
	
int inserir_final(Lista *L,tipo_elem v){
		int i,k;
		if(cheia(L)) return 0;
		if(vazia(L)) return (inserir_inicio(L,v));
		
		i=L->inicio;
		while(L->A[i].prox!=-1)
			i=L->A[i].prox;
		k=L->dispo;
		L->dispo=L->A[k].prox;
		L->A[k].info =v;
		L->A[k].prox=-1;
		L->A[i].prox=k;
		return 1;
		
	}
	
int inserir_inicio(Lista *L, tipo_elem v){
		if(cheia(L)) return 0;
		int k;
		k=L->dispo;
		L->dispo=L->A[k].prox;
		L->A[k].info=v;
		L->A[k].prox=L->inicio;
		L->inicio=k;
		return 1;
	}
	
int inserir_ord(Lista *L, tipo_elem v){
		int k,i,ant;
		if(cheia(L)) return 0;
		if(vazia(L)) return (inserir_inicio(L,v));
	
		k=L->dispo;
		L->dispo=L->A[k].prox;
		//buscar a posi��o
		
		i=L->inicio;
		ant =-1;
		while((i!=-1)&&L->A[i].info.chave<v.chave){
			ant =i;
			i=L->A[i].prox;
		}
		
		if(ant==-1)return(inserir_inicio(L,v));
		L->A[k].info=v;
		L->A[k].prox=i;
		L->A[ant].prox=k;
		return 1;
	}
	
int remover(Lista *L, int chave){
		int ant,i;
		if(vazia(L)) return 0;
		ant =-1;
		i=L->inicio;
		while((i!=-1)&&L->A[i].info.chave!=chave){
			ant =i;
			i=L->A[i].prox;
		}
		if(i==-1) return 0;
		
		if(ant==-1) //remove inicio
			L->inicio=L->A[i].prox;
		else
			L->A[ant].prox=L->A[i].prox;
		L->A[i].prox = L->dispo;
		L->dispo=i;
		
		return 1;
	}
	
void destruir(Lista *L ){
		iniciar(L);
	} 
	
int buscar(Lista *L, int chave, tipo_elem *v){
		int i;
		i=L->inicio;
		while((i!=-1)&&L->A[i].info.chave!=chave)
			i=L->A[i].prox;
		if(i==-1)
			return 0;
		*v=L->A[i].info;
		return 1;
	}
	
void exibir(Lista *L){
	if(vazia(L));
	else{
		int i;
		for(i=L->inicio;i!=-1;i=L->A[i].prox){
			printf(" %d",L->A[i].info.chave);
		}
	}
}
	
int vazia(Lista *L){
		return (L->inicio==-1);
	}
	
int cheia(Lista *L){
		return (L->dispo==-1);
	}

int remover_inicio(Lista *L){
	if(vazia(L)) return 0;
	L->inicio=L->A[L->inicio].prox;
}
int remover_final(Lista *L){
	if(vazia(L)) return 0;
	int i;
	int ant =-1;
	i=L->inicio;
	while(i!=-1){
		ant =i;
		i=L->A[i].prox;
	}
	
	if(ant==-1)
		L->inicio=L->A[i].prox;
	else
		L->A[ant].prox=i;
	L->A[i].prox = L->dispo;
	L->dispo=ant;
}
int tamanho(Lista *L){
	if(vazia(L)) return 0;
	int i,c=0;
	i=L->inicio;
	while(i!=-1){
		i=L->A[i].prox;
		c++;
	}
	return c;
}

int tamanho_rec(Lista *L){
	if(vazia(L)) return 0;
	int c=0;
	int i = L->inicio;
	c = rec_tam(*L,i);
	return c;
}

int rec_tam(Lista *L, int i){
	if(i!=-1){
		i=L->A[i].prox;
		return 1 + rec_tam(L, i);
	}
	return 0;
}

int rec_busc(Lista *L, int chave, tipo_elem *v, int i){
	if(i==-1) return 0;
	else{
		if(L->A[i].info.chave==chave){
			*v=L->A[i].info;
			return 1;
		}
		else{
			i=L->A[i].prox;
			return rec_busc(L,chave,v,i);
		}
	}
}

int buscar_rec(Lista *L, int chave, tipo_elem *v){
	return rec_busc(L,chave,v,L->inicio);
}

void rec_exib(Lista *L, int i){
	if(i!=-1){
		printf(" %d",L->A[i].info.chave);
		i=L->A[i].prox;
		rec_exib(L, i);
	}
}

void exibir_rec(Lista *L){
	if(vazia(L)) printf("\n vazia");
	else{
		int i=L->inicio;
		rec_exib(L,i);
	}
}

void rec_exib_inv(Lista *L, int i){
	if(i!=-1){
		int k=i;
		i=L->A[i].prox;
		rec_exib_inv(L,i);
		printf(" %d",L->A[k].info.chave);
	}
}

void exibir_inverso_rec(Lista *L){
	if(vazia(L)) printf("\n vazia");
	else{
		int i = L->inicio;
		rec_exib_inv(L, i);
	}
}



int contar_maiores(Lista *L, int chave){
	if(vazia(L)) return 0;
	int i,c=0;
	i=L->inicio;
	while(i!=-1){
		if(L->A[i].info.chave>chave) c++;
		i=L->A[i].prox;
	}
	return c;
}

int rec_maior(Lista *L, int chave, int i){
	int c=0;
	if(i!=-1){
		i=L->A[i].prox;
		if(L->A[i].info.chave>chave) c++;
		return c + rec_maior(L, chave, i);
	}
	return 0;
}

int contar_maiores_rec(Lista *L, int chave){
	int i=L->inicio;
	return rec_maior(*L, chave, i);
}