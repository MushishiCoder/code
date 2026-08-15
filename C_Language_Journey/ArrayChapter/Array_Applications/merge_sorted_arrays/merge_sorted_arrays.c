#include<stdio.h>

#define N 100

void InputArr(int x[],int n);
void SortArr(int x[],int n);

int main(){
    int i,j,m,n,k,count;
    int a[N/2],b[N/2],c[N];

    printf("请输入两个集合的元素个数:");
    scanf("%d %d",&m,&n);
    printf("请输入两个集合:");
    InputArr(a,m);
    InputArr(b,n);

    SortArr(a,m);
    SortArr(b,n);

    i=0,j=0,k=0;
    while(i<m&&j<n){
        if(a[i]<b[j]){
            c[k]=a[i];                      // 若 a 的元素较小，存入 c 中
            i++;k++;                        // 指针同时后移
        }
        else if(a[i]>b[j]){
            c[k]=b[j];
            j++;k++;
        }
        else{
            c[k]=a[i];                      //a和b的元素相等时，a和b均可存入c中
            i++;j++;k++;                    //所有指针均向后移
        }
    }

    //如果b的元素先遍历完,a没有遍历完，继续a和c的合并
    while(i<m){
        c[k]=a[i];
        i++;k++;
    }

    //如果a的元素先遍历完,b没有遍历完，继续b和c的合并
    while(j<n){
        c[k]=b[j];
        j++;k++;
    }
    
    printf("这个新的集合为:\n");
    count=0;
    for(i=0;i<k;i++){
        printf("%-4d",c[i]);
        count++;
        if(count%10==0){
            putchar('\n');
        }
    }

    return 0;
}

void InputArr(int x[],int n){
    int i;

    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
}

void SortArr(int x[],int n){
    int i,j,t;

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(x[i]>x[j]){
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }
    }
}