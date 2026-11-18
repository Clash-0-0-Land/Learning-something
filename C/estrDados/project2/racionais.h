//tipo de dado
typedef struct{
	int Num, Den;
}Racional;

//operções
Racional Define(int N, int D);
Racional Soma(Racional R1, Racional R2);
Racional Multiplica(Racional R1, Racional R2);
int TestaIgualdade(Racional R1, Racional R2);
void Exibe(Racional R);


