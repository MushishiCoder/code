#include<stdio.h>

int main(void){
    double a[4]={1.1,2.2,3.1,4.5};
    double *p;

    p=&a[0];

    printf("p中所储存的地址为:%p\n",p);
    printf("p所指的变量的值为:%.2f\n",*p);

    p+=1;                                       //指针变量加1，指的是地址向后跳8个字节（double*占位为8个字节）注意：数组和指针变量类型需匹配！！！！

    printf("p增1后:\n");
    printf("p中所储存的地址为:%p\n",p);
    printf("p所指的变量的值为:%.2f\n",*p);

    return 0;
}