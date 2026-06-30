#include <stdio.h>

int main(){
    char grade='\0';

    printf("enter ur grade: ");
    scanf("%c",&grade);

    if(grade=='A'|| grade=='B' || grade=='C'){
        printf("you have passed");
    }
    else{
        printf("you have failed");
    }








    return 0;
}