#include<stdio.h>
#include<math.h>

int prime(int m);

int main(){
    int even=0,i;

    printf("请输入一个不小于6的整数:");
    scanf("%d",&even);

    if(even<6||even%2!=0){
        return 0;
    }

    for(i=3;i<=even/2;i+=2){
        if(prime(i)&&prime(even-i)){
            printf("%d=%d+%d\n",even,i,even-i);
        }
    }

    return 0;
}

int prime(int m){
    int j;

    if(m<=1){
        return 0;
    }

    for(j=2;j<=sqrt(m);j++){
        if(m%j==0){
            return 0;
        }
    }

    return 1;
}