#include <stdio.h>

int main(){

int age=0;

printf("enter ur age: ");
scanf("%d",&age);

if(age>=60){
    printf("you are old");
}

else if(age>=18){
    printf("you are an adult");
}


else{
    printf("You are a child");
}



return 0;
}