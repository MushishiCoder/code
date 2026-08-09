#include<stdio.h>
#define N 10

int main(){
    int i,j,t,n;
    int a[N];

    printf("请输入元素个数:");
    scanf("%d",&n);

    printf("请输入%d个元素:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //双重循环
    for(i=0;i<n;i++){                           //外层循环：依次确定每一个“擂主”的位置（从第 0 个一直到倒数第二个）
        for(j=i+1;j<n;j++){                     //内层循环：让当前擂主 a[i] 与其后面所有的元素 a[j] 依次进行比较
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    printf("排序后:\n");
    for(i=0;i<n;i++){
        printf("%-4d",a[i]);
    }

    putchar('\n');

    return 0;
}