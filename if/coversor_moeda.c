#include <stdio.h>

int main(){
    float real,dolar,euro,libra,peso;
    int seletor;

    printf("\n\n1-Dolár");
    printf("\n\n2-Euro");
    printf("\n\n3-libra");
    printf("\n\n4-peso");
    printf("\n\nSelecione a moeda que deseje converter o real para: ");
    scanf("%i",&seletor);

    if(seletor == 1){
        printf("Digite o valor em real: ");
        scanf("%f",&real);

        dolar = real/5.19;
        printf("O valor convertido é: %.2f",dolar);

    }


    else if(seletor == 2){
        printf("Digite o valor em real: ");
        scanf("%f",&real);

        euro = real/5.23;
        printf("O valor convertido é:%.2f",euro);


        
    }

    else if(seletor == 3){
        printf("Digite o valor em real: ");
        scanf("%f",&real);

        libra = real/6.04;

        printf("O valor convertido é: %.2f",libra);
    }

    else if(seletor == 4){
        printf("Digite o valor em real: ");
        scanf("%f",&real);

        peso = real*26.35;

        printf("O valor convertido é:%.2f",peso);
    }

    else{
        printf("Numero invalido");
    }
    
}