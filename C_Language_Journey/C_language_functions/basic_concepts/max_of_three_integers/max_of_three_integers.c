#include<stdio.h>
int max(int a,int b);                       //函数原型声明

int main(){
    int a,b,c,m;

    printf("输入三个整数:");
    scanf("%d %d %d",&a,&b,&c);

    m=max(a,b);                             //函数调用
    m=max(m,c);

    printf("%d\n",m);
    return 0;
}

int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}