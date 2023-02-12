#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main (void){
    int x, y, z;

    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
   
    z=x;
    x=y;
    y=z;

    printf("Los nuevos valores son x=%d y=%d \n", x, y);
    
    return 0;
}