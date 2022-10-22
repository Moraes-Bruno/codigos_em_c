#include <stdio.h>

float main(){
    int vetorA[5];
    int vetorB[5];
    int vetorC[5];

    for(int i=0;i<5;i++){
        printf("\nDigite um numero: ");
        scanf("%i",&vetorA[i]);

        printf("Digite outro numero: ");
        scanf("%i",&vetorB[i]);

        vetorC[i]=vetorA[i]+vetorB[i];

    }

    for(int i=0;i<5;i++){
         printf("\n%i",vetorC[i]);
    }

    

}