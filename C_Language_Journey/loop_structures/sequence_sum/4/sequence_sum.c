#include<stdio.h>

int main(){
    int i,n=0,sign=1;
    float sum=0;
    printf("请输入该数列的项数:");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i+=2){
        sum+=sign*1.0/i;
        sign=-sign;
    }
    printf("这个数列的和为:%.2f",sum);
    return 0;
}