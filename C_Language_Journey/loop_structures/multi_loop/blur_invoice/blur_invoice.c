#include<stdio.h>

int main(){
    int i=0,j=0;

    for(i=0;i<=9;i++){

        for(j=0;j<=9;j++){
            int n=17070+i*100+j;
            
            if(n%23==0){
                printf("%d\n",n);
            }
        }
    }

    return 0;
}