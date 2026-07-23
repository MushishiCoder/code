#include<stdio.h>
#include<math.h>

int main(){
    int n,len;
    n=0,len=0;
    printf("请输入一个整数:");
    scanf("%d",&n);
    len=(int)log10(n)+1;
    printf("该整数的位数为:%d\n",len);
    return 0;
}