#include<stdio.h>
#include<string.h>                                  //引用strlen时要用到

int main(){
    int i,count=0;
    char str[81];

    printf("请输入一行字符串:");
    fgets(str,81,stdin);

    int len=strlen(str);
    if(len>0&&str[len-1]=='\n'){
        str[len-1]='\0';                            //要去掉换行符\n，当字符串末尾是空格时，会多加一次count
    }

    for(i=0;str[i]!='\0';i++){
        if(str[i]!=' '&&str[i+1]==' '){             //第i个不是空格，第i+1是空格，意味着一个字母出现，但是无法判断末尾的字母，需要单独讨论
            count++;
        }
    }

    len=strlen(str);                                //重新计算去掉换行符\n后的长度
    if(len>0&&str[len-1]!=' '){
        count++;
    }

    printf("该字符串的单词个数为:%d\n",count);

    return 0;
}