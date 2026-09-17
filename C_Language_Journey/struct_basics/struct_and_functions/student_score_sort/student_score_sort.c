#include<stdio.h>

#define N 100

typedef struct{
    char ID[16];
    char name[16];
    char sex;
    float score;
}STUDENT;

void InputData(STUDENT *p,int n);
void Sort(STUDENT *p,int n);
void OutputData(STUDENT *p,int n);

int main(void){
    int n;
    STUDENT stu[100];

    printf("请输入学生的个数:");
    scanf("%d",&n);

    printf("请输入n个学生的信息:\n");
    InputData(stu,n);

    Sort(stu,n);

    printf("学生按照得分从大到小排序为:\n");
    OutputData(stu,n);

    putchar('\n');

    return 0;
}

void InputData(STUDENT *p,int n){
    int i;

    for(i=0;i<n;i++){
        scanf("%s",(p+i)->ID);
        scanf("%s",(p+i)->name);
        scanf(" %c",&(p+i)->sex);                               //基础类型需要加&取地址（前面的空格用于吃掉缓冲区回车）
        scanf("%f",&(p+i)->score);
    }
}

void Sort(STUDENT *p,int n){
    int i,j;
    STUDENT temp;                                               //用于整体交换结构体的临时变量

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if((p+i)->score<(p+j)->score){
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
}

void OutputData(STUDENT *p,int n){
     int i;

     for(i=0;i<n;i++){                                          //依次通过偏移指针访问并打印每个成员
        printf("学号:%s 姓名:%s 性别:%c 得分:%.2f",(p+i)->ID,(p+i)->name,(p+i)->sex,(p+i)->score);

        putchar('\n');
     }
}