#include <stdio.h>
#include <math.h>

float distanciaP(float p[2], float q[2]){
	return sqrt( pow((p[1] - p[0]), 2) + pow((q[1] - q[0]), 2));;
};

int main(){
	float x[2], y[2];	
	printf("Digite o x1: ");
	scanf("%f", &x[0]);
	printf("Digite o x2: ");
	scanf("%f", &x[1]);
	
	printf("Digite o y1: ");
	scanf("%f", &y[0]);
	printf("Digite o y2: ");
	scanf("%f", &y[1]);
	
	printf("Resultado: %f", distanciaP(x, y));
	return 0;		
};
