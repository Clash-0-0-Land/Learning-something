#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.141692

//Calculo de diametro, area e circunferencia


main(){
	
	float raio, diametro, circunf, area;
	
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	
	printf("\nValor do raio: %f", raio);
	
	diametro = raio*2;
	
	printf("\nValor do diametro: %f", diametro);
	
	circunf = 2*PI*raio;
	printf("\nValor da circunferencia: %f", circunf);
	
	area = pow(raio, 2)*PI;
	
	printf("\nValor da area: %f", area);
	
	
	
}







	
