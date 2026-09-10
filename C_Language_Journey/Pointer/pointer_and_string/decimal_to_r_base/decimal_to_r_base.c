#include<stdio.h>

void DToR(int num,char str[],int a);        //进制转化
void strrev_custom(char str[]);             //字符串的反转，不要用strrev，这个不是标准的C语言库函数的工具

int main(void){
    int num=255;
    char str[100];

    printf("十进制转化为二进制:");
    DToR(num,str,2);

    printf("十进制转化为八进制:");
    DToR(num,str,8);

    printf("十进制转化为十六进制:");
    DToR(num,str,16);

    return 0;
}

void DToR(int num,char str[],int a){
    int k=0,d;

    if(num==0){
        str[0]='0';
        str[1]='\0';
    }

    while(num!=0){
        d=num%a;
        str[k]="0123456789abcdef"[d];   //查找表

        k++;
        num=num/a;
    }
    str[k]='\0';

    strrev_custom(str);                 //将字符串进行逆置

    printf("%s\n",str);
}

void strrev_custom(char str[]){
    int i=0,j=0;

    while(str[j]=='\0'){
        j++;
    }
    j--;

    while(i<j){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;

        i++;
        j--;
    }
}