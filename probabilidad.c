#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define N 3




void pedirArreglo(int a[], int n_max){
    int i;

    i=0;
    n_max= N;

    while (i<n_max){
	    printf("ingrese el elemento posicion %d del arreglo:\n",i);
	    scanf("%d",&a[i]);
	    i=i+1;
    }
}

void media (int a[]){
    int i;
    int sum;
    
        
    i=0;
    sum= 0;

    while (i< N){
        sum = sum + a[i];
        i=i+1; 
    }    

    sum = sum / N;

    printf("La media es %d \n", sum);


}

int main (void){    
    int t;
    int a[N];

    t=N;

    pedirArreglo(a,t);
     
    media(a);

    
    return 0;

}