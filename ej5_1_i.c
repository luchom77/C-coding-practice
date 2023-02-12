#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,j;
        printf("Ingrese un valor para i\n");
        scanf("%d", &i);
        j=0;
        printf("sigma0: i = %d\n", i);

        while (i!=0) {
            printf("sigma1/%d: i = %d\n", j, i);
            i= 0;
            j= j+1;
            printf("sigma2/%d: i = %d\n", j, i);
        }

        printf("sigma3: i = %d\n", i);
    return 0;
}