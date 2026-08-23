#include<stdio.h>
#include<string.h>

int main(void){
    char str[10];
    int n,a,b,c;
    
    printf("请输入一个三位数:");
    if(fgets(str,sizeof(str),stdin)!=NULL){
    /*sizeof(str)计算该字符串的长度，
    NULL在底层的本质通常就是数字0（或者内存地址0x0），代表“不指向任何合法的内存空间”*/
        size_t len=strlen(str);
        if(len>0&&str[len-1]=='\n'){            //清除换行符
            str[len-1]='\0';
        }
    }

    sscanf(str,"%d",&n);                        //利用sscanf将整个字符串转为整型数字n
    sscanf(str,"%1d%1d%1d",&a,&b,&c);           //利用sscanf的%1d 格式化特性,提取出前三位的数字分别赋给a、b、c

    if(n==a*a*a+b*b*b+c*c*c){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
}