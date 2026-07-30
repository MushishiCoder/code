#include<stdio.h>

int main(){
    int ncase;

    printf("请输入要测试的组数:");
    scanf("%d",&ncase);
    
    while(ncase--){
        int i,n=0,sum=0;

        scanf("%d",&n);

        for(i=1;i<=n;i++){
            int a;
            scanf("%d",&a);

            sum+=a;
        }

        printf("%d\n",sum);
    }
    return 0;
}