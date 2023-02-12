#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int r, x, y;

    r=7;
    x=7;
    y=7+1;  

    printf("sigma0: r=%d x=%d y=%d\n", r, x, y);

    if (x%y==x){
        r= y - x;
    }
    else if (y%x==y){
        r=(x+y)*(x-y);
    }
    else if ((x%y != x)&&(y%x != y)){
        r=0;
    }

    printf("resultado: r=%d", r);

    return 0;
}

/*  sigma0: r=7 x=7 y=8
    resultado: r=1 */