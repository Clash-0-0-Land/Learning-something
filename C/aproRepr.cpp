#include <stdio.h>

int main(){
	int num, rep, apr, cont;
	float media, nota, soma;
	
	rep = 0;
	apr = 0;
	
	
	
	for (num=0; num<6; num++){
		for(cont=0; cont<3; cont++){
			printf("Nota %d: ", cont+1);
			scanf("%f", &nota);
			soma+=nota;
		};
		
		media = soma / 3;
		
		if (media < 6) rep+=1;
		else apr+=1;
		
		soma=0;
		media = 0;
		printf("\n\nMedia do aluno registrado.\n");
	};
	
	printf("Somente %d alunos foram aprovados.", apr);
	
};
