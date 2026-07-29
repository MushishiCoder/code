#include<stdio.h>
#include<math.h>

int main(){
    int std=0;
    float a=0,b=0,result=0;

    while(1){                               //while(1)表示为条件为真值,形成死循环,在"退出"之前一直输出菜单
        printf("1、相加\n");
        printf("2、相减\n");
        printf("3、相乘\n");
        printf("4、相除\n");
        printf("5、退出\n");

        printf("请选择(1-5):");
        scanf("%d",&std);

        if(std==5){
            break;
        }

        printf("请输入两个数:");
        scanf("%f%f",&a,&b);

        switch(std){
            case 1:
                result=a+b;
                break;
            case 2:
                result=a-b;
                break;
            case 3:
                result=a*b;
                break;
            case 4:
                result=a/b;
                break;
        }
        printf("%.2f\n\n",result);
        /*\n\n相当于在结果和下一次的菜单之间空出了一整行空白行。
        这样，视觉上每次计算完都会有一个清晰的段落隔离*/
    }
    return 0;
}