#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define N 5

struct comp_t {
    int menores;
    int iguales;
    int mayores;
};

struct comp_t cuantos (int a[], int tam, int elem){
    struct comp_t ess;
    int i;

    i=0;
    ess.menores=0;
    ess.iguales=0;
    ess.mayores=0;

    while (i<tam){

        if (a[i]<elem){
            ess.menores = ess.menores + 1;
        }

        if (a[i]==elem){
            ess.iguales= ess.iguales + 1;
        }

        if (a[i]>elem){
            ess.mayores = ess.mayores + 1;
        }

        i=i+1;
    }

    return ess;
}

int pedirEntero(void) {
        int a;
            printf("Ingrese un valor para x\n");
            scanf("%d", &a);

        return a;
    }
void pedirArreglo(int a[], int n_max){
    
    int i;

    i=0;
    n_max= N;

    while (i<n_max){
	    printf("ingrese el elemento posicion %d del arreglo:\n",i+1);
	    scanf("%d",&a[i]);
	    i=i+1;
    }
}


int main (void){
    int x, tam;
    int a[N];
    struct comp_t resultado;
    

    tam=N;
    pedirArreglo(a, tam);
    x=pedirEntero();
    resultado = cuantos (a, tam, x);

    printf("Cantidad de Menores a %d es %d\n", x, resultado.menores);
    printf("Cantidad de Iguales a %d es %d\n", x, resultado.iguales);
    printf("Cantidad de Mayores a %d es %d\n", x, resultado.mayores);


    return 0;
}