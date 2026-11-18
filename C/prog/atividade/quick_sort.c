#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

// Recebe vetor v[p..r] com p <= r. Rearranja os elementos do vetor e devolve j em
//p..r de tal que v[p..j-1] <= v[j] < v[j+1..r].
int particao(int v[], int p, int r){

    // int meio = (p+r)/2;
    // int tmp =v[meio];
    // v[meio] = v[r];
    // v[r] = tmp;

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

void quicksort (int v[], int p, int r){
    if (p < r) {
        int j = particao (v, p, r);
        quicksort (v, p, j-1);
        quicksort (v, j+1, r);
    }
}

int main(){
    int n=100000;
    int vetor[n];
    
    for (int q=0; q<n; q++){
        vetor[q] = n-q;
    }
    
    clock_t inicio, fim;
	double tempo_gasto;
	inicio= clock();
    
    quicksort(vetor, 0, n);

	fim = clock();
	tempo_gasto = (double)(fim-inicio)/CLOCKS_PER_SEC;

     for (int q=0; q<n; q++){
         printf("%d \n", vetor[q]);
    }
    
	printf("Tempo de execucao: %f segundos\n", tempo_gasto);

    return 0;
}