#include <stdio.h>

typedef struct {
    char model[50];
    int year;
    int price;
}Car;

int main(){
    Car car[] = {{"BMW",2022,20000}, 
              {"Porsche",2024,34000},
              {"Bentley",2023,35000}};

    int numbers = (sizeof(car) / sizeof(car[0]));
        for(int i=0;i<numbers;i++){
            printf("%s %d $%d\n",car[i].model,car[i].year,car[i].price);

        }

    


    return 0;
}