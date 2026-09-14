#include<stdio.h>

struct date{                                                                                        //定义日期结构体
    int year;
    int month;
    int day;
};

struct students{                                                                                    //定义学生信息结构体
    char ID[16];        
    char name[16];
    char sex;
    struct date birthday;                                                                           //嵌套的子结构体变量
    float score;
};

int main(void){
    struct students stu={"2010001","J-RPG大手子",'M',{2007,10,18},98};
    /*使用大括号{}按照成员定义顺序进行整体初始化，嵌套结构体使用双层大括号
    注意：初始化列表的顺序必须与结构体图纸中的定义完全一致，
    嵌套的结构体（生日）需要用额外的一对大括号{2007,10,18}来单独初始化。*/

    printf("学号:%s\n",stu.ID);                                                                     //使用点运算符（.）逐个访问并输出结构体内部的成员
    printf("姓名:%s\n",stu.name);
    printf("生日:%d年%d月%d日\n",stu.birthday.year,stu.birthday.month,stu.birthday.day);
    printf("分数:%.2f\n",stu.score);

    return 0;
}