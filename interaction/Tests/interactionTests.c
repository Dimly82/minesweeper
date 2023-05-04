#include "interactionTests.h"
#include "../interaction.h"
#include <stdio.h>

//#include <unistd.h>
//#include <cstdio>
int count = 0;

int TestIsInt() {
    freopen("for_test.txt", "w", stdout);
    const int size = 100;
    char mas[size];
    for (int i = 0; i < size; i++) {
        mas[i] = '9';
    }
    mas[10] = 'a';
    if (!IsInt(mas, size)) {

        printf("TestIsInt:Error intercepted successfully\n");
        fclose(stdout);
        return 0;
    } else {
        printf("TestIsInt: no errors\n");
        fclose(stdout);
        return 1;
    }
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
        fclose(stdout);
        return 0;
    } else {
        printf("\nTestPrintField: no errors\n");
        fclose(stdout);
        return 1;
    }

}


int TestLevelDifficulty() {
    freopen("for_test.txt", "a", stdout);
    freopen("LevelDifficulty.txt","r",stdin);
    int level = LevelDifficulty();
    if (level == -1) {
        printf("\nTestLevelDifficulty: Error detected successfully\n");
        fclose(stdout);
        return 0;
    }
    else {
        printf("\nTestLevelDifficulty: ERROR\n");
        fclose(stdout);
    }
}

int TestNextMove() {
    freopen("for_test.txt", "a", stdout);
    const int size = 20;
    int arr[size];
    freopen("NextMove.txt", "r", stdin);
    if (NextMove(arr) == 3) {
        printf("\nTestNextMove: The error has been fixed\n");
        fclose(stdout);
        return 0;
    } else {
        printf("\nTestNextMove: ERROR\n");
        fclose(stdout);
        return 1;
    }
}

int TestCheckGameStatus() {
    freopen("for_test.txt", "a", stdout);
    int size = 10;
    int arr[size];
    int code = 6;
    if (CheckGameStatus(arr, size, code) == 0 && code > 5) {
        printf("TestCheckGameStatus: Error detected successfully\n");
        fclose(stdout);
        return 0;
    } else {
        printf("TestCheckGameStatus: no error\n");
        fclose(stdout);
        return 1;
    }
}


