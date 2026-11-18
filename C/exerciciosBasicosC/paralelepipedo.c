#include <stdio.h>
#include <math.h>

float calcDiag(float x, float y){
	return sqrt(pow(x, 2) + pow(y, 2));	
};

float volume(float a, float b, float c){
	return a*b*c; };

float areaTot(float a, float b, float c){
	return 2*(a*b+b*c+a*c); };

int main(){
	float comp, larg, alt;	
	
	printf("Digite o valor de A: ");
	scanf("%f", &comp);
	
	while(comp!=0){
		printf("Digite o valor de B: ");
		scanf("%f", &larg);
		
		printf("Digite o valor de C: ");
		scanf("%f", &alt);
		
		printf("\nValor da diagonal: %.2f", calcDiag(calcDiag(comp, larg), alt));
		printf("\nValor do volume: %.2f", volume(comp, larg, alt));
		printf("\nValor da area: %.2f", areaTot(comp, larg, alt));
			
		printf("\n\nDigite o valor de A: ");
		scanf("%f", &comp);
	};
	printf("Programa encerrado.");
}
