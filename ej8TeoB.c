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


int main (void){
    int r, n, s;
    int array[N];

    r=1;
    n=0;
    s=1;

    pedirArreglo(array, N);

    while (n<N){
        r= r && array[n]==s;
        n= n+1;
        s= s*(n+1);
    }
    
    
    printf("resultado: %d", r);

    return 0;

}