#include<stdio.h>

int main(void){
    double a[2];
    double *p,*q;

    p=&a[0];
    q=&a[1];

    printf("%d\n",(long long)q-(long long)p);       //地址相差的值
    /*使用的是64位操作系统，在64位系统下，一个内存地址（指针）占8个字节（64位）。
    (int)q，在大多数现代编译环境下，int类型只占4个字节（32位）。
    所以写成long lomg*/
    printf("%d\n",q-p);                             //代表相差的数组元素个数

    return 0;
}