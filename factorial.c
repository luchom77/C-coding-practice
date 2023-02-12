#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x, i, t;

    printf("Ingrese un entero\n");
    scanf("%d", &t);

    i=0;
    x=1;

    while (i<t){
        x=x*(i+1);
        i=i+1;
    }

    printf("Su factorial es %d\n", x);
    
    return 0;
}