#include <stdio.h>
#include <string.h>

void happyBirthday(char name[],int age){
    printf("\nhappy birthday to u");
    printf("\nhappy birthday to u");
    printf("\nhappy birthday dear %s",name);
    printf("\nyou have now turned %d years old",age);
}



int main(){
    char name[50]="";
    int age=0;

    printf("enter ur name: ");
    fgets(name,sizeof(name),stdin);

    printf("enter ur age: ");
    scanf("%d",&age);
    name[strlen(name)-1]='\0';

    
    happyBirthday(name,age);
    
    happyBirthday(name,age);

    
    
    
    







    return 0;
}