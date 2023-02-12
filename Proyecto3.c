#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int x, y, z, b, w;
   printf("Ingrese un valor para x\n");
   scanf("%d", &x);
   printf("Ingrese un valor para y\n");
   scanf("%d", &y);
   printf("Ingrese un valor para z\n");
   scanf("%d", &z);
   printf("Ingrese un valor para b\n");
   scanf("%d", &b);
   printf("Ingrese un valor para w\n");
   scanf("%d", &w);

   printf("x+y+1=%d\n", x + y + 1 ) ;
   printf("z * z + y * 45 - 15 * x da como resultado %d\n", z * z + y * 45 - 15 * x);
   printf("y - 2 == (x * 3 + 1) %% 5 da como resultado %d\n", y - 2 == (x * 3 + 1) % 5);
   printf("y / 2 * x da como resultado %d\n", y / 2 * x);
   printf("y < x *z da como resultado %d\n", y < x *z);
   
   printf("x %% 4 == 0 da como resultado %d\n", x % 4 == 0);
   printf("x + y == 0 && y - x == (-1) * z da como resultado %d\n", x + y == 0 && y - x == (-1) * z );
   printf("not b && w da como resultado %d\n", !b && w); 

      return 0;
} 

/* las variables b, w deben tomar valores 1 o 0 para true o false respectivamente */
