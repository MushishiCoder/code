#include<stdio.h>

int main(){
    int i,n,a;

    printf("请输入整数个数n和n个整数,0表示输入结束:");
    scanf("%d",&n);

    while(n!=0){
     int sum=0;

     for(i=1;i<=n;i++){
            scanf("%d",&a);
            sum+=a;
        }

        printf("%d\n",sum);

        printf("下一个n为:");
        scanf("%d",&n);
    }
    return 0;
}