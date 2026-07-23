#include<stdio.h>

int main(){
    int a=0,b=0,t=0;
    printf("输入两个整数:");
    scanf("%d %d",&a,&b);
    if(a>b){
        t=a;
        a=b;
        b=t;
    }
    printf("两个数的值分别为:%d %d",a,b);
    return 0;
}