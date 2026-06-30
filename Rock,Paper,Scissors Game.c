#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getuserOption();
int getcomputerOption();
void winnerCheck();

int main(){
    srand(time(0));
     printf("**ROCK,PAPER,SCISSORS GAME**\n");

    int max=3;
    int min=1;
    int userOption=getuserOption();
    int choice=0;
    int computerOption=getcomputerOption();

   
    printf("User:%d\n",userOption);
    printf("Computer:%d\n",computerOption);

    switch(userOption){
        case 1:
                printf("you chose ROCK!\n");
                break;
        case 2:
                printf("you chose PAPER\n");
                break;
        case 3:
                printf("you chose SCISSORS!\n");
                break;
    }
    switch(computerOption){
        case 1:
                printf("computer chose ROCK!\n");
                break;
        case 2:
                printf("computer chose PAPER\n");
                break;
        case 3:
                printf("computer chose SCISSORS!\n");
                break;
    }
    winnerCheck(userOption,computerOption);
   


    return 0;
}
int getuserOption(){
    int  choice=0;
   do{
    printf("Choose an option\n");
    printf("1.ROCK\n");
    printf("2.PAPER\n");
    printf("3.SCISSORS\n");
    printf("enter your choice: ");
    scanf("%d",&choice);


   }while(choice<1 || choice>3);
    return choice;
}

int getcomputerOption(){
    int max=3;
    int min=1;
  return (rand()% (max-min+1))+min;
    
}

void winnerCheck(int userOption, int computerOption){
    if(userOption==computerOption){
        printf("it is a tie\n");
    }
    else if(userOption==2 && computerOption==1){
        printf("You won!\n");
    }
    else if(userOption==1 && computerOption==3){
        printf("You won!\n");
    }
    else if(userOption==3 && computerOption==2){
        printf("You won!\n");
    }
    else{
        printf("You lost!");
    }
}
