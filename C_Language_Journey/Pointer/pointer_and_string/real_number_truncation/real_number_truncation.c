#include<stdio.h>
#include<string.h>

#define LEN 120

int main(void){
    char str[LEN];
    char *p=str;
    char *q;                                        //指针p指向小数点的地址

    printf("请输入该数字:");
    if(fgets(str,sizeof(str),stdin)!=NULL){
        str[strcspn(str,"\n")]='\0';

        while(*p=='0'&&*(p+1)!='0'&&*(p+1)!='.'){
            p++;
        }

        q=strchr(str,'.');                          //利用strchr查找小数点位置

        if(q!=NULL){
            *q='\0';                                //将小数点变为'\0'
        }

        printf("截断后的数为:");
        puts(p);
    }

    return 0;
}