#include<stdio.h>
void aust();                            //aust是auto局部变量和static静态变量的和名
    
int main(){
    int i;

    for(i=0;i<3;i++){
        aust();
    }

    return 0;
}

void aust(){
    int au=0;
    static int st=0;

    printf("auto variabe=%d,static variabe=%d\n",au,st);

    au++;
    st++;
}