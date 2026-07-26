#include<stdio.h>

int main(){
    int n=0,i;
    long long int fact;                     //声明fact的类型，相当于__int64,64位整型
    fact=1;
    printf("输入一个整数n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d",i);
        fact*=i;
        printf("%10lld\n",fact);
    }
    return 0;
}