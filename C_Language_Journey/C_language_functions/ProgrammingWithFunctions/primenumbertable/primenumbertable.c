#include<stdio.h>
#include<math.h>

int prime(int m);

int main(){
    int i,count=0;

    for(i=2;i<=100;i++){
        if(prime(i)){
            printf("%-6d",i);
            count++;
        }

        if(count%10==0){
            putchar('\n');
        }
    }

    putchar('\n');
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