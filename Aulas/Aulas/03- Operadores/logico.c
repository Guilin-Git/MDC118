#include <stdio.h>

int main () {
    int x = 20;
    int y = 20;
   /* operador E */
    printf("x > y? %d\n", x > y );
    printf("x + 10 > y? %d\n", x + 10 > y );
    printf("x > y e x + 10 > y? %d\n", x > y && x + 10 > y); // falso E qualquer coisa eh falso 

   /* operador OU */
    printf("x > y? %d\n", x > y );
    printf("x + 10 > y? %d\n", x + 10 > y );
    printf("x > y ou x + 10 > y? %d\n", x > y || x + 10 > y); // Verdadeiro ou qualquer coisa eh verdadeiro

   /* operador NAO */
    printf("!(x > y?) %d\n", !(x > y));
    printf("!(x + 10 > y?) %d\n", !(x + 10 > y ));
    printf("!(x > y ou x + 10 > y?) %d\n", !(x > y || x + 10 > y)); 



    return 0;
}