#include <stdio.h>

int main(){
    int x = 10;
    int y = 20;
    int z;

    /* operacao soma */
    z = x + y;
    printf("%d\n", z);
    /* operacao subtracao*/
    z = x - y;
    printf("%d\n", z);
    /* operacao multiplicacao */
    z = x * y;
    printf("%d\n", z);
    /* operacao divisao */
    double w = x / y;
    z = x / y;
    
    w = x * 1.0 / y;
    printf("%lf\n", w);
    /* operacao com resto */
    z = x % y;
    printf("%d\n", z);

    printf("%d\n", x++);
    printf("%d\n", ++x);
    /* operador de decremento */
    printf("%d\n", x--);
    printf("%d\n", --x);

    /* forma concatenada */
    x += 1; /* x = x + 1 */
    x -= 1; /* x = x - 1 */
    x *= 1; /* x = x * 1 */
    x /= 1; /* x = x / 1 */
    x %= 1; /* x = x % 1 */ 
}