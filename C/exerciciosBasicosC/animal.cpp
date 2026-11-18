#include <stdio.h>


main(){
	int animal;
	
	printf("1 - Mamifero\n2 - Ave\n3 - Reptil\nOpcao: ");
	scanf("%d", &animal);
	
	if (animal == 1){
	
		printf("\n1 - Quadrupede\n2 - Bipede\n3 - Voador\n4 - Aquatico\nOpcao: ");
		scanf("%d", &animal);
		if (animal == 1){
			printf("\n5 - Carnivoro\n6 - Herbivoro\nOpcao: ");
			scanf("%d", &animal);
			if (animal == 5) printf("\nEh um leao.");
			if (animal == 6) printf("\nEh um cavalo.");
		};
		
		if (animal == 2){
			printf("\n5 - Onivoro\n6 - Frutifero\nOpcao: ");
			scanf("%d", &animal);
			
			if (animal == 5) printf("\nEh o homem.");
			if (animal == 6) printf("\nEh um macaco.");
					
		};
		
		if (animal == 3) printf("\nEh um morcego.");
		if (animal == 4) printf("\nEh um baleia.");
		
		
		 
		};
	
	if (animal == 2){
		printf("\n1 - nao-voadora\n2 - nadadora\n3 - de rapina\nOpcao: ");
		scanf("%d", &animal);
		
		if (animal == 1){
			printf("\n4 - Tropical\n5 - Polar\nOpcao: ");
			scanf("%d", &animal);
			
			if (animal == 4) printf("Eh um avestruz");
			if (animal == 5) printf("\nEh um pinguim");
			
		};
		
		if (animal == 2) printf("\nEh um pato");
		
		if(animal == 3) printf("\nEh uma aguia");
		animal =0;
		
	};
	
	if (animal == 3){
		printf("\n1 - Com casco\n2 - Carnivoro\n3 - sem patas\nOpcao: ");
		scanf("%d", &animal);
		if (animal == 1) printf("\n Eh uma Tartaruga");
		if (animal == 2) printf("\nEh um Crocodilo");
		if (animal == 3) printf("\nEh uma Cobra");
		animal = 0;
	};
	
	
}
