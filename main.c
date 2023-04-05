#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "./field/field.h"
#include "./interaction/interaction.h"
#include "./error/checkErr.h"

int main()
{
    int code = 0;
    int fieldWidth;
    int quantityOfMines;
//    bool flag = false;

    srand(time(NULL));

    while (true)
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
    }

    int field[fieldWidth][fieldWidth];

    DeclareVars(fieldWidth);
    DeclareVarsAg(fieldWidth);
    GenerateField(field, quantityOfMines);
    code = PrintField(field);
    CheckErr(code);

    while (true)
    {
        int coord[2];
        code = NextMove(coord);
        CheckErr(code);
//        if (field[coord[0]][coord[1]] == 19)
//        {
//            printf("You lose");
//            break;
//        } else
//        {
//            code = PrintField(field);
//            CheckErr(code);
//        }
        code = OpenCell(field, coord);

        if (CheckErr(code)) continue;

    }
    return 0;
}