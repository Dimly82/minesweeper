#include <stdlib.h>

int fieldSize1;
const int values[] = {10, 19, 20, 29};
const int sizeOfVals = 4;

int DeclareVars(int fieldH)
{
    fieldSize1 = fieldH;
    return 0;
}

int CountMinesAround(int field[][fieldSize1], int x, int y)
{

    if (field[x][y] == 19)
    {
        return 0;
    }

    int count = 0;

    for (int i = x - 1; i <= x + 1; i++)
    {
        for (int j = y - 1; j <= y + 1; j++)
        {
            // check if current element is within bounds of field
            if (i >= 0 && i < fieldSize1 && j >= 0 && j < fieldSize1)
            {
                if (field[i][j] == 19)
                {
                    count++;
                }
            }
        }
    }

    field[x][y] = 10 + count;

    return 0;
}

int GenerateField(int field[][fieldSize1], int quantityOfMines)
{
    int cell;
    int mineCount = 0;
    for (int i = 0; i < fieldSize1; i++)
    {
        for (int j = 0; j < fieldSize1; j++)
        {
            if (mineCount >= quantityOfMines) cell = values[0];
            else cell = values[rand() % (sizeOfVals / 2)];
            if (cell == values[1]) mineCount++;
            field[i][j] = cell;
        }
    }

    for (int i = 0; i < fieldSize1; i++)
    {
        for (int j = 0; j < fieldSize1; j++)
        {
            if (field[i][j] != values[1]) CountMinesAround(field, i, j);
        }
    }
    return 0;
}

int OpenAllCells(int field[][fieldSize1])
{
    for (int i = 0; i < fieldSize1; i++)
    {
        for (int j = 0; j < fieldSize1; j++)
        {
            field[i][j] += 10;
        }
    }
    return 0;
}


int OpenCell(int field[][fieldSize1], const int coord[])
{
    if (field[coord[0]][coord[1]] / 10 == 2) return -3;
    if ((coord[0] < 0) || (coord[0] >= fieldSize1) || (coord[1] < 0) || (coord[1] >= fieldSize1)) return -4;
    field[coord[0]][coord[1]] += 10;
    if (field[coord[0]][coord[1]] == 29)
    {
        OpenAllCells(field);
        return 1;
    }
    return 0;
}
