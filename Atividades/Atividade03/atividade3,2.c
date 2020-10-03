#include <stdio.h>
int main(){  
    int anterior=1;
    int atual=1;
    int proximo;
    printf("%d %d ", anterior, atual);
    for (int proximo = 1 ; proximo <=55; proximo=atual+anterior)
    {
       proximo = anterior + atual;
       anterior = atual;
       atual = proximo;
       
     
       printf("%d ", proximo);
           

    }
    return 0;

}