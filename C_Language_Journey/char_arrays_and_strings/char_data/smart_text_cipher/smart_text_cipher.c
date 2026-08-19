#include<stdio.h>
#include<ctype.h>                                       //引入字符分类与转换函数库（如 isalpha, isupper, tolower 等）

int main(){
    int i,n;
    int alpha_count=0,digit_count=0,other_count=0;      //分别用来统计字母、数字、其他字符的个数
    char result[100];                                   //定义一个字符数组，用来存放最终处理好的密文（末尾需留一个位置给 '\0'）

    printf("请输入要处理的字符个数:");
    scanf("%d",&n);

    getchar();

    printf("请输入%d个字符:\n",n);
    for(i=0;i<n;i++){
        char ch;
        scanf("%c",&ch);

        if(isalpha(ch)){                                //判断当前字符是否为英文字母
             alpha_count++;                             //字母计数器 +1

            if(isupper(ch)){                            //如果是大写字母   
                ch=tolower(ch);                         //转换成小写字母

                int safe_val=ch+3;                      //核心加密：偏移 +3，用int暂存防止char溢出

                while(safe_val>'z'){                    //防溢出循环：如果加密后的 ASCII 码超过了小写字母 'z' 的上限
                    safe_val-=26;                       //减去 26 个字母的宽度，实现循环拉回
                }
                ch=(char)safe_val;                      //将安全的整型值转换char类型赋给ch
            }
            else if(islower(ch)){                       //注意用else if，避免和上面大写转换产生冲突
                ch=toupper(ch);

                int safe_val=ch+3;

                while(safe_val>'Z'){
                    safe_val-=26;
                }
                ch=(char)safe_val;
            }
        }
        else if(isdigit(ch)){
            digit_count++;
        }
        else{
            other_count++;
        }

        result[i]=ch;                                   //将处理好（或未变）的字符存入字符数组的对应位置
    }
    result[n]='\0';                                     //注意：在字符串的末尾手动加上'\0'作为结束标志，以便后续用%s一次性打印

    printf("\n========处理完毕=======\n");
    printf("【统计】：字母个数：%d个    数字个数：%d个    其它个数：%d个\n",alpha_count,digit_count,other_count);
    printf("密文为:%s",result);

    return 0;
}