#include <stdio.h>

/*main(){
	int idade;

	printf("Idade: ");
	scanf("%d", &idade);

	if (idade < 16) 
		printf("Nao eleitor.");
	if (idade >= 16 & idade < 18 ) 
		printf("Eleitor facultativo.");
	if (idade >= 18 & idade <= 65) 
		printf("Eleitor obrigatório.");
	if (idade > 65) 
		printf("Eleitor facultativo.");
}*/

main(){
	
	int idade;
	 	
	printf("Idade: ");
	scanf("%d", &idade);
	
	if (idade < 16) printf("Nao eleitor.");
	else {
		if(idade < 18) printf("Eleitor Facultativo");
		else{
			if(idade <= 65) printf("Eleitor obrigatorio.");
			else printf("Eleitor facultativo");
		};
	};
}




