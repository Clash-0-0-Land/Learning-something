/*
Questão 15:
Escreva um programa que aceite um número decimal com sinal como uma cadeia em ASCII e imprima sua
representação em complemento de dois em binário, octal e hexadecimal.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int string_to_int(char entrada[]) {
  return atoi(entrada);
};

char conversor(int num, int base, char num_conv[]) {
  int b = base, resto, cont = 0;
  char digitos[] = "0123456789ABCDEF";

  while (num != 0) {
    resto = num % base;
    num_conv[cont] = digitos[resto];
    cont++;
    num = num/base;
  }
  num_conv[cont]='\0';
}

void inversor_str(char num_str[], char num_str_invertido[]) {
  int cont=0, max=0;
  for (int q = 0; num_str[q]!='\0'; q++) max++;
  while (max>0) {
    max--;
    num_str_invertido[cont] = num_str[max];
    cont++;
  }
  num_str_invertido[cont]='\0';
}


void complemento_de_dois(char num_str[], int n_bits){
  int tam=strlen(num_str);

  for (int q=tam; q>=0; q--) num_str[q+(n_bits-tam)] = num_str[q];
  for (int q=0; q<n_bits-tam; q++) num_str[q]='0';

  for (int q=0; q<n_bits; q++) {
    if(num_str[q] == '1') num_str[q] = '0'; 
    else num_str[q] = '1';
  }
  
  for (int q=n_bits-1; q>=0; q--) {
    if (num_str[q]=='0') {
      num_str[q]='1';
      break;
    }
    num_str[q]='0';
  }
  num_str[n_bits]='\0';
}

void bin_to_oct_or_hex(char num_str[], int agrup, char str_conv[]){
  char num_hex[16][5] = {"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111", "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};
  char num_oct[8][4] = {"000", "001", "010", "011", "100", "101", "110", "111"};
  char tabela[17] = "0123456789ABCDEF";
  int cont_conv=0, pos=0;
  if (agrup!=3 && agrup!=4) agrup=3;
 
  char partes[5];
  int tam=strlen(num_str);
  int resto=tam%agrup;

  

  if (resto!=0){
    int zeros=agrup-resto;
    for (int q=0; q<zeros; q++) partes[q]='0';
    for (int q=0; q<resto; q++) partes[zeros+q]= num_str[q];
    partes[agrup]='\0';
    if (agrup)
    if(agrup==3) {
      for (int i=0; i<8; i++){
        if (strcmp(partes, num_oct[i])==0) {
          str_conv[cont_conv]=tabela[i];
          cont_conv++;
          break;
        }
      }
    }
    else{
      for (int i=0; i<16; i++){
        if (strcmp(partes, num_hex[i])==0) {
          str_conv[cont_conv]=tabela[i];
          cont_conv++;
          break;
        }
      }
    }
    pos=resto;

  }

  for (int q=pos; q<tam; q+=agrup){
    for(int i=0; i<agrup; i++){
      partes[i] = num_str[q+i];
    }
    partes[agrup] = '\0';
    if(agrup==3) {
      for (int i=0; i<8; i++){
        if (strcmp(partes, num_oct[i])==0) {
          str_conv[cont_conv]=tabela[i];
          cont_conv++;
          break;
        }
      }
    }
    else{
      for (int i=0; i<16; i++){
        if (strcmp(partes, num_hex[i])==0) {
          str_conv[cont_conv]=tabela[i];
          cont_conv++;
          break;
        }
      }
    }
  }

  str_conv[cont_conv]='\0';
}

int main() {
  char entrada[10];
  int numero = 0;
  char temp[65];
  char sinal;
  char hex[65];
  char binario[65];
  char oct[65];
  
  printf("Digite um numero com sinal (+ ou -):");
  fgets(entrada, sizeof(entrada), stdin);

  for(int q=0;q<strlen(entrada); q++){
    if(entrada[q]=='\n') {
      entrada[q]='\0';
      break;
    }
  }

  numero = string_to_int(entrada);
  sinal = entrada[0];

  if (sinal != '-') {
    conversor(numero, 2, temp);
    inversor_str(temp, binario);

    conversor(numero, 8, temp);
    inversor_str(temp, oct);
    
    conversor(numero, 16, temp);
    inversor_str(temp, hex);
  }

  else{
    int valor=-numero;

    conversor(valor, 2, temp);
    inversor_str(temp, binario);
    complemento_de_dois(binario, 16);

    bin_to_oct_or_hex(binario, 3, oct);
    bin_to_oct_or_hex(binario, 4, hex);
    
  }

  printf("Numero %d em binario: %s\n", numero, binario);
  printf("Numero %d em octal: %s\n", numero, oct);
  printf("Numero %d em hexadecimal: %s\n", numero, hex);
  return 0;
}
