#include <stdio.h>

float main(){
    int num=1;
    int res;

    for(int i=0;i<20;i++){
       printf("\n%iX%i= %i",num,num,num*num);
       num++;
    }
}