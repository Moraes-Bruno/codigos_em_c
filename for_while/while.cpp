#include <stdio.h>

int main(){
    int x = 0;
    int acumulador = 0;
    while(x<10){
        acumulador = acumulador+x;
        printf("\n valor de x: %i,acumulador: %i",x,acumulador);
        x++;
    }
}