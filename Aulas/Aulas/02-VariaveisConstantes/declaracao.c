#include <stdio.h>

int numero = 100 ;
char ch = 'A';
unsigned char var = 10;
char negativo = -19;
long int longo = 10000000000000000L;

const int SEXO_MASCULINO = 1;

int main(){
    printf("%d\n",numero);
    printf("%c\n", ch);
    printf("%d\n", var);
    printf("%d\n", negativo);
    printf("%d\n", SEXO_MASCULINO);
    printf("%ld\n", longo);
    return 0;
}