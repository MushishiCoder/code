#include<stdio.h>
void swap(int a,int b);

int main(){
    int a=0,b=0;

    printf("请输入两个数字:");
    scanf("%d %d",&a,&b);

    swap(a,b);
    printf("主函数里面a和b的值分别为:%d %d\n",a,b);
    /*在main函数里定义的a和b是实参（实际参数），它们占有一块独立的内存空间,
    当执行swap(a, b); 时C语言只是把a和b里面存的数值复制了一份，传给了swap函数里的形参a和b*/

    return 0;
}

void swap(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;

    printf("swap函数里面的a和b的值分别为:%d %d\n",a,b);
}