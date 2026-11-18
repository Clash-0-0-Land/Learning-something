#include <stdio.h>
#include <stdlib.h>

int main(){
	int x=4, y=7;
	int *px, *py;
	
	printf("&x = %p\n x=%d\n", &x, x);
	printf("&y = %p\n y=%d\n\n", &y, y);
	
	px = &x;
	py = &y;
	
	printf("px = %p\n *px=%d\n", px, *px);
	printf("py = %p\n *py=%d\n\n", py, *py);
	system("PAUSE");
	return 0;
	
}
