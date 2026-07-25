#include<stdio.h>

int main(){
    int i,n=0,sum=0;
    printf("请输入该数列整数的个数:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("这个数列的和为:%d\n",sum);
    return 0;
} 