#include <stdio.h>
int main(){
        /* sintaxe */
    for ( int i = 1; i <= 10; i++) //contador incremento de 1
    {
        printf("%d, ", i);
    }
    printf("\n");
    for (int i = 10; i <=20; i+=2)//contador incremento de 2
    {
        printf("%d, ", i);
    }
    printf("\n");
    for (int i = 21; i > 12; i--)//contador decremento de 1
    {
        printf("%d ,", i);
    }
    printf("\n");
    /* for aninhados */
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d,%d, ", i, j);
        }
        printf("\n");
    }
        /* for infinito */
    for(;;) {
        printf("Entre com 1 a 4: ");
        char opcao = getchar(); // ler uma tecla
        switch(opcao) {
            case '1': printf("opcao 1\n"); break;
            case '2': printf("opcao 2\n"); break;
            case '3': printf("opcao 3\n"); break;
            case '4': printf("opcao 4\n"); break;
            default: printf("opcao invalida\n"); break;
        }
        if (opcao == '0') break;
    }

    return 0;
    

    
    
}

    