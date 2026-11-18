#define MAX 4

typedef struct{
	int chave;
} Tipo_elem;

typedef struct{
	Tipo_elem info;
	int prox;
}No;

typedef struct {
	No A[MAX];
	int inicio;
	int dispo;
}Lista;

//Operacoes;

int ver_vazia(Lista *l);
int ver_cheia(Lista *l);

void exibir(Lista *l);
int definir(Lista *l);

int inserir_fim(Lista *l, Tipo_elem v);
int inserir_inicio(Lista *l, Tipo_elem v);
int inserir_ordenado(Lista *l, Tipo_elem v);

int remover(Lista *l, int chave);
void esvaziar(Lista *lista);
int busca(Lista *l, int chave);