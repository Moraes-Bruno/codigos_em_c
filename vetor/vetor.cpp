#include <stdio.h>

int main(){
        float medias[5],mediageral=0;
        for(int i=0;i<5;i++){
            printf("\n Entre com a media: ");
            scanf("%f",&medias[i]);
            mediageral = mediageral +medias[i];
        }

        for(int i=0;i<5;i++){
            printf("\n Media do aluno i%: %.2f",i,medias[i]);
        }

        printf("\n media geral da sala %.2f",mediageral/5);

}