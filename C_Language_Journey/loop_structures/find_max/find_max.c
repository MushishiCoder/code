#include<stdio.h>

int main(){
    int i,n=0,number=0,max=0;
    printf("请输入整数的个数:");
    scanf("%d",&n);
    printf("请输入第一个整数:");
    scanf("%d",&number);
    max=number;                                             //将第一个数存储到max中，避免所有数小于0的情况。
    printf("请输入接下来的整数:");
    for(i=1;i<=n-1;i++){
        scanf("%d",&number);
        if(max<number){
            max=number;
        }
    }
    printf("这些整数的最大值为:%d",max);
    return 0;
}