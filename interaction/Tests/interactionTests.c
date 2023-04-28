#include "interactionTests.h"
#include "../interaction.h"
#include <stdio.h>
#include <unistd.h>

int TestIsInt() {
    const int size = 100;
    char mas[size];
    for (int i = 0; i < size; i++) {
        mas[i] = '9';
    }
    mas[10] = 'a';
    if (!IsInt(mas, size)) {
        printf("TestIsInt:Error detected successfully\n");
        return 1;
    }
    return 0;
}

int TestPrintField() {
    int size = 10;
    int mas[size];
    for (int i = 0; i < size; i++) {
        mas[i] = i % 10;
    }
    if (PrintField(mas, size, NULL) == -2) {
        printf("\nTestPrintField: Error detected successfully\n");
        return 1;
    }
    return 0;
}


int TestLevelDifficulty() {
    //fwrite("easy\n", 100, 100, stdin);
    int level = LevelDifficulty();
    if (level == -1) {
        printf("TestLevelDifficulty: Error detected successfully\n");
    }
}

int TestNextMove() {
    const int size = 20;
    int arr[size];
    printf("PRINT 5 =========>");
    NextMove(arr);
    printf("TestNextMove: The error has been fixed\n");

}

int TestCheckGameStatus(){
    int size=10;
    int arr[size];
    int code=6;
    if (CheckGameStatus(arr,size,code)==0 & code>5){
        printf("TestCheckGameStatus: Error detected successfully\n");
    }
}

