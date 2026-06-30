#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
            char useranswer='\0';
            int total=0;
            
            
  
            char questions[][100]={"What is the Hottest Planet?",
                        "Which planet is closest to the sun?",
                        "Which planet suppoprts life?"};
               
            char options[][100]={"A.Venus\nB.Mercury\nC.Earth\nD.Jupiter\n",
                        "A.Venus\nB.Mercury\nC.Earth\nD.Jupiter\n",
                        "A.Venus\nB.Mercury\nC.Earth\nD.Jupiter\n"};
            char answer[]={'A','B','C'};
            int size=sizeof(questions)/sizeof(questions[0]);

            for(int i=0;i<size;i++){
                printf("%s\n",questions[i]);
                printf("%s\n",options[i]);
                printf("Enter ur answer: ");
                scanf(" %c",&useranswer);
                useranswer=toupper(useranswer);

                if(useranswer==answer[i]){
                    printf("correct!\n");
                    total++;
                    
                }
                else{
                    printf("Wrong!\n");
                    
                }
                
                

            }
            printf("Your have a total points of %d",total);

    return 0;
}