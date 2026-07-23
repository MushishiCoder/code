#include<stdio.h>

int main(){
    int a=0,b=0,c=0;
    printf("请输入三个整数:");
    scanf("%d %d %d",&a,&b,&c);
    int max=0;
    max=(a>b)?a:b;
    max=(c>max)?c:max;
    printf("三个整数的最大值为:%d\n",max);
} 