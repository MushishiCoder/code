#include<stdio.h>

int main(){
    char ch;
    printf("请输入一个字符:");
    ch=getchar();
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
        printf("字母\n");
    }else if(ch>='0'&&ch<='9'){
        printf("数字\n");
    }else if(ch==' '||ch=='\n'){
        printf("分隔符\n");
    }else{
        printf("其他\n");
    }
    return 0;
}