#include <C:/MinGW/include/stdio.h>
#include <C:/MinGW/include/string.h>
#include <C:/MinGW/include/stdlib.h>
#include <C:/MinGW/include/time.h>
#include "./field/field.h"
#include "./interaction/interaction.h"

int main() {
  char difficulty[10] = {};
  int fieldWidth;
  int quantityOfMines;

  srand(time(NULL));

  int diff = LevelDifficulty();
  switch (diff) {
    case 0: {
      fieldWidth = 9;
      quantityOfMines = 10;
      break;
    }
    case 1: {
      fieldWidth = 16;
      quantityOfMines = 40;
      break;
    }
  }

  int field[fieldWidth][fieldWidth];
  DeclareVars(fieldWidth);
  DeclareVarsAg(fieldWidth);
  GenerateField(field, quantityOfMines);

  PrintArray(field);
  return 0;
}