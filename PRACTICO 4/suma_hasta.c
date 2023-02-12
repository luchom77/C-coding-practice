#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int conGauss(void){
    int N;
    printf("Ingrese un entero positivo\n");
    scanf("%d", &N);

    assert(N>=0);
   
    N= (N*(N+1))/2;
       
    printf("El resultado es %d", N);

    return 0;
}

int otraForma(void){
    int N, t, p;
    printf("Ingrese un entero positivo\n");
    scanf("%d", &N);

    assert(N>=0);

    t=0;
    p=0;

    while (N!=t){
        
        t = t + 1;
        p = p + t;

    }

    printf("La suma da %d", p);

    return 0;
}

int main(void){
    int n;

    printf("Elija 1 o 2 \n");
    scanf("%d", &n);

        if (n==1){
            conGauss();
        }
        if (n==2){
            otraForma();
        }
        else if (n !=1 && n !=2){
            printf("undefined\n");
        }

        return 0;
}
