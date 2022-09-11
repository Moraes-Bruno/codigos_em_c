#include <stdio.h>

int main(){
    int num=1;
    int quadrado;
    int cont=0;

    while(cont<20){
        quadrado = num*num;
        printf("\n%ix%i=%i",num,num,quadrado);
        num++;
        cont++;

    }
    
}