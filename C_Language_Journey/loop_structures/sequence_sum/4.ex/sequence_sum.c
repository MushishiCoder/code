#include<stdio.h>

int main(){
    int i,n=0,deno=1;               //deno指的是分母
    float sum=0,sign=1;
    printf("请输入该数列的项数:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=sign*1.0/deno;
        sign=-sign;
        deno+=2;
    }
    printf("该数列的和为:%.2f",sum);
    return 0;
}