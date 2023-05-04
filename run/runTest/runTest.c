#include "runTest.h"

int count = 0;

int LevelDifficulty() {
    count++;
    return 0;
}

int CheckErr(int a) {
    count++;
    return 0;
}

int GenerateField(int *a, int b, int c) {
    count++;
    for (int i = 0; i < b * b; i++) {
        a[i] = 0;
    }
    return 0;
}

int PrintField(const int *a, int b, int *c) {
    count++;
    return 0;
}


int NextMove(int *a) {
    count++;
    return 0;
}


int OpenCell(int *a, int b, const int *c) {
    count++;
    return 0;
}


int SetFlag(int *a, int b, const int *c, int *d) {
    count++;
    return 0;
}


int RemoveFlag(int *a, int b, const int *c, int *d) {
    count++;
    return 0;
}


int CheckGameStatus(int *a, int b, int c) {
    count++;
    return 3;
}


int TestRun(char msg[]) {
    int exp = 15;
    run();
    if (count != exp) {
        sprintf(msg, "TestRun: called %d functions; expected %d", count, exp);
        return 1;
    }
    return 0;
}
