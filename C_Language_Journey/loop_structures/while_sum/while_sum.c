#include<stdio.h>

int main(){
    int i=0,n=0,sum=0;
    printf("请输入10个整数:\n");
    while(i<10){
        scanf("%d",&n);
        sum+=n;
        i++;
    }
    printf("这10个整数的和为:%d\n",sum);
    return 0;
}