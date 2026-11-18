#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool bissexto(int ano){
	return ano % 4 ==0;
	
};

bool valMes(int mes){
	return mes>0 && mes<13;
};

bool valDia(int dia, int mes, int ano){
			
	
		if (mes == 1) return dia>0 && dia<=31;
		else if (mes == 2) {
			if (bissexto(ano))
				return dia > 0 && dia <= 29;
			else
				return dia > 0 && dia <= 28;
		}
		else if(mes ==3) dia>0 && dia<=31;	
		else if (mes == 4) dia>0 && dia<=30; 
		else if(mes ==5) dia>0 &&dia<=31;
		else if (mes == 6) dia>0 && dia<=30; 
		else if(mes ==7) dia>0 &&dia<=31;
		else if (mes == 8) dia>0 && dia<30; 
		else if(mes ==9) dia>0 &&dia<=30;
		else if (mes == 10) dia>0 && dia<=31; 
		else if(mes ==11) dia>0 &&dia<=30;
		else if(mes ==12) dia>0 &&dia<=31;
};



void extenso(int d, int m, int y){
	char *mes;
	
	switch (m){
		case 1:
			mes = "janeiro";
			break;
		case 2: 
			mes = "fevereiro";
			break;
		
		case 3:
			mes = "marco";
			break;
		case 4: 
			mes = "abril";
			break;
		
		case 5:
			mes = "maio";
			break;
		case 6: 
			mes = "junho";
			break;
		
		case 7:
			mes = "julho";
			break;
		case 8: 
			mes = "agosto";
			break;
		
		case 9:
			mes = "setembro";
			break;
		case 10: 
			mes = "outubro";
			break;
		
		case 11:
			mes = "novembro";
			break;
		case 12: 
			mes = "dezembro";
			break;
		
		
	};
	
	
	printf("Dia %d do mes %s de %d", d, mes, y);	
};


int main(){
	int day,  year, month;
	bool bis;
	
	printf("Digite o dia: ");
	scanf("%d", &day);
	
	
	printf("\nDigite o mes: ");
	scanf("%d", &month);	
	
	
	
	printf("Digite o ano: ");
	scanf("\n%d", &year);
	
	if (valMes(month)) {
		if (valDia(day, month, year)) {
			printf("dia valido\n");
			extenso(day, month, year);	
			
		}
		else
			printf("dia invalido");
	}
	else printf("\nMes invalido.");


	return 0;
	
};
