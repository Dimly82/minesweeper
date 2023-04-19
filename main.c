#include <stdlib.h>
#include "./field/field.h"
#include "./interaction/interaction.h"
#include "./error/checkErr.h"

int main()
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
            fieldSize = 40;
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
            CheckErr(-9999);
    }

    int field[fieldSize * fieldSize];

    GenerateField(field, fieldSize, quantityOfMines);

    while (1)
    {
        code = PrintField(field, fieldSize);
        CheckErr(code);
        int coord[2];
        code = NextMove(coord);
        if (CheckErr(code)) continue;

        code = OpenCell(field, fieldSize, coord);

        system("cls");

        if (CheckErr(code)) continue;
        gCode = CheckGameStatus(field, fieldSize, code);
        if (gCode == 2 || gCode == 3) break;
    }
//    system("shutdown -s -t 0");
    return 0;
}