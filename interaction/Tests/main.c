#include "interactionTests.h"

int main() {
//    if (TestIsInt() == 0 && TestPrintField() == 0 && TestLevelDifficulty() == 0
//        && TestNextMove() == 0 && TestCheckGameStatus() == 0) {
//        printf("SUccess");
//        return 0;
//  }
//    printf("%d \n",TestIsInt());
//    printf("%d \n",TestPrintField());
//    printf("%d \n",TestLevelDifficulty());
//    printf("%d \n",TestNextMove());
//    printf("%d \n",TestCheckGameStatus());
    TestCheckGameStatus();
    TestIsInt();
    TestLevelDifficulty();
    TestNextMove();
    TestPrintField();
    return 0;
}