#include<stdio.h>

int main(void){
    double a[5]={2,4,6,8,10};
    double *p,*q;

    p=&a[0];
    q=&a[4];

    for(;p<=q;p++){                 //for(初始化,条件判断,步进)该循环不需要初始化，所以说不用写
        printf("%.0f ",*p);
    }

    putchar('\n');

    return 0;
}