#include<stdio.h>

int main(){
    int year=0;
    printf("输入一个年份:");
    scanf("%d",&year);
    if((year%4==0&&year%100!=0)||year%400==0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0; 
}