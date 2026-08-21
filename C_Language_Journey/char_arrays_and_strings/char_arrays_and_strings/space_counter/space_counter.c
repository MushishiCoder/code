#include<stdio.h>

int main(){
    char str[81];                                       //定义一个字符串数组，最多读80个字符，最后一个給'\0'空字符
    int i,count=0;

    printf("请输入一行字符:");
    fgets(str,81,stdin);
    /*fgets早已替代gets,
    后者在现代C语言标准（C11及之后）中已经被彻底废弃并移除了,
    因为它存在严重的缓冲区溢出漏洞。
    参数含义:把读入的内容存入str最多读80个字符（留1个位置给'\0'）,来源是标准输入stdin*/

    for(i=0;str[i]!='\0';i++){                          //扫描整个数组，直到遇到字符串结束标志'\0'为止
        if(str[i]==' '){
            count++;
        }
    }

    printf("\n这个字符中空格的数量为:%d\n",count);

    return 0;
}
