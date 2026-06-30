#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));

    int min=50;
    int max=100;
    int randomNUM1=0;
    int randomNUM2=0;
    int randomNUM3=0;

    randomNUM1=(rand()% (max-min+1))+min;
    randomNUM2=(rand()% (max-min+1))+min;
    randomNUM3=(rand()% (max-min+1))+min;
    printf("%d %d %d", randomNUM1, randomNUM2, randomNUM3);

    





    return 0;
}