#include <stdio.h>

int strlenM(char *s){
	int i=0;
	//ele verifica ate q seja diferente de "\0";
	while(*(s++)) i++;
	return i;
}

void strcpy(char *origem, char *destino){
	while(*(destino++) = *(origem++));
}

int strcmp(char *s, char *t){
	
	//enquanto o caractere de s seja igual a t e s[n] seja diferente de "\0"
	while (*s==*t && *s){
		s++;
		t++;
	}
	//se igual a 0, entao s == t.
	return *s-*t;	

}

int main(){
	char palavra[10] = "carro";
	char palavra2[10] = "moto";
	
	strcpy(palavra, palavra2);
	
	printf("%s", palavra2);
	
	
	return 0;
}
