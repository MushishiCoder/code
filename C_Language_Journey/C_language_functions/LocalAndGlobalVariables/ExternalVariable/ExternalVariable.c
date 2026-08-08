#include<stdio.h>
void swap();
int a,b;                                        //外部变量：它被定义在所有函数体之外，作用域是从它定义的那一行开始，一直到整个程序所在文件的结束。
int main(){
    a=5,b=3;

    swap();
    printf("在main函数中:a=%d,b=%d\n",a,b);

    return 0;
}

void swap(){
    int t;

    t=a;
    a=b;
    b=t;

    printf("在swap函数中:a=%d,b=%d\n",a,b);
}