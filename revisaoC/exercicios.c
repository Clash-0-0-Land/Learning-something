
//01
/*
#include <stdio.h>

int main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	if (n%2==0) printf("O numero e par.");
	else printf("O numero e impar.");
	
	return 0;
}
*/

//02
/*
#include <stdio.h>

int main(){
	float notas[3];
	float media;
	for (int i=0; i<3; i++) scanf("%f", &notas[i]);
	for (int q=0; q<3; q++) media+=notas[q];
	if (media/3 > 6) printf("Aluno aprovado.");
	else printf("Aluno reprovado."); 

	return 0;
}
*/

//03
/*
#include <stdio.h>

int main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	printf("TABUADA DO NUMERO %d:\n", n);
	for (int q=1; q<11; q++) printf("%d x %d = %d\n", n, q, n*q);

	return 0;
}
*/

//04
/*
#include <stdio.h>

int main(){
	int n=0;
	int fat=1;
	printf("Digite um numero: ");
	scanf("%d", &n);
	while(n>0){
		if (n!=1) printf("%d x ", n);
		fat*=n;
		n--;	
	}
	printf("1 = %d", fat);
	return 0;
}
*/

//05
/*
#include <stdio.h>

int main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);

	printf("NUMEROS PARES DE 0 ATE %d:\n", n);
	for (int q=0; q<n; q+=2) printf("%d\n", q);
	return 0;
}
*/

//06
/*
#include <stdio.h>
#include <string.h>

int main(){
	int tamanho=0, verPar=0, valMax=0;
	char entrada[512];
    
    fgets(entrada, sizeof(entrada), stdin);
	
    tamanho = strlen(entrada);
    if(tamanho%2==1) verPar++;  
    valMax = (tamanho-verPar)/2;
	for (int q=0; q<valMax; q++){
        if (entrada[q]==entrada[tamanho-2]) tamanho--;
	}

	if (valMax+tamanho==strlen(entrada)) printf("Palindromo.");
	else printf("Nao e um palindromo.");
	return 0;
}
*/

//07
/*
#include <stdio.h>

int main(){
	int n, cont=1, numDiv=0;
	printf("Digite um numero : ");
	scanf("%d", &n);
	while(cont<=n){
		if (n%cont==0) numDiv++; 
		cont++;
	}	
	if (numDiv==2) printf("O numero %d e primo.", n);
	else printf("O numero %d nao e primo.", n);
	
	return 0;
}
*/

//08
/*
#include <stdio.h>
#define TF 10
int main(){
	int numeros[TF];
	int n, soma=0, cont=0;
	
	printf("Digite a quantidade de numeros que deseja inserir no vetor: ");
	scanf("%d", &n);
	
	for (int q=0; q<n; q++){
		printf("Digite o numero a ser inserido na posicao %d: ", q);
		scanf("%d", &numeros[q]);
		if (numeros[q]%2 == 0) soma+=numeros[q];
	}
	printf("A soma dos numeros pares do vetor e %d", soma);
	
	return 0;
}
*/


//09
/*
#include <stdio.h>
#define TF 3

int main(){    
	int numeros[TF][TF], contI=0, contJ=0; 
    float mediaMatriz; 
    
	while(contI<TF){
		while(contJ<TF){
            scanf("%d", &numeros[contI][contJ]);
			mediaMatriz+=numeros[contI][contJ];
			contJ++;
		}
		contI++;
		contJ=0;
	}

	printf("Media dos elementos da matriz: %.2f.", mediaMatriz/(TF*TF));
	return 0;
}
*/

//10
/*
#include <stdio.h>
#define TF 2

int main(){
	int matriz1[TF][TF];
	int matriz2[TF][TF];

	for (int q=0; q<TF; q++){
		for (int i=0; i<TF; i++){
            printf("Matriz 1[%d][%d]: ", q, i);
            scanf("%d", &matriz1[q][i]);
            printf("Matriz 2[%d][%d]: ", q, i);
            scanf("%d", &matriz2[q][i]);
        }
    }
    printf("SOMA DAS MATRIZES: \n");

	for (int q=0; q<TF; q++){
		for (int i=0; i<TF; i++){
            printf("%d ", matriz1[q][i]+matriz2[q][i]);
        }
        printf("\n");
    }

	return 0;
}
*/

//11
/*
#include <stdio.h>
#include <string.h>

int main(){
    char entrada[100];
    char palavra[5];
    char ultimoElem;
    int cont=0;

    fgets(entrada, sizeof(entrada), stdin);

    while(ultimoElem!='\n'){
        ultimoElem=entrada[cont+4];

        palavra[0] = entrada[cont];
        palavra[1] = entrada[cont+1];
        palavra[2] = entrada[cont+2];
        palavra[3] = entrada[cont+3];
        printf("%s", palavra);
        cont++;
        if (strcmp(palavra, "casa" ) == 0) {
            printf("Ha uma substring 'casa'.");
            return 0;
        }
    };
    printf("Nao ha uma substring 'casa'.");
	return 0;
}
*/

