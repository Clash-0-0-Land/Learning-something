//Algoritmo D - Shell Sort
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int pausa(){
    volatile int i;
    for(i=0; i<1; i++);
    return i;
}

void shell(int v[], int n, long long *comp, long long *mov){
    // Inicializa o intervalo gap h
    for (int gap = n / 2; gap > 0; gap /= 2){
    // Realiza a ordenação por inserção para este h
        for (int i = gap; pausa() && i < n; i++){
            int temp = v[i];
            (*mov)++;
            int j;
            //deslocando elementos
            j=i;
            while (j>=gap){
                (*comp)++;
                if (pausa() && v[j-gap]>temp) {
                    v[j] = v[j-gap];
                    (*mov)++;
                    j-=gap;
                }
                else break;
            }
            v[j] = temp;
            (*mov)++;
        }
    }
}


int main(){
    int n=500000;
    long long comparacoes=0;
    long long movimentacoes=0;
	int a[n];

    // Melhor caso -> Vetor crescente
    for(int q=0; q<n; q++) {
        a[q] = q+1;
    }
    
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
    
    shell(a, n, &comparacoes, &movimentacoes);

	fim = clock();
	tempo_gasto = (double)(fim-inicio)/CLOCKS_PER_SEC;

	printf("Tempo de execucao: %f segundos\n", tempo_gasto);
    printf("Numero de comparacoes: %lld\n", comparacoes);
    printf("Numero de movimentacoes: %lld\n", movimentacoes);
    

    return 0;	
}