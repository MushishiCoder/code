#include<stdio.h>

#define PI 3.14159                  //定义圆周率

int main(){
    float r=0,h=0,v=0;
    printf("圆柱体的半径和高为:");
    scanf("%f %f",&r,&h);
    v=r*r*h*PI;
    printf("圆柱体的体积为:%.3f\n",v);
    return 0;

}