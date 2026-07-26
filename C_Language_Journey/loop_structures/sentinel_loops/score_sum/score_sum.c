#include<stdio.h>

int main(){
    float score=0,sum=0;
    printf("输入这些学生的成绩:");
    scanf("%f",&score);
    while(score>=0){
        sum+=score;
        scanf("%f",&score);
    }
    printf("这些学生的总成绩为:%.2f",sum);
    return 0;
}