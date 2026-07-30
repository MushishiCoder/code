#include<stdio.h>

int main(){
    int i,n;

    printf("请输入整数个数n和n个整数:");
    
    while(scanf("%d",&n)!=EOF){
     /* 
     核心循环条件：scanf("%d", &n) != EOF
     scanf 会尝试读取输入的整数 n，并返回一个状态值。
     只要没有读到文件末尾（即返回值不等于 EOF，也就是 -1），
     循环就会一直持续下去，从而实现多实例测试。
    */
        int a=0,sum=0;

        for(i=1;i<=n;i++){
            scanf("%d",&a);
            sum+=a;
        }

        printf("%d\n",sum);
    }

    return 0;
}