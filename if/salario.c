#include <stdio.h>

 int main(){
    float salario;
    int pontos;

    printf("Digite o seu salario: ");
    scanf("%f",&salario);

    printf("Digite a sua pontuação: ");
    scanf("%i",&pontos);

    if(pontos >=1 && pontos<=99){
        salario = salario+25;
        printf("O seu salario com bonus é: %.2f",salario);
    }

    else if(pontos>=100 && pontos <=499){
        salario = salario+100;
        printf("O seu salario com bonus é: %.2f",salario);
    }

    else if(pontos >=500 && pontos<=999){
        salario = salario+300;
        printf("O seu salario com bonus é: %.2f",salario);
        
    }

    else if(pontos>=1000){
        salario = salario+500;
        printf("O seu salario com bonus é: %.2f",salario);

    }
   
}