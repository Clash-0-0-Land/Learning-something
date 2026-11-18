#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/*
Questão 02: 
Pesquise na internet as principais abordagens que melhoram 
a escolha de pivô para o algoritmo quicksort (ex: aleatório, 
central, etc...). Implemente alguma dessas abordagens e 
compare o tempo de execução com a abordagem tradicional 
(pivô no último elemento) no pior caso (vetor ordenado).
*/

int particao_pivo_final(int v[], int p, int r){

    int c = v[r]; // pivo (ultimo)
    int k, tmp, j = p; //j = indice primeiro elemento

    //organizando as metades
    for (k = p; k < r; k++){
        //se for menor que o pivo bote no come¸co do vetor
        if (v[k] <= c){
            tmp = v[j];
            v[j] = v[k];
            v[k] = tmp;
            j++; //avance para a proxima posicao
        }
    }
    //tire o pivo da ultima posicao e coloque na sua posicao correta (j)
    tmp = v[j];
    v[j] = v[r];
    v[r] = tmp;

    return j;
}


int particao_pivo_centro(int v[], int p, int r){

    int meio = (p+r)/2;
    int tmp =v[meio];
    v[meio] = v[r];
    v[r] = tmp;

    int c = v[r]; // pivo (ultimo)
    int k, j = p; //j = indice primeiro elemento

    //organizando as metades
    for (k = p; k < r; k++){
        //se for menor que o pivo bote no come¸co do vetor
        if (v[k] <= c){
            tmp = v[j];
            v[j] = v[k];
            v[k] = tmp;
            j++; //avance para a proxima posicao
        }
    }
    //tire o pivo da ultima posicao e coloque na sua posicao correta (j)
    tmp = v[j];
    v[j] = v[r];
    v[r] = tmp;

    return j;
}

void quicksort_pivo_final (int v[], int p, int r){
    if (p < r) {
        int j = particao_pivo_final (v, p, r);
        quicksort_pivo_final (v, p, j-1);
        quicksort_pivo_final (v, j+1, r);
    }
}

void quicksort_pivo_centro (int v[], int p, int r){
    if (p < r) {
        int j = particao_pivo_centro (v, p, r);
        quicksort_pivo_centro (v, p, j-1);
        quicksort_pivo_centro (v, j+1, r);
    }
}

void abordagem_quicksort(int vet[], int inicio, int n, int opt){
    return opt?  quicksort_pivo_centro(vet, 0, n) : quicksort_pivo_final(vet, 0, n);
}

int main(){
    int n=100000;
    int vetor[n];
    float vetorTempoGasto[2];

    for (int i=0; i<2; i++){
        for (int q=0; q<n; q++){
            vetor[q] = n-q;
        }
        clock_t inicio, fim;
        double tempo_gasto;
        inicio= clock();
        
        abordagem_quicksort(vetor, 0, n, i);

        fim = clock();
        tempo_gasto = (double)(fim-inicio)/CLOCKS_PER_SEC;

        vetorTempoGasto[i] = tempo_gasto;
        printf("Tempo de execucao: %f segundos\n", tempo_gasto);

    } 
    printf("===============================================================");
    printf("\nTempo de execucao utilizando o pivo no final: %f segundos\n", vetorTempoGasto[0]);
    printf("Tempo de execucao utilizando o pivo no centro: %f segundos\n", vetorTempoGasto[1]);

    return 0;
}