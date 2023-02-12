#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x, y;
    
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    printf("sigma0: x = %d, y = %d\n", x, y );
    x=x+y; 
    printf("sigma1: x = %d, y = %d\n", x, y );
    y= y + y;
    printf("sigma2: x = %d, y = %d\n", x, y );   
    
    return 0;
} 