#include <stdio.h>

int main(){
    int e, s, l, result=0, resultEscSup, resultSupLoja, resultLojaEsc;
    scanf("%d", &e);
    scanf("%d", &s);
    scanf("%d", &l);
    resultEscSup = (e-s<0)? (s-e): (e-s);
    resultLojaEsc = (l-e<0)? (e-l): (l-e);
    resultSupLoja = (s-l<0)? (l-s): (s-l);
    result= resultEscSup+resultLojaEsc+resultSupLoja;
    printf("%d\n", result);
    return 0;
}
