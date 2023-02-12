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
int max (int a, int b){
    
    if (a>=b){
        
        return a;
        
    }

    else if(a<b){
        
        return b;
        
    }
}

int main (void){
    int a[N];
    int r, n;
    bool u;

    pedirArreglo(a,N);

    r=0;
    n=1;
    u=1;

    while(n!=N){
        if(u==1){
            r= max(r,n);
            u=u && a[n-1]<a[n];
            n=n+1;
        }
        else if(u==0){
            r=r;
            u=u && a[n-1]<a[n];
            n=n+1;
        }
    }

    printf("r=%d  u=%d  n=%d\n", r+1, u, n); /* pongo r+1 porque las posiciones arrancan desde 0 y yo las quiero contar desde 1 */
 
    return 0;

}