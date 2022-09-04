#include <stdio.h>

int main(){
    int resto;
    int num=1;
    int par=0;
    for(int i=0;i<30;i++){
        resto = num%2;

        if (resto == 0)
        {
           par++;
        }

        else{
            printf("");
        }
        

        num++;
    }

    printf("\nA quantidade de numeros pares é:%i",par);
}