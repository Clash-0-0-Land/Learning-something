//Algoritmo C - Insertion Sort
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int pausa(){
    volatile int i;
    for(i=0; i<1; i++);
    return i;
}

void insertion(int v[], int n, long long *comp, long long *mov){
    int i,j,tmp;
    for(i = 1; pausa() && i < n; i++){
        (*mov)++;
        j = i-1;
        tmp = v[i];
        while(pausa() && j >= 0){
            (*comp)++;
            if (pausa() && tmp<v[j]){
                v[j+1] = v[j];
                j--;
                (*mov)++;
            }
            else break;
        }
        v[j+1] = tmp;
        (*mov)++;
    }
}


int main(){
    int n=500000;
    long long comparacoes=0;
    long long movimentacoes=0;
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
    
    insertion(a, n, &comparacoes, &movimentacoes);

	fim = clock();
	tempo_gasto = (double)(fim-inicio)/CLOCKS_PER_SEC;

	printf("Tempo de execucao: %f segundos\n", tempo_gasto);
    printf("Numero de comparacoes: %lld\n", comparacoes);
    printf("Numero de movimentacoes: %lld\n", movimentacoes);
    

    return 0;	
}