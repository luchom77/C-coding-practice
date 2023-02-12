#include <stdbool.h>
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

int sumatoria(int a[], int tam){
    int i, resultado;

    i=0;
    resultado=0;
    tam= N;

    while (i<tam){
	    
	    resultado= a[i]+ resultado; 
        i=i+1;
    }

    printf("El resultado de la suma es %d", resultado);
}

int main (void){
    int tam;
    int a[N];

    tam=N;

    pedirArreglo(a,tam);
    sumatoria(a,tam);
    

    return 0;
}
