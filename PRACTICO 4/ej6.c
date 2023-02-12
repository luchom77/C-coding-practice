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
    
    int tam;
    int a[N];
    

    pedirArreglo(a, tam);
    imprimeArreglo(a, tam);

    return 0;
}

