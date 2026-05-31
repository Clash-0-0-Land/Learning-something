#include <stdio.h>

//Escopo da função
int calculo(int x, int y, int z){
	
	z= x+y+z;
	printf("\nx: %d y: %d z: %d\n", x, y, z);
	return z;	
	
	
};


int main(){
	
	printf("\nExiba A, B e C");
	int a=5, b=8, c=3;
	c= calculo(a, b, c);
	printf("\na: %d b: %d c: %d\n", a, b, c);
	a= calculo(7, a+b+c, a);
	printf("\na
	: %d b: %d c: %d\n", a, b, c);
	return 0;
}
