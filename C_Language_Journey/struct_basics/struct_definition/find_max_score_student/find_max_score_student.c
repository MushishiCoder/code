#include<stdio.h>

typedef struct student{
    char ID[16];
    char name[16];
    char sex;
    float score;
}STUDENT;

int main(void){
    STUDENT stu,first;
    first.score=-1.0f;
    int i,n;

    printf("请输入学生人数:");
    scanf("%d",&n);

    printf("请输入学生信息:\n");
    for(i=0;i<n;i++){
        scanf("%s",stu.ID);
        scanf("%s",stu.name);
        scanf(" %c",&stu.sex);              //注意:%前面加一个空格，用来自动吞掉前一个输入留下的回车符/空格，防止性别错乱
        scanf("%f",&stu.score);

        if(first.score<stu.score){
            first=stu;                      //结构体整体赋值：把stu的全套数据瞬间整体拷贝给first
        }
    }

    printf("最高分的学生信息如下:\n");
    printf("学号:%s\n",first.ID);
    printf("姓名:%s\n",first.name);
    printf("性别:%c\n",first.sex);
    printf("得分:%.2f\n",first.score);

    return 0;
}