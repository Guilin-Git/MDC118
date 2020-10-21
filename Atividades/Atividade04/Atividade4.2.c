#include <stdio.h>
int main(){
    int ano;
    printf(" insira o ano: ");
    scanf("%d", &ano);
    if (ano % 4 == 0 && ano % 100 != 0)
    {
        printf(" esse ano e bissexto ");
    }
    else
    {
        printf(" esse ano nao e bissexto ");
    }
    
    
    return 0;
}