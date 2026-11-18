typedef struct{
    int chave;
    char nome[50];

} tipo_elem;

typedef struct no{
    tipo_elem info;
    struct no *prox;
} No;
typedef struct{
    No *head;
} Lista;

void iniciar(Lista *L);
void destruir(Lista *L);
int vazia(Lista *L);
int cheia(Lista *L);
int inserir_inicio(Lista *L, tipo_elem v);
int inserir_final(Lista *L, tipo_elem v);
int inserir_ord(Lista *L, tipo_elem v);
int remover(Lista *L, int chave);
int remover_inicio(Lista *L);
int remover_final(Lista *L);
void exibir(Lista *L);
int buscar(Lista *L, int chave, tipo_elem *v);

//Implementar uma fun��o que retorne a quantidade de elementos existentes nalista.
int tamanho(Lista *L);

//Implementar tamb�m uma vers�o recursiva da opera��o anterior.
int tamanho_rec(Lista *L);

//Alem da funcao:
int buscar(Lista *L, int chave, tipo_elem *v);
//devera ser desenvolvida uma versao recursiva:
int buscar_rec(Lista *L, int chave, tipo_elem *v);
//A funcao devera retornar:
//�h 1, caso o elemento seja encontrado;
//�h 0, caso nao seja encontrado.
//Quando encontrado, o elemento completo devera ser devolvido por meio do parametro v.

//Implementar uma segunda forma de exibi��o utilizando recursividade:
void exibir_rec(Lista *L);
//A fun��o dever� apresentar os elementos na mesma ordem l�gica da lista.

//Exibi��o em ordem inversa � vers�o recursiva
//Implementar:
void exibir_inverso_rec(Lista *L);
//A fun��o dever� exibir os elementos da lista na ordem inversa sem modificar a
//estrutura da lista.

//Implementar uma fun��o que informe quantos elementos possuem chave maior
//que determinado valor:
int contar_maiores(Lista *L, int chave);

//Desenvolver tamb�m a vers�o recursiva:
int contar_maiores_rec(Lista *L, int chave);

/*
A dupla devera implementar uma estrategia para controlar:
 posicao inicial da lista;
 proximo elemento;
 posicoes livres;
 reutilizacao de posicoes apos remocoes.
*/
