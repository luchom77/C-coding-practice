#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define N 5

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
    int a[N];
    int tam,x;
    struct datos_t resultado;
    
    tam=N;

    pedirArreglo(a, tam);
    resultado = min_max(a, tam);

    printf("El valor maximo es: %d\n", resultado.maximo);
    printf("El valor minimo es: %d\n", resultado.minimo);


    return 0;

}