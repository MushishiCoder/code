#include<stdio.h>
void PrintStar(int m);
/*在 main 函数前告诉编译器：后面会有一个叫 PrintStar 的函数，
  它接收一个 int 类型的参数，不返回任何值（void）。
  这样编译器在 main 里面看到调用它时才不会报错。*/

int main(){
    int i,n;

    printf("请输入要输出几行直角三角形:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        PrintStar(i);
    }

    return 0;
}

void PrintStar(int m){
    int j;                              //局部变量，只在 PrintStar 函数内部有效

    for(j=1;j<=m;j++){
        printf("*");
    }

    putchar('\n');
/*专门用来输出单个字符。这里用来在每行星星打完后，
自动收尾并换行，保证子函数的独立完整性。*/
}