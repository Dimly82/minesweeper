#include "interactionTests.h"
#include <stdio.h>
#include "../interaction.h"
int Result(){
    if (TestIsInt() == 0 && TestPrintField() == 0 && TestLevelDifficulty() == 0
        && TestNextMove() == 0 && TestCheckGameStatus() == 0) {
        //printf("SUccess");
        return 0;
    }

    else{
        return 1;
    }
}
int main() {
    printf("%d ", Result());
}

