#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct div_t {
    int cociente;
    int resto;
};

struct div_t division(int x, int y){
    struct div_t res;
    res.cociente = 0;
    res.resto=x;

    while (res.resto>=y){
    	res.resto = res.resto - y;
    	res.cociente = res.cociente + 1;
	}

    return res;

}

int pedirEntero(void) {
        int a;
            printf("Ingrese un valor para x\n");
            scanf("%d", &a);

        return a;
    }




int main (void){
    int x,y;
    struct div_t resultado;

    x=pedirEntero();
    y=pedirEntero();

    resultado=division(x,y);
    

    printf("El resultado de dividir %d por %d es %d con resto %d\n", x, y, resultado.cociente, resultado.resto);

    return 0;

}



