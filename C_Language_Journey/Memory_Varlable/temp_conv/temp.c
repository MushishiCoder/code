#include<stdio.h>

int main(){
    float cel=0,fahr=0;
    printf("华氏度为:");
    scanf("%f",&fahr);
    cel=(fahr-32)*5/9;
    printf("cel=%.2f fahr=%.2f\n",cel,fahr);
    return 0;
}