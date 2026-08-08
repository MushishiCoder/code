#include<stdio.h>
#define N 10                            //全局常量/宏定义

int main(){
    int a[N];
    int i,n;
    printf("请输入元素个数:");
    scanf("%d",&n);
    printf("请输入%d个整数:",n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("逆序输出:\n");

    for(i=n-1;i>=0;i--){
        printf("%-4d",a[i]);
    }

    putchar('\n');

    return 0;
}