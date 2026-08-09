#include<stdio.h>

#define N 20

void ModifyArr(int array[],int n);

int main(){
    int i,n;
    int a[N];

    printf("请输入元素的个数:");
    scanf("%d",&n);
    
    printf("请输入一个数组:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("这个数组为:");
    for(i=0;i<n;i++){
        printf("%-4d",a[i]);
    }
    printf("\n\n");

    ModifyArr(a,n);

    printf("这个数组修改后的内容为:");
    for(i=0;i<n;i++){
        printf("%-4d",a[i]);
    }

    putchar('\n');

    return 0;
}

void ModifyArr(int array[],int n){
    int i;

    for(i=0;i<n;i++){
        array[i]*=10;
    }
}