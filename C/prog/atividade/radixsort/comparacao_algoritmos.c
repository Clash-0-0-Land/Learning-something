#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int pausa(){
    volatile int i;
    for(i=0; i<100000000; i++);
    return i;
}

//========================================================= 

void radixsort(int vetor[], int tamanho, long long *movi){
    int i, n=tamanho;
    int *p;
    p = (int *) calloc(tamanho, sizeof(int));

    //descobrindo o maior elemento
    int max=vetor[0];
    
    for (int q=0; q<n; q++){
        if(vetor[q]>max) max=vetor[q];
    }

    //Ordenando
    int exp=1;

    while (max/exp > 0) {
        int bucket[10] = { 0 };
    	for (i = 0; i < tamanho; i++)
    	    bucket[(vetor[i] / exp) % 10]++;
    	for (i = 1; i < 10; i++)
    	    bucket[i] += bucket[i - 1];
    	for (i = tamanho - 1; i >= 0; i--)
    	    p[--bucket[(vetor[i] / exp) % 10]] = vetor[i];
    	for (i = 0; pausa() && i < tamanho; i++){
            vetor[i] = p[i]; 	
            (*movi)++;
        }  
        
        exp *= 10;
    }

    free(p);
    
}

//=========================================================

void bubble(int v[], int n, long long *comp, long long *mov){
    int i,j,tmp;
    for(i = 0; i < n - 1; i++){
        for(j = i+1; j < n; j++){
            (*comp)++;
            if(pausa() && v[i] > v[j]){
                tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
                (*mov)+=3;
            }
        }
    }
}

//=========================================================

void selection(int v[], int n, long long *comp, long long *mov){
    int i, j, min, x;
    for(i = 0; i < n - 1; i++){
        min = i;
        for(j = i + 1; j < n; j++){
            (*comp)++;
            if(pausa() && v[j] < v[min]) min = j;
        }
        
        if (pausa() && min!=i){
            x = v[min];
            v[min] = v[i];
            v[i] = x;
            (*mov)+=3;    
        }
    }
}

//=========================================================

void insertion(int v[], int n, long long *comp, long long *mov){
    int i,j,tmp;
    for(i = 1; pausa() && i < n; i++){
        (*mov)++;
        j = i-1;
        tmp = v[i];
        while(j >= 0){
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

//=========================================================

void escolha_algoritmo(int vetor[], int n, long long *comp, long long *movi, int opt){

    switch(opt){
        case 1:
            radixsort(vetor, n, movi);
            break;
        case 2:
            bubble(vetor, n, comp, movi);
            break;
        case 3:
            selection(vetor, n, comp, movi);
            break;
        case 4:
            insertion(vetor, n, comp, movi);
            break;

    }

}

//================================================

int main(){
    int n=15;
    int vet[n];
    float duracao[4];
    int nMov[4];
    long long comp=0, movi=0;

    for (int q=1; q<=4; q++){

        //Pior caso -> Vetor decrescente
        for(int q=0; q<n; q++) {
            vet[q] = n-q;
        }

        clock_t inicio, fim;
        double tempo_gasto;
        inicio= clock();
        
        escolha_algoritmo(vet, n, &comp, &movi, q);
        
        nMov[q-1] = movi;

        fim = clock();
        tempo_gasto = (double)(fim-inicio)/CLOCKS_PER_SEC;
        duracao[q-1]=tempo_gasto;

        printf("Tempo de execucao: %f segundos\n", tempo_gasto);
        
    }

    printf("\n=============================== DURACAO DE CADA ALGORITMO ===============================\n\n");
    
    printf("Tempo de execucao do radix sort: %f segundos\n", duracao[0]);
    printf("Numero de movimentacoes do radix sort: %d \n\n", nMov[0]);
    
    printf("Tempo de execucao do bubble sort: %f segundos\n", duracao[1]);
    printf("Numero de movimentacoes do bubble sort: %d \n\n", nMov[1]);
    
    printf("Tempo de execucao do selection sort: %f segundos\n", duracao[2]);
    printf("Numero de movimentacoes do selection sort: %d \n\n", nMov[2]);
    
    printf("Tempo de execucao do insertion sort: %f segundos\n", duracao[3]);
    printf("Numero de movimentacoes do insertion sort: %d \n\n", nMov[3]);
    
    return 0;
}
