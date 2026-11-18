#include <stdio.h>

int main(){
    int n, cont=0;
    int ant, cond=0;
    scanf("%d", &n);
    int a[n];    
    for(int q=0; q<n; q++){
        scanf("%d", &a[q]);
    }
    for(int q=n-1; q>=1; q--){
        while (cond!=-1){
            if (q!=n-1){
                if(a[q]>a[q+1]){
                    for(int i=q; i>=1; i--){
                        if(a[q]>=a[i-1]){
                            cont++;
                        }
                        else{
                            cond=-1;
                            break;
                        }
                    }
                    cond=-1;
                }
                else cond=-1;
            }
            else{
                for(int i=q; i>=1; i--){   
                    if(a[q]>=a[i-1]){
                        cont++;
                        if (cont==n-1){
                            cond=-1;
                        }
                    }
                    else {
                        cond=-1;
                        break;
                    }
                }
                cond=-1;
            }
        }
        cond=0;
        if (cont==n-1) break;
    }
    printf("%d\n", cont);
    return 0;
}