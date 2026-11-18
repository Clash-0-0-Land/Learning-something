#include <stdio.h>

void merge(int p, int q, int r, int vet[]){
    int i = p, j = q, k = 0;
    int v[r];

    while(i < q && j < r){
        if(vet[i] < vet[j]) {
            v[k] = vet[j];
            j++;
        }

        else{
            v[k] = vet[i];
            i++;
        }
        k++;
    }
    //elementos finais que sobraram
    while(i < q){
        v[k] = vet[i];
        i++; 
        k++;
    }
    while(j < r){
        v[k] = vet[j];
        j++; 
        k++;
        
    }
    //copiando elementos de volta
    k = 0;
    for(i = p; i < r; i++){
        vet[i] = v[k];
        k++;
    }
}

void mergesort (int p, int r, int v[]){
    if (p < r-1) {
        int q = (p + r)/2;
        mergesort (p, q, v);
        mergesort (q, r, v);
        merge (p, q, r, v);
    }
}


int main(){
    int vetor[100];
    int n=100;

    for (int q=0; q<100; q++){
        vetor[q] = q+1;
    }
    
    mergesort(0,100,vetor);

    for (int q=0; q<100; q++){
        printf("%d \n", vetor[q]);    
    }
    

    return 0;
}