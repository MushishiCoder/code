#include<stdio.h>

int main(){
    int num=0,sum=0;
    printf("输入一个正整数:");
    scanf("%d",&num);
    int t=num;
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    printf("%d的各位数字之和为:%d\n",t,sum);
    return 0;
}