#include<stdio.h>

int main(){
    int digit=0,n=0;
    printf("输入一个整数:");
    scanf("%d",&n);
    if(n==0){
        digit=1;
    }else{
        while(n!=0){
            n/=10;
            digit++;
        }
    }
    printf("这个整数的位数为:%d",digit);
    return 0;
}