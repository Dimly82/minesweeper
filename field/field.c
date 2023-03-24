#include <stdlib.h>

int fieldSize1;
const int values[] = {10, 19, 20, 29};
const int sizeOfVals = 4;

int DeclareVars(int fieldH){
  fieldSize1 = fieldH;
  return 0;
}

int GenerateField(int field[][fieldSize1], int quantityOfMines){
  int cell;
  int mineCount = 0;
	for (int i = 0; i < fieldSize1; i++){
          for (int j = 0; j < fieldSize1; j++){
            if (mineCount >= quantityOfMines) cell = values[0];
            else cell = values[rand() % (sizeOfVals / 2)];
            if (cell == values[1]) mineCount++;
            field[i][j] = cell;
          }
        }
}