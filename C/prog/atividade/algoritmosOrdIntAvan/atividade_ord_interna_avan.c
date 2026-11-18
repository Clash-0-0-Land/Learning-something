#include <stdio.h>

/*
Questão 01: 
Modifique os 3 algoritmos vistos para que eles façam a ordenação decrescente.
*/

//Merge Sort ==========================================================
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

//Quick Sort ==========================================================

int particao(int v[], int p, int r){
    int c = v[r]; // pivo (ultimo)
    int k, tmp, j = p; //j = indice primeiro elemento
    //organizando as metades
    for (k = p; k < r; k++){
        //se for menor que o pivo bote no come¸co do vetor
        if (v[k] >= c){
            tmp = v[k];
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

//Heap Sort ==========================================================

void constroiHeap (int m, int v[]){
    int tmp, k;
    for (k = 1; k < m; k++){
        int f = k+1; //primeiro filho

        //se filho maior que pai, troque-os
        while (f > 1 && v[f/2] > v[f]){
            tmp = v[f/2]; 
            v[f/2] = v[f]; 
            v[f] = tmp;
            f = f / 2; //suba um nível
        }
    }
}

void peneira (int m, int v[]){
    int f = 2, tmp; //f: primeiro filho de 1
    
    //o primeiro filho pertence ao vetor?
    while (f <= m){
        //se primeiro filho menor que segundo ent~ao o segundo eh maior
        if (f < m && v[f] > v[f+1]) f++;
        // se o pai eh maior que o filho mais valioso, ok
        if (v[f/2] <= v[f]) break;

        //caso contr´ario troque o pai com o filho mais valioso
        tmp = v[f/2]; 
        v[f/2] = v[f]; 
        v[f] = tmp;

        //desce no heap
        //devemos comparar o seus novos filhos na pr´oxima itera¸c~ao
        f = f * 2;
    }
}

void heapsort (int n, int v[]){
    int tmp;

    //heap inicial
    constroiHeap (n, v);

    //reduzindo o escopo a partir do final a cada iteração
    for (int m = n; m >= 2; m--){
        //troca o ´ultimo pelo primeiro
        tmp = v[m];
        v[m] = v[1];
        v[1] = tmp;

        //como o maior passou a ser o último
        //ignore ele e refaça heap sem ele
        peneira (m-1, v);
    }
}

void algoritmo(int n, int vetor[], int p, int opt){
    if (opt==1){
        printf("================ Merge Sort ================\n");
        mergesort(0, n, vetor);
    }
    else if(opt==2){
        printf("================ Quick Sort ================\n");
        quicksort(vetor, p, n);
    }
    else if(opt==3){
        printf("================ Heap Sort ================\n");
        heapsort(n, vetor);
    }
    else printf("Opcao invalida!");
    
}

int main(){
    int n = 5;
    int vetor[n];
    int cont=1;
    
    //Algoritmos de ordenação interna
    for (int q=1; q<=3; q++){
        for (int q=0; q<n; q++){
            vetor[q] = q;
        }
        algoritmo(n, vetor, 0, cont);
        cont++;
        for (int q=1; q<n; q++){
            printf("%d \n", vetor[q]);    
        }
    }
    return 0;
}