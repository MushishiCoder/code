#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100
#define LEN 81

void Sort(char str[N][LEN],int n);

int main(void){
    int i,n;
    char str[N][LEN];

    printf("请输入要输入的字符串个数:");
    scanf("%d",&n);
    getchar();

    printf("请输入%d个字符串:\n",n);
    for(i=0;i<n;i++){
        fgets(str[i],LEN,stdin);
    }

    Sort(str,n);
    
    printf("该字符串数组从小到大排序为:\n");
    for(i=0;i<n;i++){
        printf("%s",str[i]);
    }
}

void Sort(char str[N][LEN],int n){
    int i,j;
    char temp[LEN];

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
}
