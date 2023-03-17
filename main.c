#include <C:/MinGW/include/stdio.h>
#include "./field/field.h"

int main() {
  int fieldWidth;
  printf("Eneter field's width/height: ");
  scanf("%d", &fieldWidth);
  int **field;
  field = new int *[10]
  GenerateField(fieldWidth, field);

  for (int i = 0; i < fieldWidth; i++){
    for (int j = 0; j < fieldWidth; j++){
      printf("%d ", field[i][j]);
    }
    printf("\n");
  }
  return 0;
}