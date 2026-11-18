#include <stdio.h>
#include <string.h>

struct aluno {
	char nome[20];
	int matr;
	float mediaF;
	
};


int main(){
	int opc, cont;
	char apr[2][20], repr[2][20], al[2][20];
		
	struct aluno alunosTot[2];
		strcpy(alunosTot[0].nome, "italo");
		alunosTot[0].matr = 2051;
		alunosTot[0].mediaF = 10;
		
		strcpy(alunosTot[1].nome, "zezinho");
		alunosTot[1].matr = 2021;
		alunosTot[1].mediaF = 2;
		
		
	for (cont=0; cont<2; cont++){
		strcpy(al[cont], alunosTot[cont].nome);
		printf("%s\n", al[cont]);	
		
	};
	
	
	for (cont = 0; cont < 2; cont++){
        if (alunosTot[cont].mediaF < 6)
            strcpy(repr[cont], alunosTot[cont].nome);
        else
            strcpy(apr[cont], alunosTot[cont].nome);    
    };
	
	printf("Alunos aprovados: \n");
	for (cont=0; cont<2; cont++){
		printf("%s\n", apr[cont]);
		
	};
	
	printf("Alunos reprovados: \n");
	for (cont=0; cont<2; cont++){
		printf("%s\n", repr[cont]);	
	};
	
	return 0;	
};


