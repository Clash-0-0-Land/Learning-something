#define MAX 3

typedef struct{
	int chave;

} Elem;

typedef struct{
	int n_elem;
	Elem A[MAX];	
}Lista;

//Operacoes;

int ver_vazia(Lista *l);
int ver_vazia(Lista *l);

void exibir(Lista *l);
int definir(Lista *l);

int inserir_fim(Lista *l, Elem v);
int inserir_inicio(Lista *l, Elem v);
int inserir_ordenado(Lista *l, Elem v);
int remover(Lista *l, int chave);
void esvaziar(Lista *lista);
