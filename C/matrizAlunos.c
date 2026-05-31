#include <stdio.h>
#define col 4
#define lin 5


void cadastro(float m[lin][col]){
	int q;
	
	for (q=0; q<lin; q++){
		printf("\nDigite o numero de matricula do aluno %d: ", q);
		scanf("%f", &m[q][0]);	
		
		printf("\nMedia dos trabalhos do aluno %d: ", q);
		scanf("%f", &m[q][1]);
		
		printf("\nMedia das provas do aluno %d: ", q);
		scanf("%f", &m[q][2]);
		
		printf("\nAluno %d cadastrado com sucesso!", q);
	};
};


void exibirValParc(float m[lin][col]){
	int q, i, colAjus = col-1;
	
	printf("\n");
	for (q=0; q<lin;q++){
		
		for(i=0; i<colAjus; i++){
			printf("[ %.1f ]", m[q][i]);	
		};
		printf("\n");
	};
	
};
	
	
void calcMedia(float m[lin][col]){
	int q, i;
	float soma, media;
	for (q=0; q<lin; q++){
		
		soma+=(m[q][2]*0.2);
		soma+=(m[q][3]*0.8);
		
		media = soma/2*10;
		m[q][col-1] = media;
		if(media>=6) printf("\nMedia: %.2f. Aluno aprovado.\n", media);
		else printf("\nMedia: %.2f. Aluno reprovado.\n", media);
	};
	
};
	
	
void exibirMat(float m[lin][col]){
	int q, i;
	printf("\n");
	for (q=0; q<lin;q++){
		
		for(i=0; i<col; i++){
			printf("[ %.1f ]", m[q][i]);	
			
		};
		printf("\n");
		
	};
	
};





int main(){
	float notasAlunos[lin][col];
	int opt;
	
	while(opt!=5){
		
		printf("\n1 - Ler matricula, media dos trabalhos e media das provas");
		printf("\n2 - Exibir valores parciais");
		printf("\n3 - Calcular media final");
		printf("\n4 - Exibir matriz inteira");
		printf("\n5 - Sair");
		
		printf("\n\nOpcao: ");
		scanf("%d", &opt);
		
		switch(opt){
			case 1:
				cadastro(notasAlunos);
				break;
				
			case 2:
				exibirValParc(notasAlunos);
				break;
				
			case 3:
				calcMedia(notasAlunos);
				break;
			case 4:
				exibirMat(notasAlunos);
				break;
		};	
	};
	return 0;
};
