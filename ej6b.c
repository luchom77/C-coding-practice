#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int pedirEntero(void) {
        int a;
            printf("Ingrese un valor\n");
            scanf("%d", &a);

        return a;
    }


void imprimeEntero(int m){
            printf("El menor es %d", m);
}

int main(void) {
    int x, y, z, m;
    x = pedirEntero();
    y = pedirEntero();
    z = pedirEntero();
    m = pedirEntero(); 

        if (x<y) {
            m=x;
        }
        else if (x>=y) {
            m=y;  
        }
        if (m>=z) {
            m=z;
        }

    imprimeEntero(m);

    return 0;

}