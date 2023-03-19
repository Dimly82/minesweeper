#include <C:/MinGW/include/stdlib.h>
int fieldWidth;
const int values[] = {11, 12, 21, 22};
const int sizeOfVals = 4;

int DeclareVars(int fieldH){
  fieldWidth = fieldH;
  return 0;
}

int GenerateField(int field[][fieldWidth], int quantityOfMines){
  int cell;
  int mineCount = 0;
	for (int i = 0; i < fieldWidth; i++){
          for (int j = 0; j < fieldWidth; j++){
            if (mineCount >= quantityOfMines) cell = values[0];
            else cell = values[rand() % (sizeOfVals / 2)];
            if (cell == values[1]) mineCount++;
            field[i][j] = cell;
          }
        }
}