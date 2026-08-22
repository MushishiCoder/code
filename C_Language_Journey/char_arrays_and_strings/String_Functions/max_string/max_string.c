#include<stdio.h>
#include<string.h>

#define LEN 81

void updateMax(const char str[],char Max_Str[]);        //const表明这个字符串数组是一个常量，不可被更改

int main(void){
    int i,n;
    char str[LEN];
    char Max_Str[LEN]="";                               //初始化为空字符串

    printf("请输入字符串的个数:");
    scanf("%d",&n);
    getchar();                                          //吃掉换行符

    for(i=1;i<=n;i++){
        fgets(str,LEN,stdin);

        int len=strlen(str);
        if(len>0&&str[len-1]=='\n'){
            str[len-1]='\0';                            //去掉字符串结尾输入的换行符，保证输出没有换行符
        }

        updateMax(str,Max_Str);
    }

    printf("最大字符串为:%s\n",Max_Str);

    return 0;
}

void updateMax(const char str[],char Max_Str[]){
    if(strcmp(str,Max_Str)>0){                          //字符串比较函数，当str比Max_Str大时
        strcpy(Max_Str,str);                            //字符串复制函数，把后面字符串复制到前面去，不是交换！！！
    }
}