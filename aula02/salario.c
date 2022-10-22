#include <stdio.h>

float main(){
    float salario;
    int pontos;

    printf("Digite os seu salario: ");
    scanf("%f",&salario);

    printf("Digite os seus pontos: ");
    scanf("%i",&pontos);

    if (pontos>=1 && pontos <=99)
    {
        salario+=25;

        printf("O seu salario com um acrescimo de 25 reais e: %.2f",salario);
    }
    else if (pontos>=100 & pontos<=499 )
    {
        salario+=100;

        printf("O seu salario com acescimo de 100 reais e: %.2f",salario);
    }

    else if (pontos>=500 && pontos<=999)
    {
        salario+=300;   

        printf("O seu salario com acrescimo de 300 reais e: %.2f",salario);
    }

    else{
        salario+=500;

        printf("O seu salario com acrescimo de 500 reais e: %.2f",salario);
    }
    
    
    

}