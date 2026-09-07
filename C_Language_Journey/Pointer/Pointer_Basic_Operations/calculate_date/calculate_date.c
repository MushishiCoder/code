#include<stdio.h>

void GetData(int *ptrYear,int *ptrYeaDay);                          //将日期和天数传入指针
void GetMonthDay(int year,int yeaday,int *ptrMonth,int *ptrDay);    //判断月份和日期
void Dispdata(int year,int month,int day);                          //负责打印最后结果

int main(void){
    int year,yeaday,month,day;

    printf("请输入年份和天数:");
    GetData(&year,&yeaday);

    GetMonthDay(year,yeaday,&month,&day);

    printf("\n现在是:");
    Dispdata(year,month,day);

    return 0;
}

void GetData(int *ptrYear,int *ptrYeaDay){
    scanf("%d %d",ptrYear,ptrYeaDay);                               //ptrYear,ptrYeaDay就是指针变量，里面存放的就是地址，所以前面不用加&
}

void GetMonthDay(int year,int yeaday,int *ptrMonth,int *ptrDay){
    int k;
    int tab[2][13]={                                                //通过二维数组构建月份表
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31}
    };

    int leap=(year%4==0&&year%100!=0)||(year%400==0);               //int leap后面的语句是逻辑运算，只返回0和1，因此不需要再写if语句

    for(k=1;yeaday>tab[leap][k];k++){
        yeaday=yeaday-tab[leap][k];
    };

    *ptrMonth=k;                                                    //将月份和日期存入这个指针所指向的内存
    *ptrDay=yeaday;
}

void Dispdata(int year,int month,int day){
    printf("%d--%d--%d\n",year,month,day);
}