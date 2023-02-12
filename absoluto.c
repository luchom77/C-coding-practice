
#include <stdio.h>
#include <stdlib.h>


int main (void){
    int x;

    printf("Ingrese un entero\n");
    scanf("%d", &x);

    if (x>=0){
        x;
    }

    else if(x<0){
        x = -x;
    }

    printf("El valor absoluto es %d", x);

    return 0;
}