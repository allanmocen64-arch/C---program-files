#include <stdio.h>
#include <stdbool.h>

int main(){
    //ternary operator = shorthand for if else statements
    //(condition) ? value_if true:value_if false


    /* Example 1;
    int x=63;
    int y=30;
    int max=(x>y)? x:y;
    printf("%d",max);
    */

   /*Example 2;
   bool isOnline=false;
   printf("%s",(isOnline)? "online":"offline");
   */

   /*Example 3;
   int number=7;
   printf("%d is %s",number,(number % 2==0) ? "Even": "Odd");*/

    /*Example 4;
    int age=17;
    printf("%s",(age>18) ? "Your are eligible:":"Your are a child");*/

    int hours=8;
    int minute=3;
    printf("%02d.%02d %s",hours,minute,(hours<12) ? "A.M":"P.M");


    return 0;
}