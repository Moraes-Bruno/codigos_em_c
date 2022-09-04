#include <stdio.h>
//while:teste no inicio.
//do:teste no final.
int main(){
    float n1,n2,media,mediageral = 0;
    for (int x=1;x<=6;x++){
        printf("\nEntre com a nota1: ");
        scanf("%f",&n1);

        printf("\nEntre com a nota 2: ");
        scanf("%f",&n2);

        media = (n1+n2)/2;

        if(media<6){
            printf("\n aprovado");

        }

        else{
            printf("Reprovado");
        }

        printf("Sua media foi: %.2f",media);
        mediageral = mediageral+media;

    }

    printf("A media geral da sala foi: %.2f",mediageral/6); 
}