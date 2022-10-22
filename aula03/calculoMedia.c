#include <stdio.h>

float main(){
    float n1,n2,media,geral;

    for(int i=0;i<10;i++){
        printf("\nDigite a sua nota1: ");
        scanf("%f",&n1);

        printf("\nDigite a sua nota2: ");
        scanf("%f",&n2);

        media = (n1+n2)/2;

        printf("\nA sua media e: %.2f",media);

        geral=geral+media;
    }

    printf("\nA media geral da sala e: %.2f",geral/10);
}