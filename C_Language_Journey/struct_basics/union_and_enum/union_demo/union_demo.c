#include<stdio.h>


union share{
    float a;
    int b;
    double c;
}u;                                                                                                                 //声明一个变量u

int main(void){
    u.c=125.5;                                                                                                      //c占8个字节
    u.b=10;                                                                                                         //b占4个字节
    u.a=1000.5f;                                                                                                    //a占4个字节

    printf("a=%.2f,b=%d,c=%.2lf\n",u.a,u.b,u.c);                                                                    //输出数据
    printf("\nu size=%d\na size=%d\nb size=%d\nc size=%d\n",sizeof(u),sizeof(u.a),sizeof(u.b),sizeof(u.c));         //输出内存长度

    return 0;
}