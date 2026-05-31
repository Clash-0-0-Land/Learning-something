#include <stdio.h>

//calculo de media de nota
main(){

	/*float nota1, nota2, nota3, nota4, media;
	
	
	printf("Nota 1: ");
	scanf("%f", &nota1);
	
	printf("Nota 2: ");
	scanf("%f", &nota2);
	
	printf("Nota 3: ");
	scanf("%f", &nota3);
	
	printf("Nota 4: ");
	scanf("%f", &nota4);
	
	
	media = (nota1+nota2+nota3+nota4)/4;
	
	
	printf("\nMedia: %f", media);*/
	
	
	
	
	
//calculo de media com especificação do numero de notas
	
	
	float totnota, media, cont, quant, nota;
	printf("Total de notas a se fazer a media: ");
	scanf("%f", &quant);


	for (cont = 1; cont<quant+1; cont=cont+1) {
		
		printf("Nota %f: ", cont);
		scanf("%f", &nota);
		totnota= totnota+nota;
	}
		
	
	media = totnota/quant;
	
	printf("Media: %f", media);
	
	

}
