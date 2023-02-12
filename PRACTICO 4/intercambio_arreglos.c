#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define N 5

int pedirEntero(void) {
        int a;
            printf("Ingrese un entero menor a %d\n", N);
            scanf("%d", &a);

        return a;
    }

void intercambiar(int a[], int tam, int i, int j){
    int aux;

         
    aux = a[i];
    a[i] = a[j];
    a[j] = aux;


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
void imprimeArreglo(int a[], int n_max){
    int i;

    i=0;
    n_max= N;

    while (i<n_max){
	    
        printf("elemento posicion %d del arreglo es %d:\n",i+1, a[i]);
	    i=i+1;
    }
}

int main (void){
    int a[N];
    int tam, i, j;

    pedirArreglo(a, tam);

    i=pedirEntero()-1;
    j=pedirEntero()-1;

    assert (i < N && j < N);

    intercambiar(a, tam, i, j);
    imprimeArreglo(a, tam);

    return 0;
}