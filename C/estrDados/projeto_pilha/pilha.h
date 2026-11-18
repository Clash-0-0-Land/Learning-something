#define MAX 10

typedef char Tipo_elem;

typedef struct {
    Tipo_elem elementos[MAX];
    int topo;
} Pilha;

//Operações

int vazia(Pilha *p);

int cheia(Pilha *p);

void iniciar_pilha(Pilha *p);

void push(Pilha *p, Tipo_elem elemento);

void pop(Pilha *p);

Tipo_elem pop_up(Pilha *p);

void destruir_pilha(Pilha *p);

Tipo_elem topo(Pilha *p);
