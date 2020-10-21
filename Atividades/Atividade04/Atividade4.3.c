#include <stdio.h>
#include <ctype.h>
int main(){
   char x;
   printf(" Digite uma tecla: ");
   scanf("%c", &x);
    
   if( isdigit(x) ) {
      printf(" Sua tecla e um digito ");
   }
   else if (isalpha(x))
   {
      printf(" Sua tecla e uma letra");
   }
   else
   {
       printf(" Sua tecla e um caracter especial ");
   }
    
    return 0;

}