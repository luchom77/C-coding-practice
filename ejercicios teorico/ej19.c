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
    int r, m, u;
    int a[N];

    pedirArreglo(a, N); 

    r=0;
    m=0;
    u=0;

       
    while(m!=N){
        if(u>=m*a[m]){
            r=r+1;
            u=u+a[m];
            m=m+1;
        }
        else if(u<m*a[m]){
            r=0;
            u=u+a[m];
            m=m+1;
        }
    }

    printf("r=%d u=%d m=%d\n", r, u, m);

    return 0;

}