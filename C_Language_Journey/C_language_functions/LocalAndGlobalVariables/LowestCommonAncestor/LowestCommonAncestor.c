#include<stdio.h>
int common(int x,int y);

int main(){
    int a,b,m;
    m=0;

    printf("请输入两个大于1的正整数:");
    scanf("%d %d",&a,&b);

    m=common(a,b);
    printf("这两个数的最近共同祖先为:%d\n",m);

    return 0;
}

int common(int x,int y){
    if(x==y){
        return x;                                   // 如果两个结点编号相等，说明它们在树中汇合了，当前的编号就是最近共同祖先
    }
    if(x<y){
        return common(x,y/2);                       //如果x小于y，说明y处于树的更底层，让y向上找它的双亲（y/2)，再与x进行比较
    }
    else{
        return common(x/2,y);                       // 如果x大于等于y，说明x处于树的更底层，让x向上找它的双亲（x/2），再与y进行比较
    }
/*递归函数：寻找完全二叉树中两个结点的最近共同祖先
 * 原理：在完全二叉树中，任意结点编号为i，其双亲结点编号为i/2。
 * 让编号较大的结点不断除以2向上“爬树”，直到两个结点相遇。*/
}