#include<stdio.h>
#include<string.h>

float TotalCost(char str[]);                        //计算每行的费用，注意这个函数的类型

#define LEN 200

int main(void){
    int n;
    size_t len;
    float sum=0;
    char str[LEN];

    printf("请输入行数:");
    if(scanf("%d",&n)!=1){
        printf("输入错误！\n");
    }

    int c;
    while((c=getchar())!='\n'&&c!=EOF);             //清理缓存区，每个getchar只能清理一个字符，防止多个字符在缓存区，需要使用whiie循环

    for(int i=0;i<n;i++){
        if(fgets(str,sizeof(str),stdin)!=NULL){
            str[strcspn(str,"\n")]='\0';
            len=strlen(str);
        }

        sum+=TotalCost(str);
    }

    printf("总花费为:%.2f\n",sum);

    return 0;
}

float TotalCost(char *str){
    char *p=strrchr(str,' ');                       //使用strrchr从后往前查找最后一个空格，strchr是从前往后
    float result=0.0;

    if(p!=NULL){
        if(sscanf(p,"%f",&result)==1){              //用sscanf是解析浮点数
            return result;
        }
    }

    return 0.0;
}