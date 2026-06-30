#include <stdio.h>

void checkNumber(int num);
int max(int a , int b);
float celsiusTOfahrenheit(float temp);

int main(){
    int num=0;
    float temp=0;
    int option=0;
    int result=0;
    float  Maxresult=0;
    int a=0;
    int b=0;

    printf("choose an option\n");
    printf("1.checking number whether positive or negative\n");
    printf("2.checking maximum number\n");
    printf("3.converting celsius to fahrenheit\n");

    scanf("%d",&option);

    switch(option){
        case 1:
                printf("positive or negative:\n ");
                printf("**********************\n");
                printf("enter a number: ");
                scanf("%d",&num);
                checkNumber(num);
        
                break;
        case 2:
                printf("checking maximum number:\n");
                printf("************************\n");
                printf("Enter first number: ");
                scanf("%d",&a);
                printf("enter second number: ");
                scanf("%d",&b);
                result=max(a,b);
                printf("Maximum number is %d",result);

                break;
        case 3:
                printf("conversion of celsius to fahrenheit\n");
                printf("***********************************\n");
                printf("Enter the tempearature:\n ");
                scanf("%f",&temp);
                Maxresult=celsiusTOfahrenheit(temp);
                printf("%f",Maxresult);
        default:
        printf("invalid option");        
    }
    
    return 0;
}
void checkNumber(int num){
    if(num>=0){
        printf("positive");
    }else{
        printf("negative");
    }
}   

int max(int a , int b){
    if(a>b){
        return a;
    }else{
        return b;
    }

    
}
float celsiusTOfahrenheit(float temp){
        return(temp*9/5)+32;
}