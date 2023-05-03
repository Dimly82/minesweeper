#include "fieldTest.h"

int main() {
    int errorFlag = 0;
    char msg[100] = {};
    if (TestCheckForWin(msg)) {
        printf("%s\n", msg);
        errorFlag = -1;
    }

    if (TestGenerateField(msg)) {
        printf("%s\n", msg);
        errorFlag = 1;
    }

    if (TestOpenAllCells(msg)) {
        printf("%s\n", msg);
        errorFlag = 1;
    }

    if (TestOpenEmptyNearbyCells(msg)) {
        printf("%s\n", msg);
        errorFlag = 1;
    }

    if (TestOpenCell(msg)) {
        printf("%s\n", msg);
        errorFlag = 1;
    }

    if (TestSetFlag(msg)) {
        printf("%s\n", msg);
        errorFlag = 1;
    }

    if (TestRemoveFlag(msg)) {
        printf("%s\n", msg);
        errorFlag = 1;
    }

    if (errorFlag) return -1;
    return 0;
}