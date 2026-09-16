#include<stdio.h>

typedef struct{
    int year;
    int month;
    int day;
}date;

void SetDate(date *p);                      //这里传递了指针变量，通过地址间接修改结构体，方便快捷

int main(void){
    date d;

    SetDate(&d);

    printf("%d-%d-%d",d.year,d.month,d.day);

    return 0;
}

void SetDate(date *p){
    p->year=2007;
    p->month=10;
    p->day=19;
}