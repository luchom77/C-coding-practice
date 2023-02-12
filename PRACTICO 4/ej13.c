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

void intercambiar(int a[], int tam, int i, int j){
    int aux;

         
    aux = a[i];
    a[i] = a[j];
    a[j] = aux;


}

struct datos_t {
int maximo;
int minimo;
};

struct datos_t min_max(int a[], int tam){
    struct datos_t ess;
    int j;
    tam=N;
    
    j=1;
    ess.maximo=a[0];
    ess.minimo=a[0];

    while(j < tam){

        if (ess.minimo >= a[j]){
            ess.minimo=a[j];
            
        }
    
        if(ess.maximo <= a[j]){
            ess.maximo = a[j];

        }

        j=j+1;
       
    }

    return ess;

}


int ordenar (int a[], int dim){
    int i, j;
    struct datos_t x;

    x = min_max(a, dim);
    i=0;
    j=1;

    while(x.minimo > a[0]){  
        
        if(a[i]>a[j]){
            intercambiar(a, dim, i, j);
        }

        else if(a[i]>a[j]){
            ;
        }

        i=i+1;
        j=j+1;
    }
}



int main(void){
    int d;
    int a[N];

    d=N;

    pedirArreglo(a,d);
    ordenar(a, d);  /* no esta corriendo esta funcion. necesito un return que devuelva el nuevo arreglo ordenado? */
    imprimeArreglo(a,d);

    return 0;
}