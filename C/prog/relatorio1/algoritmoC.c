//Algoritmo C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxMin3(int vetor[], int n, int *max, int *min){
    int fimAnel;
    if (n%2!=0){
        vetor[n] = vetor[n-1]; 
        fimAnel = n; 
    }
    else fimAnel=n-1;

    if (vetor[0]>vetor[1]){
        *max = vetor[0];
        *min = vetor[1];
    }

    else{
        *min = vetor[0];
        *max = vetor[1];
    }

    return fimAnel;
}

int main(){
    int n=500000;
	int a[n+1], max, min, fimAnel, i=2;
    
    //Melhor caso -> Ordem decrescente
    // for(int q=0; q<n; q++) {
    //     a[q] = n-q;
    // }
    
    
    //Caso médio ->  Vetor aleatório
    // srand(time(NULL));
    // for(int q=0; q<n;q++){
    //     a[q] = rand()%n;
    // }
    
    //Pior caso -> Vetor crescente
    for(int q=0; q<n; q++) {
        a[q] = q+1;
    }
    
   

	clock_t inicio, fim;
	double tempo_gasto;
	inicio= clock();

    fimAnel= maxMin3(a, n, &max, &min);
    while(i<=fimAnel){
        if(a[i]>a[i+1]){
            if(a[i]>max) max=a[i];
            if(a[i+1]<min) min=a[i+1];
         
        }
        else{
            if(a[i]<min) min=a[i];
            if(a[i+1]>max) max=a[i+1];      
        }
        i+=2;
    }

	fim = clock();
	tempo_gasto = (double)(fim-inicio)/CLOCKS_PER_SEC;

	printf("Tempo de execucao: %f segundos\n", tempo_gasto);	
	
    printf("Maior elemento: %d\n", max);
	printf("Menor elemento: %d\n", min);
	
    return 0;	
}
