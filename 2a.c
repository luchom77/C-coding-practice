#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int ejerc2a1 (void){
    int x, y, aux, X, Y;

    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    x=X;
    y=Y;
    aux=x;
    assert(x==X && y==Y);

    x=x+1;
    y=aux+y;

    assert(x== X + 1 && y== X+Y); 

    printf("Los nuevos valores son x=%d y=%d", x,y);
    return 0;
}

int ejerc2a2 (void){
    int x, y, z, aux1, aux2, X, Y, Z;

    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    printf("Ingrese un valor para z\n");
    scanf("%d", &z); 
    
    x=X;
    y=Y;
    z=Z;
    aux1=y;
    aux2=x;
    assert(x==X && y==Y && z==Z);

    x=y;
    y=aux2+y+z;
    z=aux1+aux2;
    assert(x==Y && y==X+Y+Z && z==Y+X);

    printf("Los nuevos valores son x=%d y=%d z=%d", x,y,z);
    return 0;
}

int main(void){
    int n;

    printf("Elija 1 para ejercicio 2a1, o 2 para ejercicio 2a2\n");
    scanf("%d", &n);

        if (n==1){
            ejerc2a1();
        }
        if (n==2){
            ejerc2a2();
        }
        else if (n !=1 && n !=2){
            printf("undefined\n");
        }

        return 0;
}
