#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x, y, z, m;
    printf("Inserte un valor para x, y, z, m\n");
    scanf("%d %d %d %d", &x, &y, &z, &m );
    printf(" x = %d\n y = %d\n z = %d\n m = %d\n", x, y, z, m);
    
        if (x<y) {
            m=x;
        }
        else if (x>=y) {
            m=y;  
        }
        if (m>=z) {
            m=z;
        }

    printf(" x = %d\n y = %d\n z = %d\n m = %d", x, y, z, m);

    return 0;
}

/* devuelve el minimo */
/* el programa le asigna a m el minimo por lo que si en el estado incial m = 0 entonces el estado nunca cambia */
/* es decir, sigma 0: x=5 y=4 z=8 m=0   entonces sigma 1: x=5 y=4 z=8 m=0     y    sigma 2: x=5 y=4 z=8 m=0  */