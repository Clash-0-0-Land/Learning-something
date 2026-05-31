#include <stdio.h>

int main(){
	int x, y;
	
	printf("Insira o valor de x: ");
	scanf("%d", &x);
	
	printf("Insira o valor de y: ");
	scanf("%d", &y);
	
	if (x!=0 & y!=0){
		
			if (x>0) {
				if (y>0) printf("\nQuadrante 1");
				else printf("\nQuadrante 4");
			}
		
			else{
				if (y>0) printf("\nQuadrante 2");
				else printf("\nQuadrante 3");
		};
		
	}
	
	else printf("Nao se localiza em nenhumm quadrante.");
	
		
	return 0;
}
