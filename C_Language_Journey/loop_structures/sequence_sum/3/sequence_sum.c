#include<stdio.h>

int main(){
    int i,n=0;
    float sum=0;
    printf("输入该数列的项数:");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i+=2){
        sum+=1.0/i;
    }
    printf("这个数列的和为:%.3f",sum);
    return 0;
}