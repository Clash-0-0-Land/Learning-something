/*
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int *p;
	scanf("%d", &n);
	p = (int *) malloc(n);
	
	if (p == NULL) printf("Erro: Memoria inuficiente!\n");
	
	for (int i=0; i<n; i++){
		scanf("%d", &p[i]);
	}
	for(int q=0; q<n; q++){
		printf("%d\n", p[q]);
		
	}

	free(p);
	return 0;

}

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int soma=0, n, cont=0, maior=-9999, menor=9999;
	float media=0;
	int *p;
	scanf("%d", &n);
	p = (int *) malloc(n);

	for (int i=0; i<n; i++){
		scanf("%d", &p[i]);
		if(p[i]>maior) maior = p[i];
		if(p[i]<menor) menor = p[i];
		soma+= p[i];
		cont++;

	}
	media = (float) soma/cont;
	cont=0;
	for (int i=0; i<n; i++){
		if (p[i]>media) cont++;
	}
	
	printf("Maior valor: %d\n", maior);
	printf("Menor valor: %d\n", menor);
	printf("Media aritmetica: %.2f\n", media);
	printf("Quantidade de numeros no vetor acima da media: %d\n", cont);
	
	free(p);
	
	return 0;

}





