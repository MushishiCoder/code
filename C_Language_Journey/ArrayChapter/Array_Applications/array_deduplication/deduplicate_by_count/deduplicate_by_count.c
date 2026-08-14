#include<stdio.h>

#define N 10000

void PrintIndex(int x[]);             //INDEX为数组的下标

int main(){
    int i,n,num;
    int a[N]={0};

    printf("请输入数组的个数:");
    scanf("%d",&n);

    printf("请输入%d个元素:",n);
    while(n--){                         //n--为先判断，再进行相减，--n是先相减再进行判断。用do-while时应改为--n
        scanf("%d",&num);
        a[num]++;                       //用a[num]记录num的出现次数
    }

    PrintIndex(a);

    return 0;
}

void PrintIndex(int x[]){
    int i;

    for(i=0;i<N ;i++){
        if(x[i]){
            printf("%-4d",i);
        }
    }

    putchar('\n');
}