#include <stdio.h>
#include <string.h>
#define anoAtual 2026
#define diaAtual 9
#define mesAtual 5

typedef struct{
	char signo[20];
	int diaIn, mesIn;
	int diaFin, mesFin;
	char caracteristica[30];
} tpSigno;


void carregarSigno(tpSigno horoscopo[12]){
	strcpy(horoscopo[0].signo, "Aquario");
	strcpy(horoscopo[0].caracteristica, "Racional");
	horoscopo[0].diaIn= 21;
	horoscopo[0].mesIn = 01;
	horoscopo[0].diaFin = 19;
	horoscopo[0].mesFin = 02;
	
	strcpy(horoscopo[1].signo, "Peixes");
	strcpy(horoscopo[1].caracteristica, "Sentimental");
	horoscopo[1].diaIn= 20;
	horoscopo[1].mesIn = 02;
	horoscopo[1].diaFin = 20;
	horoscopo[1].mesFin = 03;
	
	strcpy(horoscopo[2].signo, "Aries");
	strcpy(horoscopo[2].caracteristica, "Acao, impetuoso");
	horoscopo[2].diaIn= 21;
	horoscopo[2].mesIn = 03;
	horoscopo[2].diaFin = 20;
	horoscopo[2].mesFin = 04;
	
	strcpy(horoscopo[3].signo, "Touro");
	strcpy(horoscopo[3].caracteristica, "Calmo, possessivo");
	horoscopo[3].diaIn= 21;
	horoscopo[3].mesIn = 04;
	horoscopo[3].diaFin = 20;
	horoscopo[3].mesFin = 05;
	
	strcpy(horoscopo[4].signo, "Gemeos");
	strcpy(horoscopo[4].caracteristica, "Comunicativo");
	horoscopo[4].diaIn = 21;
	horoscopo[4].mesIn = 05;
	horoscopo[4].diaFin = 20;
	horoscopo[4].mesFin = 06;
	
	strcpy(horoscopo[5].signo, "Cancer");
	strcpy(horoscopo[5].caracteristica, "Instavel");
	horoscopo[5].diaIn= 21;
	horoscopo[5].mesIn = 06;
	horoscopo[5].diaFin = 20;
	horoscopo[5].mesFin = 07;
	
	
	strcpy(horoscopo[6].signo, "Leao");
	strcpy(horoscopo[6].caracteristica, "Autoritario");
	horoscopo[6].diaIn= 21;
	horoscopo[6].mesIn = 07;
	horoscopo[6].diaFin = 20;
	horoscopo[6].mesFin = 8;
	
	
	strcpy(horoscopo[7].signo, "Virgem");
	strcpy(horoscopo[7].caracteristica, "Nervoso");
	horoscopo[7].diaIn= 21;
	horoscopo[7].mesIn = 8;
	horoscopo[7].diaFin = 20;
	horoscopo[7].mesFin = 9;
	
	
	strcpy(horoscopo[8].signo, "Libras");
	strcpy(horoscopo[8].caracteristica, "Equilibrado");
	horoscopo[8].diaIn= 21;
	horoscopo[8].mesIn = 9;
	horoscopo[8].diaFin = 20;
	horoscopo[8].mesFin = 10;
	
	strcpy(horoscopo[9].signo, "Escorpiao");
	strcpy(horoscopo[9].caracteristica, "Vingativo");
	horoscopo[9].diaIn= 21;
	horoscopo[9].mesIn = 10;
	horoscopo[9].diaFin = 20;
	horoscopo[9].mesFin = 11;
	
	strcpy(horoscopo[10].signo, "Sagitario");
	strcpy(horoscopo[10].caracteristica, "Viajante");
	horoscopo[10].diaIn= 21;
	horoscopo[10].mesIn = 11;
	horoscopo[10].diaFin = 20;
	horoscopo[10].mesFin = 12;
	
	strcpy(horoscopo[11].signo, "Capricornio");
	strcpy(horoscopo[11].caracteristica, "Persistente");
	horoscopo[11].diaIn= 21;
	horoscopo[11].mesIn = 12;
	horoscopo[11].diaFin = 20;
	horoscopo[11].mesFin = 01;
};

void exibirSignos(tpSigno horoscopo[12], int indSig){
	int q;
	
	

	for(q=0; q<12;q++){
		if (indSig == -1){
			printf("\nSigno de %s", horoscopo[q].signo);
			printf("\nCaracteristica: %s", horoscopo[q].caracteristica);
			printf("\nData inicial: %d/%d", horoscopo[q].diaIn, horoscopo[q].mesIn);
			printf("\nData final: %d/%d", horoscopo[q].diaFin, horoscopo[q].mesFin);		
		}
		
		else{
			if (q == indSig){
				printf("\nSigno de %s", horoscopo[q].signo);
				printf("\nCaracteristica: %s", horoscopo[q].caracteristica);
				printf("\nData inicial: %d/%d", horoscopo[q].diaIn, horoscopo[q].mesIn);
				printf("\nData final: %d/%d", horoscopo[q].diaFin, horoscopo[q].mesFin);		
				
			}
				
		}
		
	};
};

void verSigno(tpSigno horoscopo[12], int dataNas[3]){
	int dia, mes, ano, q;
	printf("\nDia de nascimento: ");
	scanf("%d", &dataNas[0]);
	
	printf("\nMes de nascimento: ");
	scanf("%d", &dataNas[1]);
	
	printf("\nAno de nascimento: ");
	scanf("%d", &dataNas[2]);
	
	
	for (q=0; q<12; q++){
		if (((dataNas[0] > horoscopo[q].diaFin) && (dataNas[1] == horoscopo[q].mesIn)) || ((dataNas[0] < horoscopo[q].diaIn) && (dataNas[1] == horoscopo[q].mesFin))) {
			exibirSignos(horoscopo, q);
		};
	};
};

void calcIdade(int vIdade [3]){
	int idade = anoAtual-vIdade[2];
	
	if (mesAtual < vIdade[1] || (diaAtual < vIdade[0] && diaAtual < vIdade[1])) printf("\nVoce tem %d anos de idade.", idade-1);
	else printf("\nVoce tem %d anos de idade.", idade);
};



int main(){
	tpSigno vetorSigno[12];
	int opt, birthday[3];
	
	while(opt!=5){
		printf("\n\n1 - Carregar signos ocidentais");
		printf("\n2 - Exibir signos");
		printf("\n3 - Verificar meu signo");
		printf("\n4 - Exibir idade da pessoa");
		printf("\n5 - Sair");
		
		printf("\n\nOpcao: ");
		scanf("%d", &opt);
		
		switch(opt){
			case 1:
				carregarSigno(vetorSigno);
				printf("Signos carregados com sucesso!\n");
				break;
			case 2:
				exibirSignos(vetorSigno, -1);
				break;
			case 3:
				verSigno(vetorSigno, birthday);
				break;
			case 4:
				calcIdade(birthday);
				break;
		};
		
	};
	return 0;

};
