#include <stdio.h>

float main(){
    int num=0;
    int res;
    int par=0;

    for(int i=0;i<30;i++){
        res = num%2;
    

        if(res==0){
            par +=1;
        }

        else{
            printf("");
        }

        num++;
    }

    printf("\nA quantidade de numeros pares e: %i",par);
}