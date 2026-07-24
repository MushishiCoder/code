#include<stdio.h>

int main(){
    int i=0,n=0,number=0,sum=0;
    printf("请输入整数的个数:");
    scanf("%d",&n);
    printf("请输入整数:");
    for(i=1;i<=n;i++){
        scanf("%d",&number);
        sum+=number;
    }
    printf("这些整数的和为:%d\n",sum);
    return 0;
}