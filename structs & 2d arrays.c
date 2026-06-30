#include <stdio.h>
#include <string.h>

typedef struct {
    char brand[50];
    int  yearMade;
    float price;
}Cars;

 int main(){
    Cars parkingLot[3][2]={{{"porsche",2021,30000},{"Mercedes",2023,50000}},
                    {{"Audi",2019,34000},{"Tesla",2022,24000}},
                    {{"BMW",2022,40000},{"VOLVO",2024,30000}}};
    
   /* int size=sizeof(parkingLot)/sizeof(parkingLot[0]);
    int size2=sizeof(parkingLot[0]);*/

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){

        printf("%s %d %.2f\n",parkingLot[i][j].brand,parkingLot[i][j].yearMade,parkingLot[i][j].price);
        }
        printf("\n");
    }
    

    return 0;
}