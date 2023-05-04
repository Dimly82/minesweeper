#include "interactionTests.h"
#include "../interaction.h"
#include <stdio.h>

//#include <unistd.h>
//#include <cstdio>
int count = 0;

int TestIsInt() {
    freopen("for_test.txt","w",stdout);
    const int size = 100;
    char mas[size];
    for (int i = 0; i < size; i++) {
        mas[i] = '9';
    }
    mas[10] = 'a';
    if (IsInt(mas, size)) {
        freopen("CON","w",stdout);
        printf("TestIsInt:Error intercepted successfully\n");
        return 1;
    } else {
        freopen("CON","w",stdout);
        //printf("TestIsInt: no errors\n");
        return 0;
    }
}

int TestPrintField() {
    freopen("for_test.txt","a",stdout);
    int size = 3;
    int mas[] = {10,11,12,13,23,21,20,39,33};


    if (PrintField(mas, size, NULL) == -2) {
        freopen("CON","w",stdout);
        printf("\nTestPrintField: Error detected successfully\n");
        return 1;
    } else {
        freopen("CON","w",stdout);
        //printf("\nTestPrintField: no errors\n");
        return 0;
    }

}


int TestLevelDifficulty() {
    freopen("LevelDifficulty.txt","r",stdin);
    freopen("for_test.txt","a",stdout);
    int level = LevelDifficulty();
    if (level == -1) {
        freopen("CON","w",stdout);
        printf("\nTestLevelDifficulty: Error detected successfully\n");
        return 1;
    }
    else {
        freopen("CON","w",stdout);
        //printf("\nTestLevelDifficulty: no errors\n");
        return 0;
    }
}

int TestNextMove() {
    const int size = 20;
    int arr[size];
    freopen("NextMove.txt", "r", stdin);
    freopen("for_test.txt","a",stdout);
    if (NextMove(arr) == 3) {
        freopen("CON","w",stdout);
        //printf("\nTestNextMove: The error has been fixed\n");
        return 0;
    } else {
        freopen("CON","w",stdout);
        //printf("\nTestNextMove: no errors\n");
        return 1;
    }
}

int TestCheckGameStatus() {
    int size = 10;
    int arr[size];
    int code = 4;
    freopen("for_test.txt","a",stdout);
    if (CheckGameStatus(arr, size, code) == 0) {
        freopen("CON","w",stdout);
        //printf("TestCheckGameStatus: no error\n");
        return 0;

    } else {
        freopen("CON","w",stdout);
        printf("TestCheckGameStatus: Error detected successfully\n");
        return 1;
    }
}


