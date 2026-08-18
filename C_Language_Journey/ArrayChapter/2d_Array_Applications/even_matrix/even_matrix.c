#include<stdio.h>

#define N 100

void InputArr(int x[N][N],int n);
int IsParity(int x[N][N],int n);

int main(){
    int n;
    int a[N][N];

    printf("请输入该方阵的阶:");
    scanf("%d",&n);

    printf("请输入该矩阵的元素:\n");
    InputArr(a,n);

    if(IsParity(a,n)){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }

    return 0;
}

void InputArr(int x[N][N],int n){
    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&x[i][j]);
        }
    }
}

int IsParity(int x[N][N],int n){
    int i,j;

    for(i=0;i<n;i++){
        int sum=0;
        
        for(j=0;j<n;j++){
            sum+=x[i][j];
        }

        if(sum%2!=0){
            return 0;
        }
    }

    for(j=0;j<n;j++){
        int sum=0;

        for(i=0;i<n;i++){
            sum+=x[i][j];
        }

        if(sum%2!=0){
            return 0;
        }
    }

    return 1;
}