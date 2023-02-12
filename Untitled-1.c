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

int main(void){
    int r, n, s;
    int a[N];

    pedirArreglo(a, N);

    
    r=0;
    n=0;
    s=0;
    
    while(n!=N){
        r = r || a[n]==s;
        n = n+1;
        s = s+a[n];
    }

    printf("r = %d n=%d  s=%d\n", r);
    return 0;
}