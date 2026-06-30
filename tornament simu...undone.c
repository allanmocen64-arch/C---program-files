#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>


typedef struct{
    char name[20];
    int score;
    char match;
    
    
}Group;


int main(){
    int totalscore1=0;
    int totalscore2=0;
    Group team1,team2,team3;
    

    srand(time(0));
    Group groupA[3];
    Group groupB[3];

    int score=rand()% 8;

    for(int i=0;i<3;i++){
    printf("Enter name for team%d in group A: ",i+1);
    scanf("%s",groupA[i].name);
    groupA[i].score=rand()% 8;

    }
    for(int i=0;i<3;i++){
    printf("Enter name for team%d in group B: ",i+1);
    scanf("%s",groupB[i].name);
    groupB[i].score=rand()% 8;
    }
    printf("----playing matches----\n");
        printf("Group A\n");
    
     for(int i=0;i<3;i++){
    Sleep(900);
    printf("%s %d\n",groupA[i].name,groupA[i].score);
    totalscore1++;
    }
    printf("\nGroup B\n");
    for(int i=0;i<3;i++){
    Sleep(900);
    printf("%s %d\n",groupB[i].name,groupB[i].score);
    totalscore2++;
    }
    if(totalscore1>=10){
        printf("Group A is qualified\n");
    }
    else{
        printf("Group A is Eliminated!\n");
    }
    if(totalscore2>=10){
        printf("Group B is qualified\n");
    }
    else{
        printf("Group B is Eliminated!\n");
    }
    
    return 0;
}