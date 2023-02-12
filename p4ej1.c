#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int pedirEntero(void) {
    int a;
            printf("Ingrese un entero\n");
            scanf("%d", &a);

        return a;
}


int main (void){
    int x, y, aux, X, Y;

    X=pedirEntero();
    Y=pedirEntero();
    x=X;
    y=Y;
    
    assert(x==X && y==Y && X != Y && X*Y != 0);
    
    aux=x;
    x= y / (x-y);
    y= aux%y;

    assert(x==Y/(X-Y) && y== X % Y);

    printf("El nuevo valor de x es %d\n", x);
    printf("El nuevo valor de y es %d\n", y);

    return 0;

}