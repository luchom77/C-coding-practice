#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void){
    int d, contador, pp; 

    contador=0;
    pp=20;
    d>0 && d<20; /* podria usar for (d>0; d<20;) */

    printf("pre bucle: contador=%d divisor=%d primos hasta=%d\n", contador, d, pp);
   
    while (pp!=0){
        
        if (pp % d != 0 && d!=1 && d!=pp){

            a[contador]= pp;
            contador=contador+1;
        }

            
    pp=pp-1;    
    printf("valores: contador=%d divisor=%d \n", contador, d );  /* como puedo muestrar el array con todos los valores en la terminal */
        
    }   
            
    return 0;

}

