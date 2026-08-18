#include<stdio.h>

int main(){
    char ch;                                //定义字符变量，用于存储输入的英文字母
    int k;                                  //定义整型变量，用于存储加密的密钥(偏移量)

    printf("请输入一个字母和加密密钥:");
    scanf("%c %d",&ch,&k);
    ch=ch+k;
    /*将字符的 ASCII 码值加上密钥 k，实现向后加密
      注意:如果 ch + k 的结果超过了signed char的最大上限 127，这里会发生类型溢出！*/

    if(ch>'z'){
        ch-=26;
    }
    /*尝试判断加密后的字符是否超出了小写字母 'z' 的范围
      如果前面发生了溢出，这里的 ch 变成负数，条件会失效*/

    printf("%c\n",ch);

    return 0;
}