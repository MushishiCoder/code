#include<stdio.h>
double fact(int n);

int main(){
    int m=0,k=0;
    double result=0;

    printf("在m个元素中任取k个元素:");
    scanf("%d %d",&m,&k);

    if(m<k){
        return 0;
    }

    result=fact(m)/(fact(k)*fact(m-k));
    printf("一共有%.0f种不同的取法\n",result);

    return 0;
}

double fact(int n){
    int i;
    double x=1;

    for(i=1;i<=n;i++){
        x*=i;
    }

    return x;
}