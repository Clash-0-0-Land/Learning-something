#include <stdio.h>
#include <string.h>

struct cliente{
	char nome[20];
	char produto[20];
	float preco;	
	
};

/*
int main(){
	
	struct cliente con[1];
		strcpy(con[0].nome, "Italo");
		strcpy(con[0].produto, "Lampada");
		con[0].preco = 12;
	
	printf("O cliente %s comprou o produto %s por %.2f reais.", con[0].nome, con[0].produto, con[0].preco);
	
	return 0;
};*/


int main(){
	
	struct cliente c;
	printf("Digite o nome do cliente: ");
	scanf("%s", c.nome);
	
	
	
	
	
	printf("Nome: %s", c.nome);
	
	return 0;
}
