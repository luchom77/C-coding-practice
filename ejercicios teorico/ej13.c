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

int main(void){
    int n, u;
    int array[N];
    bool r;

    pedirArreglo(array, N);

    r=1;
    n=0;
    u=0;

    while(n!=N && !r){
        r=r && (u>0);
        u=u+array[n];
        n=n+1;
    }
    
    printf("r=%d n=%d u=%d", r, n, u);

    return 0;

}
