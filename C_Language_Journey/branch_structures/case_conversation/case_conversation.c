#include<stdio.h>

int main(){
    char ch;
    printf("输入一个字母:");
    ch=getchar();               //scnaf("%c",&  ch)也可以
    if(ch>='a'&&ch<='z'){
        ch-=32;
    }
    printf("这个字母的大写为:%c",ch);
    return 0;
}