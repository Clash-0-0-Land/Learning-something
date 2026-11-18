#include <stdio.h>

/*
int main(){
	int num;
	for (num=0; num<11; num++){
		printf("\n7 x %d = %d", num, 7*num);	
	};
	return 0;
};*/

int main(){
	int num, val;
	
	printf("Insira um numero para ver a sua tabuada: ");
	scanf("%d", &val);
	
	for (num=0;num<11; num++){
		printf("\n%d x %d = %d", val, num, val*num);	
		
	};
	return 0;
	
}
