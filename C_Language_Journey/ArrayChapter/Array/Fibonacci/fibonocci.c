#include<stdio.h>
#define N 50

int main(){
    int i,n;
    int a[N]={1,1};

    printf("请输入整数n:");
    scanf("%d",&n);

    for(i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
    }

    printf("fibonacci数列为:\n");

    for(i=0;i<n;i++){
        printf("%-8d",a[i]);

        if((i+1)%10==0){
            putchar('\n');
        }
    }

    return 0;
}