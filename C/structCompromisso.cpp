#include <stdio.h>
#include <string.h>


typedef struct{
	int hora, minuto, segundo;
	
} tpHorario;


typedef struct{
	int dia, mes, ano;
} tpData;

typedef struct{
	
	tpHorario horario;
	tpData data;
	char descricao[30];
} tpCompromisso;

int main(){
	tpCompromisso c1, c2;
		c1.horario.hora = 7;
		c1.horario.minuto = 50;
		c1.horario.segundo = 0;
		c1.data.dia = 7;
		c1.data.mes = 5;
		c1.data.ano = 2026;
		strcpy(c1.descricao, "Aula de Prog1");
		
		c2.horario.hora = 13;
		c2.horario.minuto = 50;
		c2.horario.segundo = 0;
		c2.data.dia = 7;
		c2.data.mes = 5;
		c2.data.ano = 2026;
		strcpy(c2.descricao, "Aula de Sociologia");	
	
	printf("%s\n\n%d/%d/%d\n%d:%d:%d\n\n", c1.descricao, c1.data.dia, c1.data.mes, c1.data.ano, c1.horario.hora, c1.horario.minuto, c1.horario.segundo);	
	printf("%s\n\n%d/%d/%d\n%d:%d:%d\n\n", c2.descricao, c2.data.dia, c2.data.mes, c2.data.ano, c2.horario.hora, c2.horario.minuto, c2.horario.segundo);	
	
	return 0;
};
