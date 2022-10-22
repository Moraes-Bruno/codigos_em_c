#include <stdio.h>

float main(){
    float salario;
    int pontos;
    for (int i=0;i<20;i++)
    {

    printf("\n%i\n",i+1);
    
    printf("\nDigite os seu salario: ");
    scanf("%f",&salario);

    printf("\nDigite os seus pontos: ");
    scanf("%i",&pontos);

    if (pontos>=1 && pontos <=99)
    {
        salario+=25;

        printf("\nO seu salario com um acrescimo de 25 reais e: %.2f",salario);
    }
    else if (pontos>=100 & pontos<=499 )
    {
        salario+=100;

        printf("\nO seu salario com acescimo de 100 reais e: %.2f",salario);
    }

    else if (pontos>=500 && pontos<=999)
    {
        salario+=300;   

        printf("\nO seu salario com acrescimo de 300 reais e: %.2f",salario);
    }

    else{
        salario+=500;

        printf("\nO seu salario com acrescimo de 500 reais e: %.2f",salario);
    }
    }
    
    
    

}