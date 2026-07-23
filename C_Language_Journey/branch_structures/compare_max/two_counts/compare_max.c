#include<stdio.h>

int main(){
    int a=0,b=0;
    printf("输入两个整数:");
    scanf("%d %d",&a,&b);
    int max=0;
    if(a>b){
        max=a;
    }else{
        max=b;
    }
    printf("这两个整数的最大值为:%d\n",max);
    return 0;
}