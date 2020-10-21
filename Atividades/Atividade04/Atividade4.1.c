#include <stdio.h>
int main(){

    int num1;
    int num2;
    printf(" digite o primeiro numero: ");
    scanf("%d", &num1);
    printf(" digite seu segundo numero: ");
    scanf("%d", &num2);

    if (num1 - num2 < 0)
    {
        printf(" o primeiro numero colocado e o menor ");
    }
    else if (num2 - num1 > 0)
    {
        printf(" o segundo numero colocado e o menor ");
    }
    else
    {
        printf(" os numeros sao iguais ");
    }
    
    
    return 0;

}