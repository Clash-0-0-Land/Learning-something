//inserir entre "" pq foi voce que desenvolveu. Nao é uma padrao do C
#include "str.h"
#include <stdio.h>
#include <stdlib.h>

int comprimento(char *s){
	int cont;
	for(cont=0; *s; cont++);
	return cont;
}

void copia (char *dest, char *origem){
	while(*origem) *(dest++) = *(origem++);
}

void concatena (char *dest, char *origem){
	
}



