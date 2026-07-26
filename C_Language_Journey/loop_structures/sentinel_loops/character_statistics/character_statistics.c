#include<stdio.h>

int main(){
    int letter=0,digit=0,other=0;
    char ch;
    printf("请输入一串字符,以回车结束:");
    while((ch=getchar())!='\n'){                            //这一串字符以\n结尾，当字符=\n时，条件为假，跳出循环。
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
            letter++;
        }else if(ch>='0'&&ch<='9'){
            digit++;
        }else{
            other++;
        }
    }
    printf("该字符中字母,数字和其它的字符的数量分别为:letter=%ddigit=%dother=%d",letter,digit,other);
    return 0;
}