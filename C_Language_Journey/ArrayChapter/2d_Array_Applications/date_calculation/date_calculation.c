#include<stdio.h>

int GetYearDay(int year,int month,int day);                 //计算天数
int Isleap(int year);                                       //判断闰年

int main(){
    int year,month,day;

    printf("请输入年月日:");
    scanf("%d %d %d",&year,&month,&day);

    printf("是该年的%d天",GetYearDay(year,month,day));

    return 0;
}

int GetYearDay(int year,int month,int day){
    int k,leap;
    int tab[2][13]={
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31}
    };
    /*定义二维数组，tab[0][]为平年，tab[1][]为闰年
      在Isleap函数中正好返回0和1
      tab[][1]=0是为了让tab[][1]~tab[][12]正好和月份1~12对应，
      这样就不用month-1*/

    leap=Isleap(year);                                         //调用Isleap函数，闰年返回1，平年返回0

    for(k=1;k<month;k++){
        day+=tab[leap][k];
    }

    return day;
}

int Isleap(int year){
    if((year%4==0&&year%100!=0)||year%400==0){                  //闰年
        return 1;
    }
    else{                                                       //平年
        return 0;
    }
    /*该函数可直接写为：
    return ((year%4==0&&year%100!=0)||year%400==0)*/
}