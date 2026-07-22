#include<stdio.h>

int main(){
    int c=0,n=0;
    printf("糖果的数量为:");
    scanf("%d",&c);
    printf("小朋友的数量为:");
    scanf("%d",&n);
    int x=0,y=0;
    printf("每个小朋友都能份分到%d个糖果\n",x=c/n);
    printf("分完还剩%d个糖果\n",y=c%n);
    return 0; 
}