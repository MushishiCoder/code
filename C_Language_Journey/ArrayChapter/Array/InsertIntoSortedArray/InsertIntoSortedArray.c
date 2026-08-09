#include<stdio.h>
#define N 20

int main(){
    int x,i,n=10;
    int a[N]={1,3,5,7,9,11,13,15,17,19};

    printf("新输入一个元素:");
    scanf("%d",&x);

    for(i=n-1;i>=0;i--){
        if(a[i]>x){
            a[i+1]=a[i];
        }else{
            break;
        }
    }

    a[i+1]=x;

    for(i=0;i<n+1;i++){
        printf("%-4d",a[i]);
    }

    putchar('\n');

    return 0;
}