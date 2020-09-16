#include <stdio.h>

int main(){
    int nota = 10;

    /* sintaxe completa */
    // switch equivale a if-else-if so comparando igualdade
    switch (nota) //se e igual
    {
    case 10:
        printf("%s\n", "Parabens");
        break;
    case 9:
    case 8:
        printf("%s\n", "foi quase");
        break;
    case 5:
        printf("%s\n", "tente melhorar");
        break; 
    default:
        printf("%s\n", "puta merda em"); 
        break;
    }
}