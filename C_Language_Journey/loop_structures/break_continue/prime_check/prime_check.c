#include<stdio.h>
#include<math.h>

int main(){
    int a=0;
    printf("请输入一个整数:");
    scanf("%d",&a);
    int t=1;
    if(a<=1){                                       //先排除0,1和负数的情况，他们不是素数，进入for循环容易报错
        t=0;
    }
    int limit=(int)sqrt(a);
    /*因数都是成对出现的
    就像1*16=16
        2*8=16
        4*4=16
    所以取其开二次方，如果没有因数能整除，那另一半也没有，那就一定是素数*/
    for(int i=2;i<=limit;i++){                      //从2开始
        if(a%i==0){
            t=0;
            break;
        }
    }
    if(t==1){
        printf("yes\n");
    }else{
        printf("no\n");
    }
     return 0;
}