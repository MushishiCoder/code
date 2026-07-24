#include<stdio.h>

int main(){
    char op;
    double a,b;
    printf("请输入两个数字:");
    scanf("%lf %lf",&a,&b);
    printf("请输入一个字符:");
    getchar();                          //缓冲区的问题:吸收上面scanf留下来的\n回车符，涉及输入字符时要注意这一点。1.用getchar()吸收 2.scanf( "c")在""c"前面加空格
    op=getchar();
    switch(op){
        case '+':printf("%.2f\n",a+b);
        break;
        case '-':printf("%.2f\n",a-b);
        break;
        case '*':printf("%.2f\n",a*b);
        break;
        case '/':printf("%.2f\n",a/b);
        break;
        default: printf("运算符不正确\n");
        break;
    }
    return 0;
}