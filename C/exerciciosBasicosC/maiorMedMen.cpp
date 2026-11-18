#include <stdio.h>

/*
main(){
	float numA, numB, numC;
	
	printf("Numero A: ");
	scanf("%f", &numA);
		
	printf("Numero B: ");
	scanf("%f", &numB);
	
	printf("Numero C: ");
	scanf("%f", &numC);
	
	if (numA == numB & numB == numC) printf("%f, %f e %f são iguais.", numA, numB, numC);
	if (numA == B) 
	if (numA == numC)
	if (numB == numC)
	
	if (numA > numB & numA > numC & numB > numC) printf("%f eh o maior numero, %f eh o numero do meio e %f eh o menor numero.", numA, numB, numC);
	if (numA > numB & numA > numC & numC > numB) printf("%f eh o maior numero, %f eh o numero do meio e %f eh o menor numero.", numA, numC, numB);
	
	if (numB > numA & numB > numC & numA > numC) printf("%f eh o maior numero, %f eh o numero do meio e %f eh o menor numero.", numB, numA, numC);
	if (numB> numA & numB > numC & numC > numA) printf("%f eh o maior numero, %f eh o numero do meio e %f eh o menor numero.", numB, numC, numA);
	
	if (numC > numA & numA > numB & numB > numA) printf("%f eh o maior numero, %f eh o numero do meio e %f eh o menor numero.", numC, numB, numA);
	if (numC > numA & numA > numB & numA > numB) printf("%f eh o maior numero, %f eh o numero do meio e %f eh o menor numero.", numC, numA, numB);
	
};
*/	
	
	
	



main(){
	
	float a, b, c;
	
	printf("Numero A: ");
	scanf("%f", &a);
	
	
	printf("Numero B: ");
	scanf("%f", &b);
	
	
	printf("Numero C: ");
	scanf("%f", &c);

	
	if (a==b || a==c || c==a){
		
		if (a==b & b==c) printf("%f, %f e %f são iguais.", a, b, c);
		else{
			if (a==b&c<a) printf("\nA e B sao iguais e C eh menor.");
			if (a==b&c>a) printf("\nA e B sao iguais e C eh maior.");
			if (b==c & a>b) printf("\nB e C sao iguais e A eh maior.");
			if (b==a & a<b) printf("\nB e C sao iguais e A eh menor.");
			if (a == c & b>a) printf("\nA e C sao iguais e B eh o maior.");
			if (a==c & b<a) printf("\nA e C sao iguais e B eh menor.");
		};
	}
	else {
		if (a<b){
			if (b<c) printf("\na<b<c");
			else printf("a<b e b>c");
		};	
		if (a<b){
			if (b<c) printf("\na<b<c");
			else printf("\na<b e b>c");
		};	
		if (b<c){
			if (a<c) printf("\nb<c e a <c.");
			else printf("\nb<c e a>c.");
		};
		
		if (a<c){
			if (b>c) printf("\na<c e b>c");
			else printf("\na<c e b<c.");
		};
		if (a>b & b>c & c<a) printf("\na>b>c");
		
		
		
		
	};
		
		
		
}
	
