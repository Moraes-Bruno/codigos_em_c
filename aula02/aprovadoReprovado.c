#include <stdio.h>

float main(){
    float media;
    int frequencia;

    printf("Digite a sua media: ");
    scanf("%f",&media);

    printf("Digite a sua frequencia: ");
    scanf("%i",&frequencia);

    if (media>=6 && frequencia>=75)
    {
        printf("Aprovado");
    }

    else if(media>=6 && frequencia<75){
        printf("Reprovado por frequencia");
    }

    else if(media<6 && frequencia >=75){
        printf("Reprovado por nota");
    }

    else{
        printf("Reprovado por nota e falta");
    }
}