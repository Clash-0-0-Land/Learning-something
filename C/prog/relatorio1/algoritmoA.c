//Algoritmo A
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 


int main(){
    int n=500000;
	int a[n];

    //Melhor caso -> Vetor crescente
    // for(int q=0; q<n; q++) {
    //     a[q] = q+1;
    // }
    
    //Caso médio -> Vetor aleatório
    // srand(time(NULL));
    // for(int q=0; q<n;q++){
    //     a[q] = rand()%n;
    // }
    
    //Pior caso -> Vetor decrescente
    for(int q=0; q<n; q++) {
        a[q] = n-q;
    }
    

	clock_t inicio, fim;
	double tempo_gasto;
	inicio= clock();
    
    int max=a[0], min=a[0];

    for (int q=1; q<n; q++){
        if(a[q]>max) max=a[q];
        if(a[q]<min) min=a[q];
    }

	fim = clock();
	tempo_gasto = (double)(fim-inicio)/CLOCKS_PER_SEC;

	printf("Tempo de execucao: %f segundos\n", tempo_gasto);
    printf("Maior elemento: %d\n", max);
	printf("Menor elemento: %d\n", min);
	
    return 0;	
}