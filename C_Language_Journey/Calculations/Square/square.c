#include<stdio.h>
#include<math.h>//调用math.h库

int main(){
    double a,square;
    a=0,square=0;
    printf("输入一个数");
    scanf("%lf",&a);
    square=pow(a,2);//;利用pow来进行平方 
    printf("%lf的平方为%.3lf",a,square);
    return 0;
}