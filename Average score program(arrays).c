#include <stdio.h>

int main(){
    int total=0;
    int untotal=0;
    int max=0;
    int highestAverage=0;
    int averageScore=0;
    int highestIndex=0;

    char students[][50]={"Allison",
                        "James",
                        "Bob",
                        "Mercy",
                        "Wendy"};
    
    int scores[][3]={{53,64,65},
                    {50,70,65},
                    {76,45,50},
                    {59,69,67},
                    {40,55,65}};
        for(int i=0;i<5;i++){
            printf("\n%s\n",students[i]);   
            for(int j=0;j<3;j++){ 
            printf("%d ",scores[i][j]);
            printf("\n"); 
            
        }
        
       averageScore=(scores[i][0]+scores[i][1]+scores[i][2])/3;
        printf("The average score is %d",averageScore);
        printf("\n");
        if(averageScore>=60){
        printf("You have passed!\n");
        total++;
         if(averageScore>highestAverage){
         highestAverage=averageScore;
         highestIndex=i;
      }
      printf("%d",highestAverage);
      
     }
     else{
        printf("You have failed!\n");
        untotal++;
     }
     
     }
     printf("\nTotal passed are %d\n",total);
     printf("Total failed are %d\n",untotal);


    /*for(int i=0;i<5;i++){
     printf("%s\n",students[i]);
     for(int j=0;j<5;j++){
        averageScore=scores[0][0]+scores[0][1]+scores[0][2];
        printf("%d",scores[i][j]);
     }
    } */


    //averageScore=scores[0][0]+scores[0][1]+scores[0][2];
    //printf("Allison-%d\n",averageScore);       
       
    return 0;
}