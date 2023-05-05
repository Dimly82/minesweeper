#include "runTest.h"

//int LevelDifficulty() {
//    count1++;
//    return 0;
//}
//
//int CheckErr(int a) {
//    count1++;
//    return 0;
//}
//
//int GenerateField(int *a, int b, int c) {
//    count1++;
//    for (int i = 0; i < b * b; i++) {
//        a[i] = 0;
//    }
//    return 0;
//}
//
//int PrintField(const int *a, int b, int *c) {
//    count1++;
//    return 0;
//}
//
//
//int NextMove(int *a) {
//    count1++;
//    return 0;
//}
//
//
//int OpenCell(int *a, int b, const int *c) {
//    count1++;
//    return 0;
//}
//
//
//int SetFlag(int *a, int b, const int *c, int *d) {
//    count1++;
//    return 0;
//}
//
//
//int RemoveFlag(int *a, int b, const int *c, int *d) {
//    count1++;
//    return 0;
//}
//
//
//int CheckGameStatus(int *a, int b, int c) {
//    count1++;
//    return 3;
//}

int TestRun(char msg[]) {
    if (freopen("./runCommands.txt", "r", stdin) == NULL) {
        sprintf(msg, "TestRun: Test commands file not found\n");
        return -1;
    }

    freopen("./runResult.txt", "w", stdout);
    run();
    freopen("CON","w",stdout);

    FILE *expected;
    FILE *result;

    expected = fopen("C:\\Users\\pdimo\\OneDrive\\Documents\\MAI\\2nd Term\\IT\\Project\\test\\runExpect.txt", "r");
    if (expected == NULL) {
        sprintf(msg, "TestRun: File with expected results not found\n");
        return -1;
    }

    result = fopen("C:\\Users\\pdimo\\OneDrive\\Documents\\MAI\\2nd Term\\IT\\Project\\test\\runResult.txt", "r");
    if (result == NULL) {
        sprintf(msg, "TestRun: File with results not found\n");
        return -1;
    }

    char chExp = getc(expected);
    int i = 1;
    char chRes = getc(result);
    int j = 1;
    while (chExp != EOF && chRes != EOF) {
        if (chExp != chRes) {
            sprintf(msg, "TestRun: Got an unexpected result: expected %d, got %d\n", chExp, chRes);
            return -1;
        }
//        printf("Exp %d: %d; Res %d: %d\n", i, chExp, j, chExp);
//        printf("%d\n", (chExp == chRes));
        chExp = getc(expected);
        i++;
        chRes = getc(result);
        j++;
    }
    if (chExp == EOF && chRes != EOF || chRes == EOF && chExp != EOF) {
        sprintf(msg, "TestRun: Got an unexpected result (wrong amount of output)\n");
        return -1;
    }

    return 0;
}
