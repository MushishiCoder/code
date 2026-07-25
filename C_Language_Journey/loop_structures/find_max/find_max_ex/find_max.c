#include<stdio.h>
#include<limits.h>                      //极限常量

int main(){
    int i,n=0,max,number=0;
    max=INT_MIN;                        //int类型的最小极限值
    printf("请输入整数类型的个数:");
    scanf("%d",&n);
    printf("请输入这些整数:");
    for(i=1;i<=n;i++){
        scanf("%d",&number);
        if(max<number){
            max=number;
        }
    }
    printf("这些整数的最大值为:%d\n",max);
    return 0;
}