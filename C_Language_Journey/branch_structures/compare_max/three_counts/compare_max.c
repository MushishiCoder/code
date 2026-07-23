#include<stdio.h>

int main(){
    int a,b,c,max;
    a=0,b=0,c=0,max=0;
    printf("输入三个整数:");
    scanf("%d %d %d",&a,&b,&c);
    max=a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    printf("这三个整数的最大值为:%d",max);
    return 0;
}