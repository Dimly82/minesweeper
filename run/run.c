#include "run.h"
#include <stdlib.h>
#include "field.h"
#include "interaction.h"
#include "checkErr.h"

void run()
{
    int code;
    int gCode;
    int fieldSize = 0;
    int quantityOfMines = 0;

    while (1)
    {
        code = LevelDifficulty();
        if (!CheckErr(code)) break;
    }


    switch (code)
    {
        case 0:
        {
            fieldSize = 9;
            quantityOfMines = 10;
            break;
        }
        case 1:
        {
            fieldSize = 16;
            quantityOfMines = 40;
            break;
        }
        default:
            CheckErr(-999);
            return;

    }

    int field[fieldSize * fieldSize];

    GenerateField(field, fieldSize, quantityOfMines);

    while (1)
    {
        code = PrintField(field, fieldSize, &quantityOfMines);
        if (CheckErr(code) == -2 || CheckErr(code) == -999) return;

        int coord[2];
        code = NextMove(coord);
        if (CheckErr(code) == -2 || CheckErr(code) == -999) return;
        if (CheckErr(code)) continue;

        switch (code)
        {
            case 0:
            {
                code = OpenCell(field, fieldSize, coord);
//                if (CheckErr(code) == -2 || CheckErr(code) == -999) return;
                if (CheckErr(code)) continue;
                break;
            }
            case 1:
            {
                code = SetFlag(field, fieldSize, coord, &quantityOfMines);
//                if (CheckErr(code) == -2 || CheckErr(code) == -999) return;
                if (CheckErr(code)) continue;
                break;
            }
            case 2:
            {
                code = RemoveFlag(field, fieldSize, coord, &quantityOfMines);
//                if (CheckErr(code) == -2 || CheckErr(code) == -999) return;
                if (CheckErr(code)) continue;
                break;
            }
            case 3:
            {
                CheckGameStatus(field, fieldSize, 6);
                return;
            }
            default:
                CheckErr(-9999);
                return;
        }

        system("cls");
        gCode = CheckGameStatus(field, fieldSize, code);
        if (gCode == 2 || gCode == 3) break;
    }

}