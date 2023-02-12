#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int pedirEntero(void) {
        int a;
            printf("Ingrese un valor para x\n");
            scanf("%d", &a);

        return a;
    }


void imprimeEntero(int m){
            printf("El numero es %d", m);
}

int main (void){
    int x, y, i, res;
    i=0;
    y=1;
    res=0;
    
    x=pedirEntero();
    printf("sigma0: x=%d y=%d i=%d res=%d\n", x, y, i, res);

    while (i<(x-1)){
        i=i+1;
        if(i%2==0){
            y=y+2*i;
        }
        else if(i%2==1){
            y=y+2*(i+1);
        }
        printf("sigmai: x=%d y=%d i=%d res=%d\n", x, y, i, res);
    }

    res= y-i%2;
    imprimeEntero(res);

    return 0;
}

/*  sigma0: x=6 y=1 i=0 res=0
    sigma1/1: x=6 y=5 i=1 res=0
    sigma1/2: x=6 y=9 i=2 res=0
    sigma1/3: x=6 y=17 i=3 res=0
    sigma1/4: x=6 y=25 i=4 res=0
    sigma1/5: x=6 y=37 i=5 res=0
    El numero es 36 */