#include <stdio.h>

void calmedia(float n1,float n2){
    float media = 0;
    media = (n1+n2)/2;
    printf("A sua media é: %.2f",media);

}



int main(){
    float n1,n2;

    printf("Digite a sua primeira nota: ");
    scanf("%f",&n1);
    printf("Digite sua segunda nota: ");
    scanf("%f",&n2);

    calmedia(n1,n2);

}