#include <stdio.h>
//pointer
void calculate(int a, int b, int *sum, int *product){
    *sum=a+b;
    *product=a*b;
}

int main(){
    int a=5;
    int b=5;
    int sum=0;
    int product=0;
    calculate(a,b,&sum,&product);
    printf("%d\n",sum);
    printf("%d\n",product);
    
    return 0;
}