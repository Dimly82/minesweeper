#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int fieldWidth;

int DeclareVarsAg(int fieldH){
  fieldWidth = fieldH;
  return 0;
}

int PrintField(int array[][fieldWidth]){
  for (int i = 0; i < fieldWidth; i++){
    for (int j = 0; j < fieldWidth; j++){
      printf("%d\t", array[i][j]);
    }
    printf("\n");
  }
  return 0;
}

int LevelDifficulty(){
  char difficulty[10] = {};
  printf("Choose difficulty (easy/hard): ");
  scanf("%s", difficulty);

  if (strcmp(difficulty, "easy") == 0){
    return 0;
  } else if (strcmp(difficulty, "hard") == 0){
    return 1;
  }
}

int NextMove(int arr[]){
  //int coordinates[2] = {};
  //NextMove(coordinates);
  printf("Enter the coordinates of the x point");
  scanf("%d", &arr[0]);
  printf("Enter the coordinates of the y point");
  scanf("%d", &arr[1]);
  return 0;
}

