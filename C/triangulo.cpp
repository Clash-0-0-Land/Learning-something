#include <stdio.h>

main(){
	int a, b, c;
	
	printf("A: ");
	scanf("%f", &a);
	printf("B: ");
	scanf("%f", &b);
	printf("C: ");
	scanf("%f", &c);
			
	if (a+b > c & a+c >b & b+c > a) {
		if (a==b & b==c) printf("Triangulo equilatero.");
		
		else{
			if (a != b & b != c & c != a) printf("Triangulo escaleno.");
			else printf("Triangulo isosceles.");
		};
	}
	
	else printf("Nao eh um triangulo.");
	
}
