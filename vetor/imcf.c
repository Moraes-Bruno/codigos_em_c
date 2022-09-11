#include <stdio.h>

float calculaIMC(float peso,float altura){
    float imc = peso/(altura*altura);
    return(imc);
}

void exibeimc(float imc){
    if(imc<18.5){
        printf("Voce esta abaixo do peso");
    }
    

}

int main(){
        float peso,altura,imc;
        printf("\n entre com o peso");
        scanf("%f",&peso);
        printf("\n Entre com o altura: ");
        scanf("%f",&altura);

        imc = calculaIMC(peso,altura);

        exibeimc(imc);

}