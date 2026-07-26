#include<stdio.h>


int main(){
    int i,n=0,fact=1;
    printf("请输入整数n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d",i);
        fact*=i;
        printf("%4d\n",fact);
    }
    return 0;
}