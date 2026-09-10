#include<stdio.h>

int main(void){
    int x=10;
    int y=20;

    int *p1=&x;                     //数据和方向都可变
    const int *p2=&x;               //数据不可变，方向可变
    int *const p3=&x;               //数据可变，方向不可变
    int const *const p4=&x;         //数据和方向均不可变
    
    *p1=15;
    p1=&y;

    //*p2=15;
    p2=&y;

    *p3=15;
    //p3=&y;

    //*p4=15;
    //p4=&y;

    printf("测试顺利通过!\n");

    return 0;
}