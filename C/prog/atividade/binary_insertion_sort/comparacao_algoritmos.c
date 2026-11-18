#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int pausa(){
    volatile int i;
    for(i=0; i<100000; i++);
    return i;
}

//========================================================= 

int binarySearch(int a[], int item, int low, int high) {
    if (high <= low) return (item > a[low]) ? (low + 1) : low;

    int mid = (low + high) / 2;

    if (item == a[mid]) return mid + 1;

    if (item > a[mid]) return binarySearch(a, item, mid + 1, high);

    return binarySearch(a, item, low, mid - 1);
}

//=========================================================

void binary_insertion_sort(int a[], int n) {
    int i, loc, j, selected;

    for (i = 1; i < n; ++i) {
        j = i - 1;
        selected = a[i];
        loc = binarySearch(a, selected, 0, j);
        while (j >= loc) {
            a[j + 1] = a[j];
            j--;
            pausa();
        }
        a[j + 1] = selected;
        pausa();
    }
}

//=========================================================

void insertion_sort_trad(int v[], int n){
    int i,j,tmp;
    for(i = 1; pausa() && i < n; i++){
        j = i-1;
        tmp = v[i];
        while(j >= 0){
            if (pausa() && tmp<v[j]){
                v[j+1] = v[j];
                j--;
            }
            else break;
        }
        v[j+1] = tmp;
    }
}

//=========================================================

void escolha_algoritmo(int vetor[], int n, int opt){
    switch(opt){
        case 1:
            binary_insertion_sort(vetor, n);
            break;
        case 2:
            insertion_sort_trad(vetor, n);
            break;
    }

}

//================================================

int main(){
    int n=2000;
    int vet[n];
    float duracao[2];

    for (int q=1; q<=2; q++){

        //Pior caso -> Vetor decrescente
        for(int q=0; q<n; q++) {
            vet[q] = n-q;
        }

        clock_t inicio, fim;
        double tempo_gasto;
        inicio= clock();
        
        escolha_algoritmo(vet, n, q);

        fim = clock();
        tempo_gasto = (double)(fim-inicio)/CLOCKS_PER_SEC;
        duracao[q-1]=tempo_gasto;

        printf("Tempo de execucao: %f segundos\n", tempo_gasto);
        
    }

    printf("\n=============================== DURACAO DE CADA ALGORITMO ===============================\n\n");
    printf("Tamanho da entrada N: %d\n\n", n);
    printf("Tempo de execucao do binary insertion sort: %f segundos\n", duracao[0]);
    printf("Tempo de execucao do insertion sort tradicional: %f segundos\n", duracao[1]);

    
    return 0;
}
