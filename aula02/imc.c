#include <stdio.h>

float main(){
    float peso,altura,imc;

    printf("Digite a sua altura: ");
    scanf("%f",&altura);

    printf("Digite o seu peso: ");
    scanf("%f",&peso);

    imc = peso/(altura*altura);

    if(imc<18.5){
        printf("Abaixo do peso");
    }

    else if(imc>18.6 && imc<24.9){
        printf("Peso ideal,parabens!");
    }

    else if(imc>25 && imc<29.9){
        printf("Levemente acima do peso");
    }

    else if(imc>30 && imc<34.9){
        printf("Obesidade grau I");
    }

    else if(imc>35 && imc<39.9){
        printf("Obesidade grau II (severa)");
    }

    else{
        printf("Obesidade grau III (morbida)");
    }


}