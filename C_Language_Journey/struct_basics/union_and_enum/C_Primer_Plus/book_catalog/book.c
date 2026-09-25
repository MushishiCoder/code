#include<stdio.h>
#include<string.h>

char * s_gets(char *st,int n);

#define MAXTITL 41
#define MAXAUTL 31

struct book{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void){
    struct book library;

    printf("Please enter the book title:\n");
    s_gets(library.title,MAXTITL);
    printf("Please enter the author:\n");
    s_gets(library.author,MAXAUTL);
    printf("Please enter the value:\n");
    scanf("%f",&library.value);

    printf("%s by %s: $ %.2f\n",library.title,library.author,library.value);
    printf("%s:\"%s\"(%.2f)\n",library.author,library.title,library.value);
    printf("Done.\n");

    return 0;
}

char * s_gets(char *st,int n){
    char *ret_val;
    char *find;

    ret_val=fgets(st,n,stdin);              //fgets会返回该字符串首地址,如果没有输入则会返回NULL
    if(ret_val){
        find=strchr(st,'\n');               //strchr查找换行符，返回该字符地址

        if(find){
            *find='\0';
        }
        else{                               //如果输入上限是20但是你输入了100，后面的字符和换行符则会留在缓冲区
            while(getchar()!='\n'){         //在缓冲区内挨个字符进行吞掉，直到吞到换行符为止
                continue;
            }
        }
    }

    return ret_val;
}