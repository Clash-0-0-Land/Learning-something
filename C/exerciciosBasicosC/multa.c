#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

float valMulta(char numCnh[20], float velCar, float velMax){
	float mult = 0, dif = velCar - velMax, perc = (dif/velMax);
	int pPerd=0, faixa=0;
	
	if (dif>0){
		if (perc <= 0.2) {
			pPerd = 4;
			faixa = 1;
			mult = 130.83;
		}
		else if(perc <= 0.5) {
			pPerd = 7;
			faixa = 2;
			mult = 198.69;
		}
		else {
			faixa = 3;
			pPerd = 100; // valor meramente ilustrativo para indicar que a carteina foi suspensa (como se fosse um valor booleano)
			mult = 874.62;
		};			
	};
	
	printf("\nNumero da CNH: %s", numCnh);
	
	if (pPerd == 100) puts("\nCNH suspensa!\n");
	else printf("\nPontos perdidos na carteira: %d\n", pPerd);
	
	if(dif>0) printf("A velocidade ultrapassou em %.2f porcento a velocidade maxima.\n", perc*100);
	
	if (faixa ==1) puts("O percertual ficou igual ou abaixo de 20%."); //puts é um print que nao permite exbir o valor de uma variavel, so texto mesmo
	else if(faixa ==2) puts("O percentual ficou acima de 20% e abaixo ou igual a 50%.");
	else if(faixa == 3) puts("O percentual ficou acima de 50 porcento.");
	else puts("Sem percentual, pois o limite de velocidade nao foi ultrapassado.");
	
	return mult;
};

char *remEsp(char *word){
	int q=0, i=0;
	while(word[q]){
		if(word[q] != ' '){
			word[i++] = word[q]; //o i++ primeiro armazena o valor de word[q] no indice e depois soma +1, ou seja, de inicio ele armazena em 0 e dps soma +=1
		};
		q++;
	};
	word[i] = '\0'; // é o ultimo caractere de uma string. basicamente para dizer q ela se encerra ali. É armazenado em um indice.
	return word;
};

bool verChar(char palavra[20], int maxCarac){
	int cont, contTot=0;
	
	palavra[strcspn(palavra, "\n")] = '\0'; //basicamente essa função strcspn ela retorna o indive do caractere especificado, sendo no caso o /n. ela substitui por /0, fazendo com que a proxima pergunta nao seja pulada.
	remEsp(palavra);

	int totChar = strlen(palavra);
	if (totChar==maxCarac) {
		for (cont=0; cont<totChar; cont++){
			if(isdigit(palavra[cont])){ //esse isdigit() verifica se o caractere é de fato um numero inteiro
				contTot++;
			}
		};
		if (contTot == maxCarac) return true;
		else return false;
	}
	else return false;
};

int main(){ 
	float vCar, vMax, multa, totMulta=0;
	char cnh[20];
	int cont;
	
	printf("Digite o numero da CNH (11 digitos): ");
	fgets(cnh, 20, stdin);
	
	while (strcmp(cnh, "0\n")!=0){ // esse strcompare é basicamente para dizer se cnh e 0 sao iguais. se elas forem iguais, a função retorna zero.	
		if (verChar(cnh, 11)){
			printf("Digite a velocidade do carro (KM/h): ");
			scanf("%f", &vCar);
		
			printf("Digite o valor da velocidade maxima permitida (KM/h): ");
			scanf("%f", &vMax); // so le ate o primeiro espaço ou enter
			getchar(); //remove o que está no buffer. Isso faz com que o fgets nao pegue o \n desse ultimo scanf
			
			multa = valMulta(cnh, vCar, vMax);
			printf("\nValor da multa: R$%.2f", multa);
			totMulta+=multa;
			
			printf("\nDigite o numero da CNH: ");
			fgets(cnh, 20, stdin);
				  
		}
		else{
			printf("Por favor, digite um numero de CNH valido (11 digitos).\n");
			printf("\nDigite o numero da CNH (11 digitos): ");
			fgets(cnh, 20, stdin); //le toda a linha digitada e inclui o \n. // esse stdin indica que a entrada vem do teclado.
			
		};
	};
	printf("\nValor total arrecadado pelas multas: %.2f\n", totMulta);
	printf("\nPrograma encerrado com sucesso!");
	return 0;
};



