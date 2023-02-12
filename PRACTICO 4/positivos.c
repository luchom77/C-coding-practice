#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define N 5

bool existe_positivo(int a[], int tam){
    int i;
    i=0;
    
    while (i<N){

        if (a[i]>0){
            printf("Existe un positivo\n");
            i=N;
        }    
        else if (a[i]<=0){
            i=i+1;
        }
    }

}

bool todos_positivos(int a[], int tam){
    bool x;
    int i;
    
    i=0;
    x=1;

    while (i<N){
        if (a[i]>0){
            x=1;
            i=i+1;
        }

        else if(a[i]<=0){
            x=0;
            i=N;
        }
        
    }

    if(x==1){
        printf("son todos positivos\n");
    }
    else if (x==0){
        printf("hay al menos un negativo\n");
    }
    

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
    int tam, y;
    bool x;

    printf("Ingrese 1 para saber si existe un positivo o un 2 para saber si son todos positivos\n");
    scanf("%d",y);

    pedirArreglo(a, tam);

    if(y==1){
        x=existe_positivo(a, tam);
    }
    
    else if(y==2){
        x=todos_positivos(a, tam);
    }
   
   else if(y!=1 && y!=2){
       printf("Error, ingrese un valor valido\n");
   }
    return 0;
    
}