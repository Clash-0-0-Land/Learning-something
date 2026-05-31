#include <stdio.h>

main (){
	
	float salario, impos;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	if (salario <= 5000) impos = 0;
	
	else{
		if (salario <= 7500) impos = salario*0.1;
	
		else impos = salario*0.275;	
	};
	
	printf("Seu salario eh %f reais, portanto seu IR eh %f reais. Voce ira receber: %f", salario, impos, salario-impos);
}
