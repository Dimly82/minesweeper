#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int fieldHeight1;

int DeclareVarsAg(int fieldH){
  fieldHeight1 = fieldH;
  return 0;
}

int PrintField(int array[][fieldHeight1]){
  for (int i = 0; i < fieldHeight1; i++){
    for (int j = 0; j < fieldHeight1; j++){
      printf("%d\t", array[i][j]);
    }
    printf("\n");
  }
  return 0;
}

int LevelDifficulty(){
  char difficulty[1000] = {};
  printf("Choose difficulty (easy/hard): ");
  scanf("%s", difficulty);

  if (strcmp(difficulty, "easy") == 0){
    return 0;
  } else if (strcmp(difficulty, "hard") == 0){
    return 1;
  } else{
    return -1;
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

char decoration(int x,int y){
  if (x==0){
    char s=' ';
    return s;
  }else if (x!=0 & 1<=y<9){
    return y;
  }
  else{
    return '\0A';
  }
}

