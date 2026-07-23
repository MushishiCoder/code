#include<stdio.h>

int main(){
    int n,len;
    n=0,len=0;
    printf("请输入一个整数:");
    scanf("%d",&n);
    if(n==0){
        len=1;
    }else{
        while(n>0){
            n/=10;
            len++;
        }
    }
    printf("这个整数的位数为:%d\n",len);
    return 0;
}