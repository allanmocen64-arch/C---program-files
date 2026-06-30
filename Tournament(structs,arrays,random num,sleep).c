#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

typedef struct {
    char teamName[20];
    int score;
}Teams;

int main(){
    int max=5;
    int min=0;
    int total=0;
    int total2=0;
    int score=0;


    srand(time(0));
    
     
   Teams groupA[3][10]={{"Team1",rand()%5},
                    {"Team2",rand()%5},
                    {"Team3",rand()%5}};

    Teams groupB[3][10]={ {"Team4",rand()%5},
                         {"Team5",rand()%5},
                         {"Team6",rand()%5}};


    printf("Group A:\n");
    for(int i=0;i<3;i++){
       printf("%s %d\n",groupA[i][0].teamName,groupA[i][0].score);
       Sleep(1000);
       total+=groupA[i][0].score;
       
    }
    printf("\nGroup B:\n");
    for(int i=0;i<3;i++){
       printf("%s %d\n",groupB[i][0].teamName,groupB[i][0].score);
         Sleep(1000);
       total2+=groupB[i][0].score;
    }
    printf("Group's A total score is %d\n",total);
    printf("Group's B total score is %d\n",total2);

    if(total>total2){
        printf("\nThe Winner of The Tournament is Group A!\n");
    }
    else{
        printf("The Winner of The Tournament is Group B!\n");
    }

    
   
    



    
                

    






    return 0;
}