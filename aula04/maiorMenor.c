#include <stdio.h>

float main(){
    int vetor[10];
    int soma;
    int maior;
    int menor;

    for(int i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%i",&vetor[i]);

        soma = vetor[i]+soma;

        if(vetor[i]>maior){
            maior = vetor[i];
        }

        else{
            NULL;
        }

        if(vetor[i]<menor){
            menor = vetor[i];
        }
        else{
            NULL;
        }
    }

    printf("\nA soma dos valores sao %i\n",soma);
    printf("\nO maior numero e: %i\n",maior);
    printf("\nO menor numero e: %i\n",menor);
}