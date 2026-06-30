#include <stdio.h>

int main(){

char choice ='0';
int mark =0;
int total =0;

printf("answer the questions using A,B,C,D\n");

printf("1.What color is the grass?\n ");
printf("A.yellow\n");
printf("B.green\n");
printf("C.blue\n");
printf("D.yellow\n");
scanf(" %c",&choice);

if(choice=='B'){
    mark=1;
}
else{
    mark=0;
}
total=total+mark;

printf("1.how many fingers does a human have?\n ");
printf("A.six\n");
printf("B.five\n");
printf("C.twenty\n");
printf("D.ten\n");
scanf(" %c",&choice);
if(choice=='D'){
    mark=1;
}
else{
    mark=0;
}
total=total+mark;

printf("1.how many planets exist\n ");
printf("A.eight\n");
printf("B.five\n");
printf("C.nine\n");
printf("D.ten\n");
scanf(" %c",&choice);
if(choice=='A'){
    mark=1;
}
else{
    mark=0;
}
total=total+mark;



printf("your total mark is %d/3",total);




    return 0;
}