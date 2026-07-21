#include<stdio.h>\

int main(){
    int a,b,sum;
    a=0,b=0,sum=0;
    printf("输入两个整数:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("%d和%d的和为:%d\n",a,b,sum);
    return 0;
}