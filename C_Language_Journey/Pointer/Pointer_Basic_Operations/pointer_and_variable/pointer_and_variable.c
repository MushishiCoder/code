#include<stdio.h>

int main(void){
    int count=5;
    int* cntptr=NULL;
    cntptr=&count;

    printf("count的地址为:%p\n",&count);
    printf("cntptr的值为:%p\n",cntptr);

    printf("\ncount的值为:%d\n",count);
    printf("*cntptr的值为:%d\n",*cntptr);

    *cntptr=10;
    
    printf("\ncount的值为:%d\n",count);
    printf("*cntptr的值为:%d\n",*cntptr);

    return 0;
}