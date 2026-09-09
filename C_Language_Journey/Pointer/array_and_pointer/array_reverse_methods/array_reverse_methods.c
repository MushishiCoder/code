#include<stdio.h>

#define N 100

int main(void){
    int i,n,a[N];
    int *ptr;

    ptr=a;

    printf("请输入该数组元素个数:");
    scanf("%d",&n);

    printf("请输入该数组:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("逆序输出:\n");

    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    putchar('\n');

    for(i=n-1;i>=0;i--){
        printf("%d ",*(a+i));
    }
    putchar('\n');

    for(i=n-1;i>=0;i--){
        printf("%d ",*(ptr+i));
    }
    putchar('\n');

    for(i=n-1;i>=0;i--){
        printf("%d ",ptr[i]);
    }
    putchar('\n');

    for(ptr=a+n-1;ptr>=a;ptr--){
        printf("%d ",*ptr);
    }
    putchar('\n');

    return 0;
}