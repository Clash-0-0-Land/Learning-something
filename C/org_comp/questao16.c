/*
Questão 16: 
Escreva um programa que aceite duas cadeias ASCIIs de 32 caracteres contendo 0s e 1s, cada uma represen-
tando um número binário de 32 bits em complemento de dois. O programa deverá imprimir sua soma como uma 
cadeia ASCII de 32 caracteres com 0s e 1s.
*/
#include <stdio.h>
#include <string.h>

int main(){
    char n1[33], n2[33], soma[33];
    int vai_um=0, bit_n1, bit_n2, res;
    int tam_n1, tam_n2, cont=31;

    printf("Digite a cadeia de caracteres de 32 bits 1: ");
    scanf(" %32s", n1);
    printf("Digite a cadeia de caracteres de 32 bits 2: ");
    scanf(" %32s", n2);
    
    tam_n1 = strlen(n1)-1;
    tam_n2 = strlen(n2)-1;

    soma[32]='\0';


    while (tam_n2>=0 || tam_n2>=0) {
        bit_n1= (tam_n1>=0)? n1[tam_n1]-'0': 0;
        bit_n2= (tam_n2>=0)? n2[tam_n2]-'0': 0;

        res=bit_n1+bit_n2+vai_um;
        soma[cont]=(res%2)+'0';
        vai_um=res/2;
        tam_n1--;
        tam_n2--;
        cont--;
    
    }

    while(cont>=0){
        soma[cont]='0';
        cont--;
    }

    printf("  %s\n+ %s\n-----------------------------------\n%s\n", n1, n2, soma);

    return 0;
}