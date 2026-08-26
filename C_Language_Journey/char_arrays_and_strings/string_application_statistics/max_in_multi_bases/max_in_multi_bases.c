#include<stdio.h>
#include<string.h>

#define LEN 100

int KToD(const char str[],int k);                           //将字符串的k进制转化为十进制

int main(void){
    int i,d,n,k,max=0;
    char str[LEN];

    printf("请输入非负整数的个数:");
    scanf("%d",&n);

    printf("请输入%d个非负整数和它对应的进制数:\n",n);
    for(i=0;i<n;i++){
        scanf("%s%d",str,&k);                               //依次读入存入字符串的数字和它的进制
        d=KToD(str,k);

        if(max<d){
            max=d;
        }
    }

    printf("最大整数对应的十进制为:%d\n",max);

    return 0;
}

int KToD(const char str[],int k){
    int d=0,i;
    size_t len=strlen(str);

    for(i=0;i<len;i++){
        d=d*k+(str[i]-'0');
    }

    return d;
}