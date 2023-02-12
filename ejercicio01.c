#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int pedirEntero(void) {
    int n;
    printf("Ingrese un entero positivo\n");
    scanf("%d", &n);

        return n;
    }

void holaHasta(int n){
    
    while (n!=0){
        printf("Hola ");
        n=n-1 ;
    }
}

int main (void){
    int n;
    n=pedirEntero();
    assert(n>0);
    holaHasta(n);

    return 0;
}

