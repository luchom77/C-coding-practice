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
        printf("%d\n", a);
        return a;
        
    }

    else if(a<b){
        printf("%d\n", b);
        return b;
        
    }

    
}

int min (int a, int b){
    
    if (a>=b){
        printf("b = %d\n", b);
        return b;
        
    }

    else if(a<b){
        printf("a = %d\n", a);
        return a;
        
    }

    
}

int main(void){
    int r, n, u;
    int a[N];

    pedirArreglo(a, N);

    r=(a[0]-a[1])*(a[0]-a[1]);
    n=1;
    u=0;

    while(n!=N){
      r= max(r, u - min(r, a[n]));
      u= max(u, a[n]); 
      n=n+1;  
    }

    printf("r=%d u=%d n=%d\n", r, u, n);

    return 0;
}