#include <stdio.h>

float calculo(float hora,float valhora,float dias){
    float salario;

    salario = (hora*valhora)*dias;

    return(salario);
}






float main(){
    float hora,valhora,dias,salario;

    printf("Por quantas horas vc trabalha? ");
    scanf("%f",&hora);

    printf("Quanto voce é pago por hora? ");
    scanf("%f",&valhora);

    printf("Por quantos dias vc trabalha? ");
    scanf("%2f",&dias);

    salario = calculo(hora,valhora,dias);

    printf("O seu salario é:  %.2f",salario);


}