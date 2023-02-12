#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int pedirEntero(void) {
        int x;
            printf("Ingrese un valor para x\n");
            scanf("%d", &x);

        return x;
    }

void imprimeEntero(int x){
            printf("Su numero es %d", x);
       }


int main(void) {
    int x;
    x = pedirEntero();
    imprimeEntero(x);

    return 0;
}