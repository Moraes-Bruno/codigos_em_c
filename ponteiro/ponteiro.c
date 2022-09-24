#include <stdio.h>
#include <stdlib.h>


void alteravalor(int *px,int *py){

    *px=*px+10;
    *py=*py+10;

}




int main(){
    int x = 4;
    int y = 7;
    printf("\n%i,%i",x,y);

    alteravalor(&x,&y);

    printf("\nO primeiro é %d, o segundo é %d.",x,y);

    


}
