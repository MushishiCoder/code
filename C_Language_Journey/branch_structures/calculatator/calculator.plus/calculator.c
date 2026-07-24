#include<stdio.h>
#include<math.h>

int main(){
    float x,y,result;
    printf("请输入两个数:");
    scanf("%f %f",&x,&y);
    getchar();
    printf("请输入一个字符:");
    char op;
    op=getchar();
    int error=0;
    switch(op){
        case '+':result=x+y;
        break;
        case '-':result=x-y;
        break;
        case '*':result=x*y;
        break;
        case '/':{
            if(fabs(y)>1e-7){
                result=x/y;
            }else{
                error=1;
            }
        }
        break;
        default:error=1;
        break;
    }
    if(error=0){
        printf("%.2f\n",result);
    }else{
        printf("Wrong input");
    }
    return 0;
}