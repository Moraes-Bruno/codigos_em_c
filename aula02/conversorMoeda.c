#include <stdio.h>

float main(){
    float real,conversao;
    int seletor;

    printf("//----------//\n");
    printf("1-Dolar\n");
    printf("2-Euro\n");
    printf("3-Libra\n");
    printf("4-Peso\n");
    printf("9-Sair\n");
    printf("//----------//\n");

    printf("Selecione uma opcao que deseje converter o real para: ");
    scanf("%i",&seletor);

    switch (seletor)
    {
    case 1:
        printf("Digite um valor em real: ");
        scanf("%f",&real);

        conversao = real/5.16;

        printf("o valor e: %.2f dolares",conversao);

        break;
    case 2:
        printf("Digite um valor em real: ");
        scanf("%f",&real);

        conversao = real/5.09;

        printf("o valor e: %.2f euros",conversao);

        break;
    
    case 3:
     printf("Digite um valor em real: ");
        scanf("%f",&real);

        conversao = real/5.84;

        printf("o valor e: %.2f libras",conversao);

        break;
    
    case 4:
         printf("Digite um valor em real: ");
        scanf("%f",&real);

        conversao = real/3.86;

        printf("o valor e: %.2f pesos",conversao);

    case 9:
        break;
    default:
        printf("Opcao invalida");
    }

}