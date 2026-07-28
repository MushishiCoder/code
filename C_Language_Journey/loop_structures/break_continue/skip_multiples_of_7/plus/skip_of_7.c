#include<stdio.h>

int main(){
    int i;
    for(i=1;i<=100;i++){
        if(i%7==0){
            continue;
        }if(i%10==7){
            continue;
        }if((i/10)%10==7){
            continue;
        }
        printf("所有不为7的倍数以及不包含7的正整数为:%d\n",i);
    }
    return 0;
}