#include<stdio.h>

int main(){
    int i,n=0;
    float sum=0;
    printf("输入该数列的项数:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=1.0/i;                             //转换为浮点类型
    }
    printf("这个数列的和为:%.3f\n",sum);
}