#include<stdio.h>
#include<ctype.h>

int main(void){
    int i,count=0;
    char str[100];

    printf("请输入一组字符串:");
    fgets(str,100,stdin);

    for(i=0;str[i]!='\0';i++){
        if(isalpha(str[i])&&isalpha(str[i+1])==0){
            count++;
        }
    }

    printf("该字符串的单词个数为:%d\n",count);

    return 0;
}