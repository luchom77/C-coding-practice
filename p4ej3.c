#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define N 5

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

int suma_resta(int array[], int tam) {
    int i, aux;

    i=0;
    tam=N;
    aux=0;

    while(i<tam){
        if(array[i] % 2 == 0){
            aux = aux + array[i];
        }
        else if (array[i] % 2 != 0){
            aux = aux - array[i];
        }

        i=i+1;
    }

    return aux;
}

int main (void){
    int resultado, tam;
    int array[N];

    tam=N;

    pedirArreglo(array, tam);

    assert(tam>=0);
    resultado = suma_resta(array, tam);


    printf("El resultado final es %d\n", resultado);

    return 0;
}