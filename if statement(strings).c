#include <stdio.h>
#include <string.h>

int main(){
    char name[50]="";

    printf("enter ur name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';

    if(strlen(name)==0){
        printf("You did not enter ur name");
    }
    else{
        printf("Hello %s",name);
    }





    return 0;
}