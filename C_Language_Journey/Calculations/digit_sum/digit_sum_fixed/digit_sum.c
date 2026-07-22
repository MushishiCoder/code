#include<stdio.h>

int main(){
    int  num=0,sum=0;
    printf("输入一个三位整数:");
    scanf("%d",&num);
    int a=0,b=0,c=0;
    a=num/100;                                  //计算百位
    b=(num%100)/10;                             //计算十位
    c=num%10;                                   //计算个位
    printf("这个整数的百位为:%-5d十位为:%-5d个位为:%-5d\n",a,b,c);
    sum=a+b+c;
    printf("这个三位正整数的各位数字之和为:%d\n",sum);
    return 0;
}