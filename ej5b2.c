#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x,i,res,j;
        i=2;
        j=0;
        res = true;
        printf("Ingrese un valor para x\n");
        scanf("%d", &x);
        
        printf("sigma0: x = %d\n", x);

        while (i<x && res) {
            res= res && ((x % i)!= 0) ;
            i=i+1;
            j=j+1;
            printf("sigma1/%d: x = %d i = %d res= %d\n", j, x, i, res);
        }

        if (res==1){
            printf("El numero que usted ha ingresado es primo");
        }   
    return 0;
}

/* luego de la iteraccion 1= (sigma1/1: x = 5 i = 3 res= 1) */
/* luego de la iteraccion 2= (sigma1/1: x = 5 i = 4 res= 1) */
/* luego de la iteraccion 3= (sigma1/1: x = 5 i = 5 res= 1) */