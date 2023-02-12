#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int esprimo (int x){
    int i;
    i=2;
 	while (x%i!=0 && x>1){
  		i=i+1;
    
 	}
return (i==x);
}

int iesimoprimo (int j){
    int num, iesimo, primo;
    iesimo=0;
    num=2;
    
    while (j!=iesimo){

        if (esprimo(num)==1){
            iesimo=iesimo+1;
            primo=num;
        }

        num=num+1;
    }

    return primo;
}

int main(void){
    int x;

    printf("Ingrese un entero positivo\n");
    scanf("%d", &x);

    if (x<0){
        printf("Error, x debe ser mayor que 0\n");
    }
    
    printf("El primo es %d\n", iesimoprimo(x) );

    return 0;
}
