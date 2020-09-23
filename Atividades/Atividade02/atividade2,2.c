#include<stdio.h>
int main(){
    double preco = 400;
    if (preco >= 0.00 && preco <= 100.00)
    {
        printf("%s\n", "voce ganhou 1% de desconto");
    }
    else if (preco >= 100.01 && preco <= 500)
    {
        printf("%s\n", "voce ganhou 5% de desconto");
    }
    else
    {
        printf("%s\n", "voce ganhou 10% de desconto");
    }
    return 0;
    
}