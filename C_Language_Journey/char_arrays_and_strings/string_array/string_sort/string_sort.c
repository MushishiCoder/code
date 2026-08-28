#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100                                   //定义最多可以存储多少字符串
#define LEN 81                                  //定义每个字符串的最大长度（包括\0）    

void Sort(char str[N][LEN],int n);              //函数声明：对该字符串数组的n个字符串进行从小到大排序

int main(void){
    int i,n;
    char str[N][LEN];

    printf("请输入要输入的字符串个数:");
    scanf("%d",&n);
    getchar();

    printf("请输入%d个字符串:\n",n);
    for(i=0;i<n;i++){
        fgets(str[i],LEN,stdin);                //输入该字符串数组，为保证后续字符串数组能够正常像矩阵一样输出，不需要去掉\n
    }

    Sort(str,n);
    
    printf("该字符串数组从小到大排序为:\n");
    for(i=0;i<n;i++){
        printf("%s",str[i]);
    }
}

void Sort(char str[N][LEN],int n){
    int i,j;
    char temp[LEN];                             //定义一个一维字符串，用于进行两个字符串得交换

    for(i=0;i<n;i++){                           //利用双层嵌套for循环来进行比较
        for(j=i+1;j<n;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
}
