#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main (void){
    bool res1, res4;
    int res2, res3;
    int x,y;
    bool z;

    res1=0;
    res2=0;
    res3=0;
    res4=0;

    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    printf("Ingrese 1 para True o 0 para False\n");
    scanf("%d", &z);

    res1= (x==7*7) || z;
    res2= (7+7+y) % 8;
    res3= x * 7 + y * 7;
    res4= (x != 0) || (0<=(7-7)/x) && !z;

    printf("res1=%d res2=%d res3=%d res4=%d", res1, res2, res3, res4);


    return 0;
    
}


/* res1=1 res2=6 res3=21 res4=1 */