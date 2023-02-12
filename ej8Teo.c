#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define N 4

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

int factorial(int t){
    int x, i;

    i=0;
    x=1;

    while (i<t){
        x=x*(i+1);
        i=i+1;
    }
   
    return x;
}

bool esFactorial (int array[], int tam){
    bool a, b;
    int i;

    i=0;
    a=1;
    
    while(i<N){
        b = factorial(i) == array[i] ;
        a = a && b;
        i= i + 1 ;
    }

    return a;
   
}

int main (void){
    int tam, resultado;
    int array[N];

    tam=N;

    pedirArreglo(array, tam);
    resultado= esFactorial(array, tam);

    printf("resultado: %d", resultado);

    return 0;

}