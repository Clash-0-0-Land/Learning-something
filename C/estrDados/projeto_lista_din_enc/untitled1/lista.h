//Lista encadeada dinâmica
//Definindo o tipo abstrato de dados: objeto e operações
//Definir a estrutura de dados: lista encadeada dinâmica

//objeto a ser manipulado
typedef struct{
    int chave;
    /*se tiver outros dados, inserir aqui*/
}tipo_elem;

//estrutura de dados

//estrutura nó
typedef struct no{
    tipo_elem info;
    struct no *prox;
}No;

//estrutura lista
typedef struct{
    No *head;
}Lista;

//Definir as operações a serem realizadas com o objeto

void iniciar(Lista *L);
void destruir(Lista *L);
int vazia(Lista *L);
int inserir_inicio(Lista *L, tipo_elem v);
int inserir_final(Lista *L, tipo_elem v);
int inserir_ord(Lista *L, tipo_elem v);
int remover(Lista *L, int chave);
int remover_inicio(Lista *L);
int remover_final(Lista *L);
void exibir(Lista *L);
int buscar(Lista *L, int chave, tipo_elem *v);
