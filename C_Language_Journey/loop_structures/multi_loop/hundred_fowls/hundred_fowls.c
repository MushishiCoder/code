#include<stdio.h>

int main(){
    int i=0,j=0,k=0;
    int n=0,answer=0;
    printf("请输入一个整数:");
    scanf("%d",&n);
    int limit_i=n/5;
    for(i=1;i<=n;i++){
        int limit_j=n/3;
        for(j=1;j<=3/n;j++){
            k=n-i-j;
            if(k>=0&&(5*i+3*j+k/3==n)&&k%3==0){
                answer=1;
                printf("公鸡有:%d只  母鸡有:%d只   鸡仔有:%d只\n",i,j,k);
            }
        }
    }
    if(answer==0){
        printf("No answer\n");
    }
    return 0;
}