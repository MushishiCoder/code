#include<stdio.h>

typedef struct{
    int year;
    int month;
    int day;
}Date;

Date InputDate(void);                   //返回一个结构体类型:Date为结构体类型，实际上相当于int InputDate(void)

int main(void){
    Date today;
    today=InputDate();

    printf("%d-%d-%d",today.year,today.month,today.day);

    return 0;
}

Date InputDate(void){
    Date d;

    printf("请输入年月日:");
    scanf("%d %d %d",&d.year,&d.month,&d.day);

    return d;
}