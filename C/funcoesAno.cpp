#include <stdio.h>

int quantDiasAno(int ano){
	if (ano % 4==0) return 366;
	else return 365;
};

int totDiasMes(int y, int m){
	if (m <=6){
		if (m % 2 == 0){
			if (m == 2 && quantDiasAno(y) == 365) return 28;
			else if(m == 2 && quantDiasAno(y) == 366) return 29;
			else return 30;
		}
		else return 31;
	}
	else {
		if (m % 2 == 0) return 31;
		else return 30;
	}
};

int quantTotDias(int di, int me, int an){	
	int quantDias=0, cont, contMes;
	
	if(an>=1901){
		
		for (cont = 1901; cont < an; cont++){
			quantDias+= quantDiasAno(cont);
		};
		
		for (contMes = 1; contMes<me; contMes++){
			quantDias+= totDiasMes(an, contMes);
		};
		quantDias+=(di-1);
		return quantDias;
	}	
	else return 0;
};

int difDias(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2) {
	int tot;
	tot = quantTotDias(dia1, mes1, ano1) - quantTotDias(dia2, mes2, ano2);

	if (tot<0) return tot*(-1);
	else if(tot>0) return tot;
	else return 0;
};

int main(){

	int opt, day, month, year, day2, month2, year2;

	printf("1 - TOTAL DE DIA EM UM MES\n2 - TOTAL DE DIA NUM ANO\n3 - TOTAL DE DIAS DESDE 01/01/1901\n4 - DIFERENCA ENTRE 2 DATAS\n5 - SAIR");
	printf("\n\nEntre com a opcao: ");
	scanf("%d", &opt);	
	
	while (opt!=5){
		if(opt>=1 && opt<5){
				
			printf("Dia: ");
			scanf("%d", &day);
			
			printf("Mes: ");
			scanf("%d", &month);
			
			printf("Ano: ");
			scanf("%d", &year);
			
			switch(opt){
					
				case 1:
					printf("Total de dias do mes %d de %d: %d dias\n", month, year, totDiasMes(year, month));
					break;
				case 2: 
					printf("Total de dias do ano %d: %d dias\b", year, quantDiasAno(year));
					break; 
				case 3:
					if (quantTotDias(day, month, year) == 0) printf("Por favor, insira uma data acima de 01/01/1901");
					else printf("Total de dias desde 01/01/1901: %d dias\n", quantTotDias(day, month, year));
					break;
					
				case 4: 
					printf("Dia 2: ");
					scanf("%d", &day2);
					
					printf("Mes 2: ");
					scanf("%d", &month2);
					
					printf("Ano 2: ");
					scanf("%d", &year2);
					printf("Diferenca de dias: %d \n", difDias(day, month, year, day2, month2, year2));
					break;
					
				
		}}
		else printf("\n\nDigite uma opcao valida!\n");
		
		
		printf("\n1 - TOTAL DE DIAs EM UM MES\n2 - TOTAL DE DIA NUM ANO\n3 - TOTAL DE DIAS DESDE 01/01/1901\n4 - DIFERENCA ENTRE 2 DATAS\n5 - SAIR");
		printf("\n\nEntre com a opcao: \n");
		scanf("%d", &opt);
	};

	return 0;
}
