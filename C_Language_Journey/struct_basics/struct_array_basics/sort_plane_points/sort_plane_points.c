#include<stdio.h>

#define N 100

typedef struct{
    int x;
    int y;
    int dist;                                   //点到原点的平方值
}point;

int main(void){
    int i,j,n;
    point p[N];

    printf("请输入要输入点的个数:");
    scanf("%d",&n);

    printf("请输入%d个点:\n",n);
    for(i=0;i<n;i++){
        scanf("%d %d",&p[i].x,&p[i].y);

        if(p[i].x>=10000||p[i].y>=10000){
            printf("超出坐标限制\n");
            break;
        }

        p[i].dist=p[i].x*p[i].x+p[i].y*p[i].y;
    }
    n=i;

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(p[i].dist>p[j].dist){
                point temp;
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }

    for(i=0;i<n;i++){
        printf("(%d,%d)  ",p[i].x,p[i].y);
    }

    putchar('\n');
    
    return 0;
}