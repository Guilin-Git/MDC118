#include <stdio.h>

int main(){
    int x = 15;
    int y = 20;

    printf("x é par ? %d\n", x % 2 == 0 ); 
    printf("y é par ? %d\n", y % 2 == 0 ); 

   /* operador ternario (expressao) ? verdadeiro : falso */
   printf("%s\n", x % 2 == 0 ? "é par" : "é impar"); 
   printf("%s\n", y % 2 == 0 ? "é par" : "é impar"); 

   float desconto = y > 100 ? 0.5 : 0;
   printf("%f\n", desconto);

return 0;
}