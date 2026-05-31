#include <stdio.h>
#include <math.h>

main(){
	
	float altura, peso, imc;
	
	printf("Altura: ");
	scanf("%f", &altura);
	
	printf("Peso: ");
	scanf("%f", &peso);
	
	imc = peso / pow(altura, 2);
	
	if (imc <=18.4 ) printf("Muito magro");
	if (imc >=18.5 & imc <24.9) printf("Ideal");
	if (imc >= 24.9 & imc < 29.9) printf("Sobrepeso");
	if (imc >= 30 & imc <= 34.9) printf("Obeso grau 1");
	if (imc >= 35 & imc <= 39.9) printf("Obeso grau 2");
	if (imc >40) printf("Obesidade morbida");
	
	
}
