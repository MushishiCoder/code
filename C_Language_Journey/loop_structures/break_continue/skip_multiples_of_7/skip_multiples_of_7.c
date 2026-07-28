#include<stdio.h>

int main(){
    int i;
    for(i=1;i<=100;i++){
        if(i%7==0){
            continue;
        }
        printf("7的倍数为:%d\n",i);
    }
    return 0; 
}