#include "interactionTests.h"
#include "../interaction.h"
#include <stdio.h>

int TestIsInt() {
    const int size = 100;
    char mas[size];
    for (int i=0;i<size;i++){
        mas[i] = '9';
    }
    mas[10]='a';
    if (!IsInt(mas,size)){
        printf("Error");
        return 1;
    }
    return 0;
}
/**int IsInt(const char str[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (str[i] < '0' || str[i] > '9') return 0;
        if (str[i] == '\0') break;
    }

    return 1;
}**/

int TestPrintField();

int TestLevelDifficulty();

int TestNextMove();

int TestCheckGameStatus();

int TestPrintError();
