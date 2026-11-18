#include <stdio.h>
#include <cstdlib>
typedef struct {
	char *nome;
	char *telefone;
	char *email;
} Contato;

void copia_string(char **copia, char fonte[]){
	int cont=0;
	while(fonte[cont]!='\0') cont++;
	cont++;
	*copia = (char *) malloc(cont*sizeof(char));
	for (int q=0; q<cont; q++){
		(*copia)[q] = fonte[q];
	}
}

void cadastrar(Contato **contato, int *tam_max){
	char nome[512], tel[512], email[512];
	int cont=0;

	*contato = (Contato *) realloc(*contato, ((*tam_max)+1)*sizeof(Contato));

	printf("Digite o nome: ");
	fgets(nome, 512, stdin);

	printf("Digite o telefone: ");
	fgets(tel, 512, stdin);	

	printf("Digite o email: ");
	fgets(email, 512, stdin);

	copia_string(&(*contato)[*tam_max].nome, nome);
	copia_string(&(*contato)[*tam_max].telefone, tel);
	copia_string(&(*contato)[*tam_max].email, email);

	(*tam_max)++;
	printf("\nCadastro ocorrido com sucesso!\n\n");
}

void listar_contatos(Contato contatos[], int *tam_max){
	if (*tam_max==0) return;
	for (int q=0; q<*tam_max; q++){	
		printf("\nNome do contato %d: %s", q, contatos[q].nome);
		printf("Nome do contato %d: %s", q, contatos[q].telefone);
		printf("Nome do contato %d: %s\n", q, contatos[q].email);

	}
}

int buscar(Contato contatos[], int *tam_max){
	char entrada[512];
	printf("\nDigite o nome do contato: ");
	fgets(entrada, 512, stdin);

	for (int q=0; q<*tam_max; q++){
		for (int i=0; i<512; i++){
			if (entrada[i] == '\n' && contatos[q].nome[i] == entrada[i]) return q;
		}
	}
	return -1;
}

void remover(Contato **contatos, int *tam_max){
	int pos;
	pos = buscar(*contatos, (*tam_max));
	for(int q=0; q<cap-1; q++){
		if (q>=pos){
			(*contatos) = (int *) realloc(*contatos, (*tam_max)-1*sizeof(contatos));
			(*contatos)[q] = contatos[q+1];
		}
    	
   	}
  	printf("\n");

   	vetor = (int *) realloc(vetor, (*tam_max)-1);

}

int main(){
	int opt=0, tam_max=0, pos=-1;
	Contato *contatos;

	while(opt!=5){
		printf("Selecione uma das opcoes abaixo\n");
		printf("=========================================\n");
		
		printf("1 - Cadastrar contato\n");
		printf("2 - Listar contatos\n");
		printf("3 - Pesquisar contato pelo nome\n");
		printf("4 - Remover contato\n");
		printf("5 - Encerrar\n");

		printf("\nOPCAO: ");
		scanf("%d", &opt);
		getchar();

		switch (opt) {
			case 1:
				cadastrar(&contatos, &tam_max);
				break;
			case 2:
				listar_contatos(contatos, &tam_max);
				break;
			case 3:
				pos = buscar(contatos, &tam_max);
				if (pos!=-1) {
					printf("==================\n");
					printf("Nome: %s\n", contatos[pos].nome);
					printf("Telefone: %s\n", contatos[pos].telefone);
					printf("Email: %s\n", contatos[pos].email);
					printf("==================\n");					
				}
				else printf("Contato nao encontrado!\n");
				break;
			case 4:
				printf("Programa")
				break;
			case 5:
				printf("Encerrando programa...\n");
				break;
			default:
				printf("Digite uma opcao valida!\n");
				break;
		}
		printf("=========================================\n");
	}


	free(contatos);
	return 0;
}