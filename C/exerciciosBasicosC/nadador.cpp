#include <stdio.h>

/*main(){
	int idade;
	printf("Digite a idade do nadador: ");
	scanf("%d", &idade);
	
	if (idade >= 5 & idade <=7) printf("Infantil A");
	if (idade >= 8 & idade <=10) printf("Infantil B");	
	if (idade >= 11 & idade <=13) printf("Juvenil A");
	if (idade >= 14 & idade <=17) printf("Juvenil B");
	if (idade >= 18) printf("Senior");
	if (idade<5) printf("Nao ha categoria para esta idade.");
};*/

main(){
	int idade;
	printf("Digite a idade do nadador: ");
	scanf("%d", &idade);
	
	
	if (idade < 5 ) printf("Nao ha categoria para esta idade");
	else{
		if (idade <=7) printf("Infantil A");
		else{
			if (idade <=10) printf("Infantil B");
			
			else{
				if (idade <=13) printf("Juvenil A");
				else {
					if (idade <=17) printf("Juvenil B");
					else printf("Senior");
				};
			};
		};
	};
	 
	
}
