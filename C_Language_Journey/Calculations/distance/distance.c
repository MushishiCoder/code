#include<stdio.h>
#include<math.h>

int main(){
    float x1,y1,x2,y2,distance;
    printf("请输入第一个点坐标:");
    scanf("%f %f",&x1,&y1);
    printf("请输入第二个点坐标:");
    scanf("%f %f",&x2,&y2);
    distance=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("两点之间的距离为:%.2f\n",distance);
    return 0;
}