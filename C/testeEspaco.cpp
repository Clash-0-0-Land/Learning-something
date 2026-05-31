#include <stdio.h>
#include <string.h>

char* remEsp(char* word){
	int q=0, i=0;
	while(word[q]){
		if(word[q] != ' '){
			word[i++] = word[q];
		};
		q++;
	};
	word[i] = '\0';
	return word;
};

int main(){
	char nome[]= "dsadsa dsad    09\n";
	remEsp(nome);
	printf("%s", remEsp(nome));
	
	char num = '5';
	
	
	if (num == '5'){	
		printf("%d oiiii", num);
		
	};	
	
	
	
	
	return 0;
	
	
}

