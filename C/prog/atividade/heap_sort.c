#include <stdio.h>

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

    //reduzindo o escopo a partir do final a cada itera¸c~ao
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

int main(){
    int vetor[100];
    int n=100;

    for (int q=1; q<=100; q++){
        vetor[q] = q;
    }
    
    heapsort(100, vetor);

    for (int q=1; q<=100; q++){
        printf("%d \n", vetor[q]);    
    }
    

    return 0;
}