#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "./field/field.h"
#include "./interaction/interaction.h"

int main() {
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

  PrintField(field);
  return 0;
}