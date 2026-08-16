#include<stdio.h>

#define N 30

int main(){
    int i,j,n;
    int a[N][N];

    printf("请输入这个杨辉三角的行数:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        a[i][0]=1;
        a[i][i]=1;
    }
    for(i=2;i<n;i++){                           //从第二行开始
        for(j=1;j<i;j++){
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }

    for(i=0;i<n;i++){

        //在每一行前加入空格让其变成等腰三角形，n是行数，i是第几行，比如说i=1(第二行),4-1-1=2组空格
        for(int space=0;space<n-i-1;space++){
            printf("      ");
        }

        for(j=0;j<=i;j++){                      //j<=i确保不会漏掉最后一个
            printf("%-12d",a[i][j]);
        }

        putchar('\n');
    }

    return 0;
}