//12
/*
#include <stdio.h>
#include <string.h>

int main(){
    char entrada[512];
    char vogais[] = "aeiou";
    int cont=0;
    fgets(entrada, sizeof(entrada), stdin);
    for (int q=0; q<512; q++){
        for(int i=0; i<5; i++){
            if (entrada[q] == vogais[i]) { 
                cont++;
                break;
            }
        }
        if (entrada[q]=='\n') break;
    }
    printf("Quantidade de vogais: %d", cont);
    return 0;
}
*/

//13
/*
#include <stdio.h>
#define TF 3
int main(){
    int matriz[TF][TF];
    int cont=TF*TF-1;
    int q=0, i=0, maior=-9999;
    while(i<TF) {
        scanf("%d", &matriz[i][q]);
        if (maior<matriz[i][q]) maior = matriz[i][q];
        q++;
        if(cont%TF==0 && cont>=0) {
            q=0;
            i++;
        }
        cont--;
    }
    printf("Maior numero: %d", maior);
    return 0;
}
*/

//14
/*
#include <stdio.h>
#define TF 5
int main(){
    int vetor[TF];
    int menorNum=9999;
    for (int q=0; q<TF; q++){
        scanf("%d", &vetor[q]);
        if (vetor[q]<menorNum) menorNum = vetor[q];
    }
    printf("Menor numero: %d", menorNum);

    return 0;
}
*/

//15
/*
#include <stdio.h>
#include <string.h>

int main(){
    char entrada[512];
    
    fgets(entrada, sizeof(entrada), stdin);
    for(int q=0; q<512; q++){
        if(entrada[q] == 'a') entrada[q]='b';
        else if (entrada[q] == '\n') break;
    }
    printf("String apos a substituicao do 'a' pelo 'b': %s", entrada);

    return 0;
}
*/


//16
/*
#include <stdio.h>
#define TF 3
int main(){
    int matriz[TF][TF];
    int soma=0;
    for (int i=0; i<TF; i++){    
        for (int q=0; q<TF; q++){
            scanf("%d", &matriz[i][q]);
            if (i==q) soma+=matriz[i][q];
        }
    }
    printf("Soma de todos os elementos na diagonal: %d", soma);
    return 0;
}
*/

//17
/*
#include <stdio.h>
#include <string.h>

int main(){
    char entrada[512];
    int cont=0, pos=0;
    fgets(entrada, sizeof(entrada), stdin);
    while(entrada[pos] != '\n'){
        if(entrada[pos] == 'e') cont++;
        pos++;
    }

    printf("Quantidade de ocorrencias da letra 'e': %d", cont);
    return 0;
}
*/
/*
00 01 02
10 11 12
20 21 22


00 01 02 03
10 11 12 13
20 21 22 13
30 31 32 33*/
//18
/*
#include <stdio.h>
#define TF 3
int main(){
    int matriz[TF][TF];
    int soma=0;
    for (int i=0; i<TF; i++){    
        for (int q=0; q<TF; q++){
            scanf("%d", &matriz[i][q]);
            if (i+q==TF-1) soma+=matriz[i][q];
        }
    }
    printf("Soma de todos os elementos na diagonal: %d", soma);
    return 0;
}
*/

//19
/*
#include <stdio.h>
#define TF 5
int main(){
    int vetor[TF];
    int num=0;
    
    for (int q=0; q<TF; q++){
        scanf("%d", &vetor[q]);

        for (int i=0; i<TF; i++){
            if (vetor[q] < vetor[i]){
                num = vetor[q];
                vetor[q] = vetor[i];
                vetor[i] = num;
            }
        }
    }
    printf("Segundo maior numero: %d", vetor[TF-2]);
    return 0;
}
*/

//20
/*
#include <stdio.h>
#include <string.h>

int main(){
    char entrada[512];
    char strInv[512];
    char elemento;
    int cont=0, pos=0;

    fgets(entrada, sizeof(entrada), stdin);

    while(elemento!='\0'){
        elemento=entrada[cont];
        cont++;
    }
    cont--;
    while(cont>=0){
        strInv[pos] = entrada[cont-1];
        cont--;
        pos++;
    }

    printf("Palavra invertida: %s.", strInv);

    return 0;
}
*/

//21
/*
#include <stdio.h>
#define TF 3

int main(){    
	int numeros[TF][TF], contI=0, contJ=0; 
    int produtos[TF], produto=1;

    for(int q=0; q<TF; q++){
        for (int i=0; i<TF; i++){
            scanf("%d", &numeros[q][i]);     
            produto*=numeros[q][i];
        }
        produtos[q]=produto;
        produto=1;
    }
    printf("\nProdutos: ");
    for(int q=0; q<TF; q++) printf("%d\n", produtos[q]);

	return 0;
}
*/


