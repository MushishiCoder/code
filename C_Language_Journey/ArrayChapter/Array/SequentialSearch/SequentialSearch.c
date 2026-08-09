#include<stdio.h>
#define N 10

int main(){
    int i,x;
    int a[N]={11,13,15,17,19,1,3,5,7,9};

    printf("请输入要查找的元素:");
    scanf("%d",&x);

    int flag=0;                                 //标志变量法

    for(i=0;i<N;i++){
        if(a[i]==x){
            flag=1;                             //循环只负责找和做标记
            break;
        }
    }

    if(flag==1){
        printf("%d\n",i);
    }else{
        printf("不存在!\n");
    }

    return 0;
}