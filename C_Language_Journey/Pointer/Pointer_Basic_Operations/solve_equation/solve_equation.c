#include<stdio.h>
#include<math.h>

void GetData(double *ptrA,double *ptrB,double *ptrC);
int SolveQuestion(double a,double b,double c,double *ptrX1,double *ptrX2);
void DispResult(double x1,double x2);

int main(void){
    double a,b,c,x1,x2,temp=0;

    printf("请输入三个实数:");
    GetData(&a,&b,&c);

    temp=SolveQuestion(a,b,c,&x1,&x2);

    if(temp){
        printf("\n这个方程的两个实根分别为:");
        DispResult(x1,x2);
    }
    else{
        printf("\n这个方程的根不存在(判别式小于0)\n");
    }
    
    return 0;
}

void GetData(double *ptrA,double *ptrB,double *ptrC){
    scanf("%lf %lf %lf",ptrA,ptrB,ptrC);
}

int SolveQuestion(double a,double b,double c,double *ptrX1,double *ptrX2){
    double delta=b*b-4*a*c;

    if(delta<0){
        return 0;
    }
    else{
        double sqrt_delta=sqrt(delta);

        *ptrX1=(-b+sqrt_delta)/(2*a);
        *ptrX2=(-b-sqrt_delta)/(2*a);

        return 1;
    }
    
}

void DispResult(double x1,double x2){
    printf("x1=%.2f x2=%.2f",x1,x2);
}