#include<stdio.h>
#define N 20

void InputArr(int x[],int n);
void SortArr(int x[],int n);
void DisArr(int x[],int n);

int main(){
    int n;
    int a[N];

    printf("请输入元素个数:");
    scanf("%d",&n);

    InputArr(a,n);

    SortArr(a,n);

    DisArr(a,n);

    return 0;
}

void InputArr(int x[],int n){
    int i;

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

void DisArr(int x[],int n){
    int i;

    for(i=0;i<n;i++){
        printf("%-4d",x[i]);
    }

    putchar('\n');
}