#include <stdio.h>
#define preco1 1.20 
#define preco2 1.50
#define preco3 1.80

float totPagar(int kwCons, float preco){
	return kwCons*preco;	
};

int main(){
	int numCon=0, totCon=0, tipoCon=0, contAll=0, con1=0, con2=0, con3=0, cont3=0;
	
	printf("Numero do consumidor: ");
	scanf("%d", &numCon);
	
	while (numCon != 0){
		printf("Quantidade de KW consumido (p/mes): ");
		scanf("%d", &totCon);
		printf("\nTIPOS DE CONSUMIDORES:\n1 - Residencia\n2 - LOJAS\n3 - INSTITUICOES\n");
		
		printf("Tipo de consumidor: ");
		scanf("%d", &tipoCon);
			
		if (tipoCon == 1){
			con1+= totCon;
			printf("O consumidor deve pagar: %.2f reais", totPagar(totCon, preco1));
			contAll+=1;
		}
		else if (tipoCon == 2){
			con2+= totCon;
			printf("O consumidor deve pagar: %.2f reais", totPagar(totCon, preco2));
			contAll+=1;
		}
		else if(tipoCon == 3){
			con3+= totCon;
			cont3+=1;
			printf("O consumidor deve pagar: %.2f reais", totPagar(totCon, preco3));
			contAll+=1;
		}
		printf("\n\nNumero do consumidor: ");
		scanf("%d", &numCon);
	};
	printf("\n\nTotal de KWs consumidos pelo tipo 1: %d KWs", con1);
	printf("\nTotal de KWs consumidos pelo tipo 2: %d KWs", con2);
	printf("\nTotal de KWs consumidos pelo tipo 3: %d KWs", con3);
	
	if (cont3==0) printf("\nMedia de consumo de KW do tipo 3: 0 KW");
	else printf("\nMedia de consumo de KW do tipo 3: %.2f KW", con3/cont3);
	
	if(contAll ==0) printf("\nMedia de KW consumido pelas instituições na cidade: 0 KW");
	else printf("\nMedia de KW consumido pelas instituicoes na cidade: %.2f KW", float(con1+con2+con3/contAll));
	
	return 0;
};
