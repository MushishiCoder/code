#include<stdio.h>
#include<string.h>

#define LEN 40

int BToD(const char str[]);                     //函数声明，将二进制转化位十进制

int main(void){
    int a,b,c,t;
    char str1[LEN],str2[LEN],str3[LEN];

    printf("请输入三个二进制数:");
    scanf("%s%s%s",str1,str2,str3);             //因为需要分别输入三个独立的二进制数，所以说不需要使用fgets，scanf也不会将换行符读入

    a=BToD(str1);
    b=BToD(str2);
    c=BToD(str3);

    if(a>b){
        t=a;
        a=b;
        b=t;
    }
    if(a>c){
        t=a;
        a=c;
        c=t;
    }
    if(b>c){
        t=b;
        b=c;
        c=t;
    }

    printf("这三个数从小到大分别为:%d %d %d",a,b,c);

    return 0;
}

int BToD(const char str[]){
    int i,d=0;
    size_t len=strlen(str);

    for(i=0;i<len;i++){
        d=d*2+(str[i]-'0');
    }

    return d;
}