#include <stdio.h>

int main(){
	int cpf, depen;
	float salario;
	
	printf("Digite o CPF: ");
	scanf("%d", &cpf);
	
	while(cpf != 0){
		
		printf("Salario: ");
		scanf("%f", &salario);
	
		printf("Numero de dependentes: ");
		scanf("%d", &depen);
		
		printf("\nCPF cadastrado.");
		
		//verificação do imposto
		if (salario <=5000) printf("\n\nIsento. Porem, como voce tem %d dependentes, fica %.2f.", depen, salario + (depen * (0.05 * 1621)));
		else{
			if (salario <= 7500) printf("\nCom desconto de 10%, o salario ficou %.2f. Porem, como voce tem %d dependentes, fica %.2f.", salario-(salario*0.10), depen, salario + (depen * (0.05 * 1621)));
			else printf("\nCom desconto de 27,5%, o salario ficou %.2f. Porem, como voce tem %d dependentes, fica %.2f.", salario-(salario*0.275), depen, salario + (depen * (0.05 * 1621)));
		}	
		
		printf("\n\nDigite o CPF: ");
		scanf("%d", &cpf);		
		
	};
	return 0;
};
