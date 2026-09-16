#include<stdio.h>

typedef struct{
    char ID[16];
    char name[16];
    char sex;
    float score;
}student;

int main(void){
    student stu[3]={
        {"10086","A-RPG大手子",'M',98},
        {"10087","J-RPG大手子",'W',96},
        {"10088","C-RPG大手子",'M',94}
    };

    student *p=stu;

    for(;p<&stu[3];p++){
        printf("address of p is:%p\n",(void*)p);
        /*使用%p和(void*)来进行规范输出
        %p为专门的地址占位符，用来打印内存地址的格式化占位符
        (void*)强制类型转换。printf的%p占位符极为严格，要求收到的参数类型必须是void*（通用指针类型）*/
        
        printf("学号:%s 姓名:%s 性别:%c 得分:%.2f",p->ID,p->name,p->sex,p->score);

        putchar('\n'); 
    }

    return 0;
}