#include<stdio.h>

int main(){
    int i,n=0,a=0,t=0;
    int sum=0;
    printf("请输入数字a:");
    scanf("%d",&a);
    printf("请输入数字n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        t=t*10+a;
        sum+=t;
    }
    printf("这个数列的和为:%d",sum);
    return 0;
}