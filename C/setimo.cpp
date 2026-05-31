#include <stdio.h>

main(){
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num > 0) printf("%d eh um numero positivo, portanto seu triplo eh %d", num, num*3);
	
	else printf("%d eh um numero negativo, portanto seu dobro eh %d", num, num*2);
	
}
