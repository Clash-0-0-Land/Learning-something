#include "racionais.h"

Racional Define(int N, int D){
	Racional r;
	r.Num = N;
	r.Den = D;
	return r;
}

Racional Soma(Racional R1, Racional R2){
	Racional R3;
	R3.Num = R1.Num*R2.Den+R2.Num*R1.Den;
	R3.Den = R1.Den*R2.Den;
	return R3;
}

Racional Multiplica(Racional R1, Racional R2){
	Racional R3;
	R3.Num = R1.Num*R2.Num;
	R3.Den = R1.Num*R2.Den;
	return R3;
}

int TestaIgualdade(Racional R1, Racional R2){
	return(R1.Num==R2.Num && R2.Num==R2.Den);
}


void Exibe(Racional R){
	printf("%d/%d", R.Num, R,Den);
}

