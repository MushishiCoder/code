#include<stdio.h>

typedef struct{
    int year;
    int month;
    int day;
}date;

void PrintfDate(date d);                        //这里传递了整个结构体，当结构体比较大时，有很大的缺点

int main(void){
    date d={2007,10,19};

    printf("这个日期为:");
    PrintfDate(d);

    return 0;
}

void PrintfDate(date d){
    printf("%d-%d-%d",d.year,d.month,d.day);
}