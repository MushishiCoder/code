#include<stdio.h>

#define N 100

void InputArr(int x[],int n);
void SortArr(int x[],int n);
void PrnArr(int x[],int n);

int  main(){
    int n;
    int a[N];

    printf("请输入数组元素的个数:");
    scanf("%d",&n);

    InputArr(a,n);

    SortArr(a,n);

    PrnArr(a,n);

    return 0;
}

void InputArr(int x[],int n){
    int i;

    printf("请输入该数组的元素:");
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
}

void SortArr(int x[],int n){
    int i,j,t;

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(x[i]>x[j]){
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }
    }
}

void PrnArr(int x[],int n){
    int i,count=0;

    for(i=0;i<n;i++){
        if(i==0||x[i]!=x[i-1]){
            printf("%-4d",x[i]);
            count++;

            if(count%10==0){
                putchar('\n');
            }
        }
    }

    putchar('\n');
}