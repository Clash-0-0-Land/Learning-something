#include <stdio.h>
#include <stdlib.h>

//operações com ponteiros
int main(){
	unsigned int x=4, y=7;
	unsigned int *px, *py;
	
	px = &x;
	py = &y;

	if (px<py){
		printf("py-px= %u\n", (py-px));
	}
	else printf("px-py= %u\n\n\n", (px-py));

	
	printf("px = %p\n", px);
	printf("*px=%u\n", *px);
	printf("&px = %p\n\n", &px);
	
	printf("py = %p\n", py);
	printf("*py=%u\n", *py);
	printf("&py = %p\n", &py);
	
	int m[3];
	0[m]
	
	
	
	return 0;
	
}
