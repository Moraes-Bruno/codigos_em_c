#include <stdio.h>

void somar(float num1,float num2){
    float soma;

    soma = num1+num2;

    printf("\nO resultado da soma é:%.2f",soma);

}

void subtrair(float num1,float num2){
    float sub;

    sub = num1 - num2;

    printf("O resultado da subtração é: %.2f",sub);
}

void multiplicar (float num1,float num2){
    float mult;

    mult = num1 * num2;

    printf("O resultado da multiplicação é: %.2f",mult);
}

void dividir(float num1, float num2){
    float div;

    div = num1 / num2;

    printf("O resultado da divisão é: %.2f ",div);
}


float main(){
    int seletor;
    float num1,num2;

    printf("\n\n1-Soma");
    printf("\n\n2-Subtração");
    printf("\n\n3-Multiplicação");
    printf("\n\n4-Divisão");
    printf("\n\nSelecione uma das opções: ");
    scanf("%i",&seletor);

    switch(seletor){
        case 1:
        printf("Digite um numero: ");
        scanf("%f",&num1);
        printf("Digite outro numero: ");
        scanf("%f",&num2);

        somar(num1,num2);



        break;

        case 2:
        printf("Digite um numero: ");
        scanf("%f",&num1);
        printf("Digite outro numero: ");
        scanf("%f",&num2); 

        subtrair(num1,num2);

        break;

        case 3:
          printf("Digite um numero: ");
        scanf("%f",&num1);
        printf("Digite outro numero: ");
        scanf("%f",&num2); 

        multiplicar(num1,num2);

        break;

        case 4:
          printf("Digite um numero: ");
        scanf("%f",&num1);
        printf("Digite outro numero: ");
        scanf("%f",&num2); 

        dividir(num1,num2);

        break;

    }
}