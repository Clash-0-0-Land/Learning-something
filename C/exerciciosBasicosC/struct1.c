#include <stdio.h>
#include <string.h>

typedef struct{
	int matricula;
	char nome[20];
	float nota1, nota2, nota3;
	int frequencia;
	
} tpAluno;


int main(){
	tpAluno a;
		a.matricula = 123456;		
		strcpy(a.nome, "Seb");
		a.nota1 = 4.5;
		a.nota2 = 7.0;
		a.nota3 = 6.4;
		a.frequencia = 20;
	printf("Matricula: %d\nNome: %s\nNota 1: %f\nNota 2: %f\nNota 3: %f\nFrequancia: %d", a.matricula, a.nome, a.nota1, a.nota2, a.nota3, a.frequencia);
	return 0;
};
