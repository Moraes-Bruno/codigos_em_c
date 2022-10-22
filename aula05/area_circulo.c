#include <stdio.h>

float area(float raio){
    float res;

    res = 3.14*(raio*raio);

    return(res);
}




int main(){
    float raio,res;

    printf("Qual é o raio da circunferencia?: ");
    scanf("%f",&raio);

    res = area(raio);

    printf("A circunferencia é: %.2f",res);

    
}