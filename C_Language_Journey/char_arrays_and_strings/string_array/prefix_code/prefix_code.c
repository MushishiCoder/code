#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100
#define LEN 81

void Sort(char str[N][LEN],int n);              //声明函数：将字符串从小到大进行排序
int IsPrefCode(char str[N][LEN],int n);         //声明函数：判断str的n个字符串是否符合前缀码的要求，若是返回1，否则返回0
int Find(char s1[],char s2[]);                  //声明函数：判断s1是否为s2的前缀，若是返回1，否则返回0

int main(void){
    int i,n;
    char str[N][LEN];

    printf("请输入要输入多少个字符串:");
    scanf("%d",&n);
    getchar();

    printf("请输入%d个字符串:\n",n);
    for(i=0;i<n;i++){
        fgets(str[i],LEN,stdin);
        str[i][strcspn(str[i],"\n")]='\0';      //消除换行符
    }

    Sort(str,n);

   if(IsPrefCode(str,n)){
    printf("Yes\n");
   }
   else{
    printf("No\n");
   }

   return 0;
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

int IsPrefCode(char str[N][LEN],int n){
    int i;

    for(i=0;i<n-1;i++){                         //注意是n-1，到i=n时i+1=n+1，即'\0'，会发生越界
        if(Find(str[i],str[i+1])){              //str[i]是str[i+1]的前缀
            return 0;
        }
    }

    return 1;
}

int Find(char s1[],char s2[]){
    if(strncmp(s2,s1,strlen(s1))==0){           //strcmp是判断在s2中的前strlen(s1)个字符是否和s1相等
        return 1;
    }
    else{
        return 0;
    }
}