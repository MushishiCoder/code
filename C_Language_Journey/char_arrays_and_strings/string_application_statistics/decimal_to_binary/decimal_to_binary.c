#include<stdio.h>
#include<string.h>

#define LEN 100

void DToB(int n,char str[]);

int main(void){
    int n;
    char str[LEN];

    printf("请输入一个十进制整数:");
    scanf("%d",&n);
    
    DToB(n,str);

    printf("这个十进制整数的二进制为:%s\n",str);

    return 0;
}

void DToB(int n,char str[]){
    int len=0;

    if(n==0){
        str[0]='0';
        str[1]='\0';
    }
    
    while(n>0){
        str[len++]=n%2+'0';
        /*把余数存入字符串，然后自增。
        因额外i输入和输出都是int类型，而字符串是char类型，
        字符串的输入输出要以ASCII码作为媒介，把数字转化成字符，
        所以说需要加上'0'来转换成对应的ASCII码，
        同理，数组作为int类型，所以说不需要进行转换。*/
        
        n=n/2;                                      //更新n
    }

    str[len]='\0';

    strrev(str);                                    //反转str，因为读二进制是从上到下
}