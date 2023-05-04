#include "interactionTests.h"
#include "../interaction.h"
#include <stdio.h>
//#include <unistd.h>
//#include <cstdio>
int count=0;
int TestIsInt() {
    const int size = 100;
    char mas[size];
    for (int i = 0; i < size; i++) {
        mas[i] = '9';
    }
    mas[10] = 'a';
    if (!IsInt(mas, size)) {
        freopen("for_test.txt", "w", stdout);
        printf("TestIsInt:Error detected successfully\n");
        count++;
        fclose(stdout);
        return 1;
    }
    else{
        fclose(stdout);
        printf("TestIsInt:ERROR\n");
    }
    return 0;
}

int TestPrintField() {
    freopen("for_test.txt", "a", stdout);
    int size = 10;
    int mas[size];
    for (int i = 0; i < size; i++) {
        mas[i] = i % 10;
    }

    if (PrintField(mas, size, NULL) == -2) {
        printf("\nTestPrintField: Error detected successfully\n");
        count++;
        return 1;
    }
    else{
        fclose(stdout);
        printf("\nTestPrintField: ERROR\n");
    }
    fclose(stdout);
    return 0;
}


int TestLevelDifficulty() {
    freopen("LevelDifficulty.txt", "r", stdin);
    int level = LevelDifficulty();
    fopen("LevelDifficulty.txt","r");
    //printf("\n%d",level);
    if (level == -1) {
        freopen("for_test.txt", "a", stdout);
        printf("\nTestLevelDifficulty: Error detected successfully\n");
        count++;
        fclose(stdout);
    }
    else{
        printf("\nTestLevelDifficulty: ERROR\n");
    }
}

int TestNextMove() {
    freopen("for_test.txt", "a", stdout);
    const int size = 20;
    int arr[size];
    freopen("NextMove.txt", "r", stdin);
    if (NextMove(arr)==3){
        printf("\nTestNextMove: The error has been fixed\n");
        count++;
        fclose(stdout);
    }
    else{
        fclose(stdout);
        printf("\nTestNextMove: ERROR\n");
    }
}

int TestCheckGameStatus() {
    freopen("for_test.txt", "a", stdout);
    int size = 10;
    int arr[size];
    int code = 6;
    if (CheckGameStatus(arr, size, code) == 0 & code > 5) {
        printf("TestCheckGameStatus: Error detected successfully\n");
        count++;
    }
    else{
        fclose(stdout);
        printf("TestCheckGameStatus: ERROR\n");
    }
    //printf("\n1 %d",count);
    fclose(stdout);
    TestError(count);
}
int TestError(int count){
    freopen("for_test.txt", "a", stdout);
    //printf("\n2 %d",count);
    if (count == 5) {
        printf("There are no errors");
    }
    else{
        printf("There are errors");
    }
    fclose(stdout);
}


