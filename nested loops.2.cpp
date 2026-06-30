#include <stdio.h>

int main(){
    int num1= 0;
    int rows=0;
    int columns=0;

    printf("Enter a positive number: ");
    scanf("%d",&num1);

    for(int i=rows;rows<=num1;rows++){
        for(int columns=1;columns<=rows;columns++){
        printf("%d",columns);
        }
        printf("\n");
    }
    


 



    return 0;
}