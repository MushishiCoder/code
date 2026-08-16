#include<stdio.h>

#define N 100

int Bsearch(int a[],int x,int low,int high);
//low和high分别为左边界和右边界。

int main(){
    int i,n,x;
    int a[N];

    printf("请输入宝箱的个数n以及需要找的幸运数字x:");
    scanf("%d %d",&n,&x);

    printf("请按照升序输入%d个宝箱的编号:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int result=Bsearch(a,x,0,n-1);

    if(result!=-1){
        printf("找到了该幸运数字%d,它的编号为%d:\n",x,result);
    }
    else{
        printf("很遗憾，幸运数字%d不在这些宝箱中!\n",x);
    }

    return 0;
}

int Bsearch(int a[],int x,int low,int high){
    if(low>high){
        return -1;
    }

    int mid=(low+high)/2;

    if(x==a[mid]){
        return mid;
    }
    else if(x<a[mid]){
        return Bsearch(a,x,low,mid-1);
    }
    else{
        return Bsearch(a,x,mid+1,high);
    }
    /*通过递归寻找幸运数字所在去区间，
    不能把mid-1和mid+1换成mid，
    当low=3,high=4时，mid=(3+4)/2=3,
    如果x<mid，即幸运数字x在右边，即low=mid=3，那么high还是4，
    就会陷入死循环当中，所以要mid-1/mid+1。*/
}