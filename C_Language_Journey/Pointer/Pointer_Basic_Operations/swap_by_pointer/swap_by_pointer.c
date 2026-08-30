#include<stdio.h>

void swap(int* xptr,int* yptr);     //函数声明，以两个整型指针作为参数

int main(void){
    int a=3,b=5;

    swap(&a,&b);                    //传入两个地址

    printf("a=%d b=%d\n",a,b);

    return 0;
}

void swap(int* xptr,int* yptr){
    int t;

    t=*xptr;
    *xptr=*yptr;
    *yptr=t;
}