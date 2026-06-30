#include <stdio.h>

int main(){

//switch :an alternative of when using many else if statements

int dayOfweek=0;

printf("enter day of the week(1-7): ");
scanf("%d",&dayOfweek);

switch(dayOfweek){
    case 1:
        printf("it is monday");
        break;
    case 2:
        printf("it is Tuesday");
        break;
    case 3:
        printf("it is Wednesday");
        break;
    case 4:
        printf("it is Thursday");
        break;
    case 5:
        printf("it is Friday");
        break;
    case 6:
        printf("it is saturday");
        break;
    case 7:
        printf("it is sunday");
        break;
    default:
        printf("only enter a number 1-7");
    
             

    

}



    return 0;
}