#include<stdio.h>

#define N 20

void InputArr(int a[N][N],int m,int n);
int SumArr(int a[N][N],int m,int n);

int main(){
    int m,n,result;
    int a[N][N];

    printf("请输入该二维数组的行和列:");
    scanf("%d %d",&m,&n);

    printf("请输入该二维数组的元素:");
    InputArr(a,m,n);

    result=SumArr(a,m,n);

    printf("该数组和所有元素和为:%d\n",result);

    return 0;
}

void InputArr(int a[N][N],int m,int n){
    int i,j;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}

int SumArr(int a[N][N],int m,int n){
    int i,j,sum=0;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum+=a[i][j];
        }
    }

    return sum;
}