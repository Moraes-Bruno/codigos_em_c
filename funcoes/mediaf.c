#include <stdio.h>



float calmedia(float n1,float n2){
     float media;
    media = (n1+n2)/2;

    return(media);
}

void exmedia(float media){
    printf("A sua media é: %.2f",media);
}

int main(){
    float n1,n2,media;

    printf("Digite a sua primeira nota: ");
    scanf("%f",&n1);
    printf("Digite sua segunda nota: ");
    scanf("%f",&n2);

    media = calmedia(n1,n2);
    exmedia(media);

    

}