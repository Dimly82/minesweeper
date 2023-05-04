#include "runTest.h"

int count1 = 0;

int LevelDifficulty() {
    count1++;
    return 0;
}

int CheckErr(int a) {
    count1++;
    return 0;
}

inline int GenerateField(int *a, int b, int c) {
    count1++;
    for (int i = 0; i < b * b; i++) {
        a[i] = 0;
    }
    return 0;
}

int PrintField(const int *a, int b, int *c) {
    count1++;
    return 0;
}


int NextMove(int *a) {
    count1++;
    return 0;
}


inline int OpenCell(int *a, int b, const int *c) {
    count1++;
    return 0;
}


inline int SetFlag(int *a, int b, const int *c, int *d) {
    count1++;
    return 0;
}


inline int RemoveFlag(int *a, int b, const int *c, int *d) {
    count1++;
    return 0;
}


int CheckGameStatus(int *a, int b, int c) {
    count1++;
    return 3;
}


int TestRun(char msg[]) {
    int exp = 13;
    run();
    if (count1 != exp) {
        sprintf(msg, "TestRun: called %d functions; expected %d", count1, exp);
        return 1;
    }
    return 0;
}
