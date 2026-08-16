#include<stdio.h>

#define N 10

void InputArr(int x[N][N],int m,int n);
void PrnArr(int x[N][N],int y[N][N],int z[N][N],int m,int n);

int main(){
    int m,n;
    int a[N][N],b[N][N],c[N][N];

    printf("请输入图像的高度和宽度:");
    scanf("%d %d",&m,&n);

    printf("请输入r矩阵:\n");
    InputArr(a,m,n);

    printf("请输入g矩阵:\n");
    InputArr(b,m,n);

    printf("请输入b矩阵:\n");
    InputArr(c,m,n);

    printf("输出灰度图为:\n");
    PrnArr(a,b,c,m,n);

    return 0;
}

void InputArr(int x[N][N],int m,int n){
    int i,j;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&x[i][j]);
        }
    }
}

void PrnArr(int x[N][N],int y[N][N],int z[N][N],int m,int n){
    int i,j;
    int a[N][N];

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            a[i][j]=(x[i][j]+y[i][j]+z[i][j])/3;
            printf("%-4d",a[i][j]);
        }

        putchar('\n');                                          //放在i结束一个循环的末尾，输入一个回车
    }

}