#include<stdio.h>
#include<string.h>

#define LEN 100

int main(void){
    int n;
    char str[LEN];
    char *str1;                                     //定义字符指针，用于指向截取的目标子串位置
    size_t len;

    printf("请输入一个字符串:");
    if(fgets(str,sizeof(str),stdin)!=NULL){
        str[strcspn(str,"\n")]='\0';
        len=strlen(str);                            //不要直接写len--，防止是空字符串时出现错误

       if(len>=3){                                  //防止长度小于3时导致向前越界或算术下溢
        str1=str+len-3;

        puts(str1);

        putchar('\n');
       }
       else{
        printf("这个字符串太短了\n");
       }
    }

    return 0;
}