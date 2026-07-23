#include<stdio.h>
#include<math.h>

int main(){
    int n=0;                        //n<100000
    int len=0;
    printf("输入一个小于100000的正整数:");
    scanf("%d",&n);
    len=(int)log10(n)+1;
    printf("该正整数的位数为%d\n",len);
    switch(len){
        case 5:printf("%d\n",n%10);
        n/=10;
        case 4:printf("%d\n",n%10);
        n/=10;
        case 3:printf("%d\n",n%10);
        n/=10;
        case 2:printf("%d\n",n%10);
        n/=10;
        case 1:printf("%d\n",n%10);
        n/=10;
    }
    return 0;
}