#include<stdio.h>\

int main(){
    int a=0,b=0;
    printf("请输入两个整数:");
    scanf("%d %d",&a,&b);
    int max=0;
    max=(a>b)?a:b;
    printf("这两个整数的最大值为:%d",max);
    return 0;
} 