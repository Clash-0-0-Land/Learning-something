#include <stdio.h>
int main(){
    int a, b, c, d, cont=1, cond=0;
    char s='N';
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    while (cond!=-1){
        if( c - (d*cont) >= a && c - (d*cont) <= b) {
            s = 'S';
            cond=-1;
        }
        else if (c - (d*cont)>c) break;
        cont++;
    }
    printf("%c\n", s);
    return 0;
}