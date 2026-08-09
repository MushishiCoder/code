#include<stdio.h>

#define N 10

int SumArr(int array[],int n);                  //数组名代表该数组的首地址，所以[]中写东西没用，后面int n表示需要读入的元素

int main(){
    int a[N];
    int i,n,sum;

    printf("请输入数组元素数量:");
    scanf("%d",&n);

    printf("请输入%d个元素:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

// 函数调用：将数组名 a（代表首地址）和实际元素个数 n 传给 SumArr 函数
    sum=SumArr(a,n);
    printf("该数组的元素和为:%d\n",sum);

    return 0;
}

int SumArr(int array[],int n){
    int result=0,i;

    for(i=0;i<n;i++){
        result+=array[i];
    }

    return result;
}