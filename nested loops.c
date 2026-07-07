#include <stdio.h>

int main(){
   
    int columns=0;
  int rows=0;
  int columns=0;
  char symbol='\0';

  printf("Enter number of rows: ");
  scanf("%d",&rows);

   printf("Enter number of columns: ");
   scanf("%d",&columns);

    printf("Enter type of symbol: ");
    scanf(" %c",&symbol);

  for(int i=0;i<rows;i++){
    for(int i=0;i<columns;i++){
      printf("%c",symbol);
    }
    printf("\n");
  }



    return 0;
}