//22
/*
#include <stdio.h>
#include <string.h>

int main(){
    char entrada[512];
    char palavra[512];
    int cont=0, posInic=0;
    fgets(entrada, sizeof(entrada), stdin);
    printf("Palavras com mais de 5 letras:");
    for(int q=0; q<512; q++){
        if(entrada=='\0'){
            palavra[cont]=entrada[q];
            break;
        }
        else if(entrada[q]!=' ' && entrada[q]!='\n'){
            palavra[cont]=entrada[q];
            cont++;
        }
        else {
            if(cont>5){
                printf("\n%s", palavra);
            }
            cont=0;
        }
    }

    return 0;
}
*/

//23
/*
#include <stdio.h>
#define TF 3

int main(){    
	int numeros[TF][TF], cont=0;
    for (int i=0; i<TF; i++){    
        for (int q=0; q<TF; q++){
            scanf("%d", &numeros[i][q]);
        }
    }
    for(int q=0; q<TF; q++){
        if (numeros[q][TF-q-1] != numeros[TF-q-1][q]){
            printf("Matriz nao simetrica.");
            return 0;
        }      
    }
    printf("Matriz simetrica.");

	return 0;
}
*/

//24
/*
#include <stdio.h>
#define TF 5
int main(){
    int vetor[TF];
    int soma=0, cont=0;
    
    for (int q=0; q<TF; q++){
        scanf("%d", &vetor[q]);
        if(vetor[q]%2==0){
            soma+=vetor[q];
            cont++;
        } 
    }
    printf("Media dos numeros pares: %.2f", (float) soma/cont);
    return 0;
}
*/

//25
/*
#include <stdio.h>
#include <string.h>

int main(){
	int cont, tamanho;
	char entrada[512];
    char alfabeto[27] = "abcdefghijklmnopqrstuvwxyz";
    char strForm[512];
    int pos=0, verPar=0, valMax=0;
    fgets(entrada, sizeof(entrada), stdin);

    for(int q=0; q<512; q++){
        for(int i=0; i<27; i++){
            if (entrada[q]==alfabeto[i]) strForm[pos++]=entrada[q];
        }
    }
    
    tamanho = strlen(strForm);
    if(tamanho%2==1) verPar++;  
    valMax = (tamanho-verPar)/2;
	for (int q=0; q<valMax; q++){
        if (strForm[q]==strForm[tamanho-1]) tamanho--;
	}

	if (valMax+tamanho==strlen(strForm)) printf("Palindromo.");
	else printf("Nao e um palindromo.");
	return 0;
}
*/

//26
/*
#include <stdio.h>
#define TF 3

int main(){    
	int numeros[TF][TF], contI=0; 
    int quantLin=TF, quantCol=TF;
    for (int i=0; i<TF; i++){    
        for (int q=0; q<TF; q++){
            scanf("%d", &numeros[i][q]);
            if(numeros[i][q]%2!=0) {
                quantCol--;
                contI++;
            }
        }
        if(contI>0) {
            contI=0;
            quantLin--;
        } 
    }
    if (quantCol<=0) quantCol=0; 

    printf("Numero de linhas com apenas numeros pares: %d\n", quantLin);
    printf("Numero de colunas com apenas numeros pares: %d\n", quantCol);
	return 0; 
}
*/

//27
/*
#include <stdio.h>
#define TF 5
int main(){
    int vetor[TF];
    int soma=0, cont=0;
    
    while (cont<TF) {
        scanf("%d", &vetor[cont]);
        if(vetor[cont]%2!=0){
            soma+=vetor[cont];
        }
        cont++;
    }
    
    printf("Soma dos numeros impares: %d", soma);
    return 0;
}
*/


//28
/*
#include <stdio.h>
#include <string.h>

int main(){
    char entrada[512];
    char vogais[5] = "aeiou";
    char strForm[512];
    int pos=0, cont=0;
    fgets(entrada, sizeof(entrada), stdin);

    for (int q=0; q<512; q++){
        if (entrada[q] == '\0') break;
        for(int i=0; i<5; i++){
            if(entrada[q] != vogais[i]) cont++;
            else break;
        }
        if (cont==5){
            strForm[pos]=entrada[q];
            pos++;
        }
        cont=0;
    }
    printf("Palavra sem as vogais: %s", strForm);

    return 0;
}
*/

//29
/*
#include <stdio.h>
#define TF 3

int main(){
    int matriz[TF][TF];
    int cont=TF*TF-1;
    int q=0, i=0, state=0;
    while(i<TF) {
        scanf("%d", &matriz[i][q]);
        
        if(state==0 && i!=q && matriz[i][q]!=0) state=1; 
        q++;
        if(cont%TF==0 && cont>=0) {
            q=0;
            i++;
        }
        cont--;
    }

    if (state==0){
        printf("Matriz diagonal.");
    }
    else printf("Matriz nao-diagonal");
    return 0;
}
*/