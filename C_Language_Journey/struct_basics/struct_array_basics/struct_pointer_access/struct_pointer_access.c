#include<stdio.h>

typedef struct{
    char ID[16];
    char name[16];
    char sex;
    float score;
}point;

int main(void){
    point stu={"10086","J-RPG大手子",'M',98};
    point *p=&stu;

    printf("学号:%s  姓名:%s  性别:%c  得分:%.2f\n",stu.ID,stu.name,stu.sex,stu.score);         //通过结构体变量直接访问成员
    printf("学号:%s  姓名:%s  性别:%c  得分:%.2f\n",(*p).ID,(*p).name,(*p).sex,(*p).score);     //通过指针解引用来访问成员
    printf("学号:%s  姓名:%s  性别:%c  得分:%.2f\n",p->ID,p->name,p->sex,p->score);             //通过箭头运算符来访问成员

    return 0;
}