#include "interactionTests.h"

int main() {
    if (TestIsInt() == 0 && TestPrintField() == 0 && TestLevelDifficulty() == 0
        && TestNextMove() == 0 && TestCheckGameStatus() == 0) {
        printf("SUccess");
        return 0;
  }
    return 1;
}