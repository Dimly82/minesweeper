#include <C:/MinGW/include/stdio.h>
#include <C:/MinGW/include/string.h>
#include <C:/MinGW/include/stdlib.h>
#include <C:/MinGW/include/time.h>
#include "./field/field.h"


int main() {
  char difficulty[10] = {};
  int fieldWidth;
  int quantityOfMines;

  srand(time(NULL));

  printf("Choose difficulty (easy/hard): ");
  scanf("%s", difficulty);

  if (strcmp(difficulty, "easy") == 0){
    fieldWidth = 9;
    quantityOfMines = 10;
  } else if (strcmp(difficulty, "hard") == 0){
    fieldWidth = 16;
    quantityOfMines = 40;
  } else {
    printf("You enetred wrong difficulty.\nAborting...");
    return 0;
  }

  int field[fieldWidth][fieldWidth];
  DeclareVars(fieldWidth);
  GenerateField(field[0], quantityOfMines);

  for (int i = 0; i < fieldWidth; i++){
    for (int j = 0; j < fieldWidth; j++){
      printf("%d\t", field[i][j]);
    }
    printf("\n");
  }
  return 0;
}