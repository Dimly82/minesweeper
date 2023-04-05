#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "./field/field.h"
#include "./interaction/interaction.h"
#include "./error/checkErr.h"

int main()
{
    int code;
    int fieldWidth = 0;
    int quantityOfMines = 0;

    srand(time(NULL));

    while (1)
    {
        code = LevelDifficulty();
        if (!CheckErr(code)) break;
    }


    switch (code)
    {
        case 0:
        {
            fieldWidth = 9;
            quantityOfMines = 10;
            break;
        }
        case 1:
        {
            fieldWidth = 16;
            quantityOfMines = 40;
            break;
        }
        default:
            CheckErr(-9999);
    }

    int field[fieldWidth][fieldWidth];

    DeclareVars(fieldWidth);
    DeclareVarsAg(fieldWidth);
    GenerateField(field, quantityOfMines);

    while (1)
    {
        code = PrintField(field);
        CheckErr(code);
        int coord[2];
        code = NextMove(coord);
        CheckErr(code);

        code = OpenCell(field, coord);

        system("cls");

        if (CheckErr(code)) continue;
        if (CheckGameStatus(field, code) == 2) break;
    }
    return 0;
}