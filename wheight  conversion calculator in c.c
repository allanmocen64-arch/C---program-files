#include <stdio.h>

int main(){

int choice = 0;
float kilograms=0.0f;
float pounds=0.0f;

printf("Wheight conversion calculator\n");
printf("1.Kilograms to pounds\n");
printf("2.Pounds to kilogram\n");

printf("enter your choice: 1 or 2: ");
scanf("%d",&choice);
if(choice==1){
    printf("enter the weight in kilograms: ");
    scanf("%f",&kilograms);
    pounds=kilograms * 2.204;
    printf("%.2fkg in pounds is %.2f pounds",kilograms,pounds);
}
else if(choice==2){
    printf("enter the weight in pounds: ");
    scanf("%f",&pounds);
    kilograms=pounds / 2.204;
    printf("%.2f pounds in kilograms is %.2f kg",pounds,kilograms);
}
else{
    printf("Invalid choice!");
}



    return 0;
}