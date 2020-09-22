#include<stdio.h>
int main(){
    int nota = 6;
    switch (nota)
    {
    case 1:
        printf("%s\n", "Ruim");
        break;
    case 2:
        printf("%s\n", "Insuficiente");
        break;
    case 3:
        printf("%s\n", "Suficiente");
        break;
    case 4:
        printf("%s\n", "Bom");
        break;
    case 5:
        printf("%s\n", "Ótimo");                
    
    default:
        break;
    }
}