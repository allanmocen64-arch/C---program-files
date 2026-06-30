#include <stdio.h>

int main(){


    char operator='\0';
    double num1=0.0;
    double num2=0.0;
    double result=0.0;

    printf("enter the first number: ");
    scanf("%lf",&num1);

    printf("enter an operator(* + - /): ");
    scanf(" %c",&operator);

    printf("enter the second number: ");
    scanf("%lf",&num2);

    switch(operator){
        case '*':
            result=num1 * num2;
            break;
        case '+':
            result=num1 + num2;
            break;
        case '-':
            result=num1 - num2;
            break;
        case '/':
            result=num1 / num2;
            if(num2==0){
                printf("you cannot do that/n");
            }
            break;
        default:
            printf("invalid option");
       

    }
    printf("%lf",result);






    return 0;
}