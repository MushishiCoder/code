#include<stdio.h>

#define N 50

int main(){
    int i;
    char ch;
    int a[N]={0};                                     // 定义一个大小为 50 的整型数组，并将所有元素初始化为 0，用于记录每个字母出现的次数  

    printf("请输入一行，以回车结束:\n");
    while((ch=getchar())!='\n'){                      // 使用 while 循环逐个字符读取输入，直到遇到换行符（回车）停止
        if(ch>='A'&&ch<='Z'){
            ch+=32;                                   // 将其转换为对应的小写字母（ASCII 码值相差 32）
        }

        if(ch>='a'&&ch<='z'){
            a[ch-'a']++;                              // 利用字符减去 'a' 的偏移量作为数组下标，对应计数器自增1
        }
    }

    for(i=0;i<26;i++){
        printf("count of %c is %d\n",i+'a',a[i]);     // 利用 i + 'a' 还原回对应的字符，并打印出该字母出现的次数
    }

    return 0;
}