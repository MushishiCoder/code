#include<stdio.h>
#include<string.h>

#define LEN 100

int main(void){
    double a,sum1=0;
    int b,sum2=0;
    char str[LEN];

    printf("请输入要统计的数字:\n");
    while(scanf("%s",str)!=EOF){                        //EOF是一个宏定义，全称是End of File（文件结束），是一个终止信号
    /*输入字符串，相当于fgets，所以说不用加&。
    用scanf不用fgets的原因：因为要根据小数点找到数并将整个数完整放入变量之中，
    scanf可以识别空格和回车等并画上边界，可以分离出完整数字，后续利用sscanf可直接将该完整数字放入变量之中，
    但是fgets不具有该功能，它不会识别边界，用sscanf只会转移单个字符*/

        if(strchr(str,'.')){
            sscanf(str,"%lf",&a);                       //要将该数字转移到这个变量之中，所以说要添加&
            sum1+=a;
        }
        else{
            sscanf(str,"%d",&b);
            sum2+=b;
        }
    }

    printf("小数和整数的和分别为:%.2f %d",sum1,sum2);

    return 0;
}