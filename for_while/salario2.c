#include <stdio.h>

int main(){
     float salario;
    int pontos;

    for(int i=1;i<=20;i++){

    printf("\n%i",i);

    printf("\nDigite o seu salario: ");
    scanf("%f",&salario);

    printf("\nDigite a sua pontuação: ");
    scanf("%i",&pontos);

    if(pontos >=1 && pontos<=99){
        salario = salario+25;
        printf("\nO seu salario com bonus é: %.2f",salario);
    }

    else if(pontos>=100 && pontos <=499){
        salario = salario+100;
        printf("\nO seu salario com bonus é: %.2f",salario);
    }

    else if(pontos >=500 && pontos<=999){
        salario = salario+300;
        printf("\nO seu salario com bonus é: %.2f",salario);
        
    }

    else if(pontos>=1000){
        salario = salario+500;
        printf("\nO seu salario com bonus é: %.2f",salario);

    }

    }
}