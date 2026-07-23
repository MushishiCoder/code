#include<stdio.h>

int main(){
    int month=0,year=0;
    printf("请输入一个年份和月份:");
    scanf("%d %d",&month,&year);
    switch(month){
        case 4:
        case 6:
        case 9:
        case 11:printf("这一月有30天");
        break;
        case 2:if((year%4==0&&year%100!=0)||year%400==0){
            printf("这一月有28天");
        }else{
            printf("这一月有29天");
        }
        break;
        default:printf("这一月有31天"); 
    }
    return 0;
}