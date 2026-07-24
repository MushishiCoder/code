#include<stdio.h>
#include<math.h>

int main(){
    float x,y;
    printf("请输入两个数:");
    scanf("%f %f",&x,&y);
    char op;
    getchar();
    op=getchar();
    switch(op){
        case '+':printf("%.2f\n",x+y);
        break;
        case '-':printf("%.2f\n",x-y);
        break;
        case '*':printf("%.2f\n",x*y);
        break;
        case '/':{
            if(fabs(y)>1e-7){                       //排除分母为0的情况，因为浮点数的精度误差，所以采用科学计数法。
                printf("%.2f\n",x/y);
            }else{
                printf("Wrong input\n");
            }
        }
        break;
        default:printf("Wrong input\n");
    }
    return 0;
}