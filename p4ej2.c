#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int pedirEntero(void) {
    int a;
            printf("Ingrese un entero\n");
            scanf("%d", &a);

        return a;
}


struct dist_t {
int dist;
bool x_es_menor;
bool y_es_menor;
};

struct dist_t distancia(int x, int y) {
    struct dist_t ess;
    int aux;
    
    if(x!=y){

        aux= (x-y);

        if (aux>=0){
        ess.dist= aux;
        }

        else if(aux<0){
        ess.dist = -aux;
        }
    
        ess.x_es_menor= (x<=y);
    
        ess.y_es_menor= (y<=x);

    }


    return ess;
}

int main(void){
    int x, y;
    struct dist_t resultado;

    x=pedirEntero();
    y=pedirEntero();

    resultado = distancia(x, y);

    printf("La distancia entre %d y %d es %d\n", x, y, resultado.dist);
    printf("Recibira un 1 si es True y un 0 si es False : \n");
    printf("El primer valor ingresado(%d) es el menor: %d\n", x, resultado.x_es_menor);
    printf("El segundo valor ingresado(%d) es el menor: %d\n", y, resultado.y_es_menor);

    return 0;

}