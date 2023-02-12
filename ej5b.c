#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x,y,i;
        i=0;
        printf("Ingrese un valor para x, y\n");
        scanf("%d %d", &x, &y);
        
        printf("sigma0: x = %d y = %d\n", x, y);

        while (x>=y) {
            x=x-y;
            i=i+1;
            printf("sigma1/%d: x = %d y = %d i = %d\n", i, x, y, i);
        }

        printf("El resto es %d\n", x);

    
    return 0;
}

/* luego de la iteraccion 1= (sigma1/1: x=10 y=3 i=1) */
/* luego de la iteraccion 2= (sigma1/2: x=7 y=3 i=2) */
/* luego de la iteraccion 3= (sigma1/3: x=4 y=3 i=3) */
/* luego de la iteraccion 4= (sigma1/4: x=1 y=3 i=4) */
/* luego de la iteraccion 5= (El resto es 1) */