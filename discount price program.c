#include <stdio.h>
#include <stdbool.h>


int main(){

    bool isStudent=true;
    bool isSenior=false;
    float price=10.00;

    if(isStudent){
        if(isSenior){
        printf("you will get a discount of 20%\n");
        printf("you will get a ticket discount of 10%\n");
        price=price*0.7;
        printf("your ticket price is %.2f\n",price);
        }
        else{
            printf("you will get a discount of 10%\n");
            price=price*0.9;
            printf("your ticket price will be %.2f",price);
        }
    }
    else{ 
        if(isSenior){
        printf("you will get a discount of 20%\n");
        price=price*0.8;
        printf("your ticket price will be %.2f",price);
        }
    }
    

    









    return 0;
}