#include <stdio.h>
int main(){
    unsigned int x =5499;
    int h = x / 3600;
    int m = (x - h*3600) / 60;
    int s = x - (h*3600) - (m*60);
    
    printf("%d\n", h);
    printf("%d\n", m);
    printf("%d\n", s);
}