#include<stdio.h>

int main(){
    int a,b,c,max,min;
    a-0,b=0,c=0,max=0,min=0;
    printf("输入三个整数:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        max=a,min=b;
    }else{
        max=b,min=a;
    }
    if(c>max){
        max=c;
    }
    if(c<min){
        min=c;
    }
    printf("最大值为%d,最小值为%d",max,min);
    return 0;
}