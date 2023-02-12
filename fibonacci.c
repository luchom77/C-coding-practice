#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int main(void){
    int r, i, s, t, aux;

    printf("Ingrese un entero\n");
    scanf("%d", &t);

    r=0;
    i=0;
    s=1;

    while(i<t){
        aux=r;
        r=s;
        i=i+1;
        s=s+aux;
    }

    printf("El fibonacci de %d es %d\n", t, r);

    return 0;
}