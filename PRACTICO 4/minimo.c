#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main (void){
    int x, y;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);

    if (x<=y){
        printf("El menor es %d", x);
    }

    else if (x>y){
        printf("El menor es %d", y);
    }

    return 0;
}
    
