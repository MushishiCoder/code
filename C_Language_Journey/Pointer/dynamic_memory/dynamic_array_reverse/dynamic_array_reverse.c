#include<stdio.h>
#include<stdlib.h>                      //包含动态内存分配(malloc/free)和exit的头文件

int main(void){
    int i,n;
    int *p;

    printf("请输入元素个数:");
    scanf("%d",&n);

    p=(int*)malloc(n*sizeof(int));      //动态申请内存“单价”(sizeof(int))*“数量”(n)字节

    if(p==NULL){                        //检查堆区内存是否分配成功
        printf("动态内存分配失败!\n");
        exit(1);                        //内存不足，紧急终止程序
        }

    printf("请输入%d个数:",n);
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }

    printf("逆序输出为:");
    for(i=n-1;i>=0;i--){
        printf("%d ",p[i]);
    }
    putchar('\n');

    free(p);                            //主动释放堆区内存，防止内存泄漏
    p=NULL;                             //释放后将指针置空，防止变成野指针

    return 0;
}