#include<stdio.h>
#include<string.h>

#define LEN 100

void prt(int count,char ch);                        //声明辅助输出函数prt：用来处理“数字+字符”的打印格式

int main(void){
    int i,count=0;
    char str[LEN];
    size_t len;

    if(fgets(str,sizeof(str),stdin)!=NULL){
        len=strlen(str);
        if(len>0&&str[len-1]=='\n'){
            str[len-1]='\0';
            len--;
        }
    }

    char cur=str[0];                                //初始化“锚点”字符：将cur指向序列的第一个字符

    for(i=0;i<len;i++){
        if(str[i]==cur){
            count++;
        }
        else{
            prt(count,cur);
            cur=str[i];
            count=1;
        }
    }

    prt(count,cur);
    /*放到外面可以打印出来最后一组，
    比如说AAAC，循环到C时第一个if不成立，
    然后到else，先将3A打印出来，更新cur='C'，
    循环结束，在外面这个函数打印出来C*/

    return 0;
}

void prt(int count,char ch){
    if(count!=1){
        printf("%d",count);
    }

    putchar(ch);
}