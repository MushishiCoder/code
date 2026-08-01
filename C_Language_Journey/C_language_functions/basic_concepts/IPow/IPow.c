#include<stdio.h>
int IPow(int x,int n);

int main(){
    int a;

    printf("请输入一个整数a:");
    scanf("%d",&a);

    printf("a的二次幂为:%d\n",IPow(a,2));
    printf("a的三次幂为:%d\n",IPow(a,3));
    printf("a的四次幂为:%d\n",IPow(a,4));

    return 0;
}

int IPow(int x,int n){
   int result=1;
   int i;

   for(i=0;i<n;i++){
        result*=x;
   }

   return result;
}