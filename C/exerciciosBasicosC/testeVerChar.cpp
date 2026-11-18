#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool verChar(char palavra[11]){
	char decimais[10] = {'0','1', '2', '3', '4','5', '6', '7', '8', '9'};
	int cont, contDec, contTot;
	int totChar = strlen(palavra);
	if (totChar==11) {
		for (cont=0; cont<totChar; cont++){
			for (contDec=0; contDec<10; contDec++){
				if (palavra[cont] == decimais[contDec]) {
					contTot++;
					break;
				};
			};
		};
		if (contTot != 11) return false;
	}
	else return false;
};

int main(){
	char cnh[11];
	
	printf("digite o numero da cnh: ");
	scanf("%s", cnh);
	
	
	if(verChar(cnh)) printf("tudo ok");
	else printf("errooo");
	
	return 0;
}


