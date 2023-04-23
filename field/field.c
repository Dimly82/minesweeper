#include <stdlib.h>
#include <time.h>
#include "field.h"

const int values[] = {10, 19, 20, 29};
const int sizeOfVals = 4;

int CountMinesAround(int field[], int fieldSize, int x, int y)
{

    if (field[x * fieldSize + y] == 19)
    {
        return 0;
    }

    int count = 0;

    for (int i = x - 1; i <= x + 1; i++)
    {
        for (int j = y - 1; j <= y + 1; j++)
        {
            if (i >= 0 && i < fieldSize && j >= 0 && j < fieldSize)
            {
                if (field[i * fieldSize + j] == 19)
                {
                    count++;
                }
            }
        }
    }

    field[x * fieldSize + y] = 10 + count;

    return 0;
}

int GenerateField(int field[], int fieldSize, int quantityOfMines)
{
    srand(time(NULL));

    int cell;
    int mineCount = 0;
    for (int i = 0; i < fieldSize; i++)
    {
        for (int j = 0; j < fieldSize; j++)
        {
            if (mineCount >= quantityOfMines) cell = values[0];
            else cell = values[rand() % (sizeOfVals / 2)];
            if (cell == values[1]) mineCount++;
            field[i * fieldSize + j] = cell;
        }
    }

    for (int i = 0; i < fieldSize; i++)
    {
        for (int j = 0; j < fieldSize; j++)
        {
            if (field[i * fieldSize + j] != values[1]) CountMinesAround(field, fieldSize, i, j);
        }
    }
    return 0;
}

int OpenAllCells(int field[], int fieldSize)
{
    for (int i = 0; i < fieldSize; i++)
    {
        for (int j = 0; j < fieldSize; j++)
        {
            if (field[i * fieldSize + j] <= 19)
            {
                field[i * fieldSize + j] += 10;
            }
        }
    }
    return 0;
}

int OpenEmptyNearbyCells(int field[], int fieldSize, int x, int y)
{
    for (int i = y - 1; i <= y + 1; i++)
    {
        for (int j = x - 1; j <= x + 1; j++)
        {
            if ((i < 0) || (i >= fieldSize) || (j < 0) || (j >= fieldSize) || (i == y && j == x)) continue;
            if (i == y && j == x) continue;
            if (field[i * fieldSize + j] / 10 == 2) continue;
            if (field[i * fieldSize + j] != 19 && field[i * fieldSize + j] != 29)
            {
                field[i * fieldSize + j] += 10;
                if (field[i * fieldSize + j] == 20) OpenEmptyNearbyCells(field, fieldSize, j, i);
            }
        }
    }
    return 0;
}

int OpenCell(int field[], int fieldSize, const int coord[])
{
    if ((coord[1] < 0) || (coord[1] >= fieldSize) || (coord[0] < 0) || (coord[0] >= fieldSize)) return -3;
    if (field[coord[1] * fieldSize + coord[0]] / 10 == 2) return 1;
    field[coord[1] * fieldSize + coord[0]] += 10;
    if (field[coord[1] * fieldSize + coord[0]] == 20)
    {
        OpenEmptyNearbyCells(field, fieldSize, coord[1], coord[0]);
    }
    if (field[coord[1] * fieldSize + coord[0]] == 29)
    {
        OpenAllCells(field, fieldSize);
        return 2;
    }
    for (int i = 0; i < fieldSize; i++)
    {
        for (int j = 0; j < fieldSize; j++)
        {
            if (((field[i * fieldSize + j] / 10) == 1 && field[i * fieldSize + j] != 19) || ((field[i * fieldSize + j] / 10) == 3 && field[i * fieldSize + j] != 39)) return 0;
        }
    }
    OpenAllCells(field, fieldSize);
    return 3;
}

int SetFlag(int field[], int fieldSize, const int coord[])
{
    if ((coord[1] < 0) || (coord[1] >= fieldSize) || (coord[0] < 0) || (coord[0] >= fieldSize)) return -3;
    if (field[coord[1] * fieldSize + coord[0]] / 10 == 2) return 1;
    if (field[coord[1] * fieldSize + coord[0]] / 10 == 1) field[coord[1] * fieldSize + coord[0]] += 20;
    else if (field[coord[1] * fieldSize + coord[0]] / 10 == 3) return 4;
    return 0;
}

int RemoveFlag(int field[], int fieldSize, const int coord[])
{
    if ((coord[1] < 0) || (coord[1] >= fieldSize) || (coord[0] < 0) || (coord[0] >= fieldSize)) return -3;
    if (field[coord[1] * fieldSize + coord[0]] / 10 == 2) return 1;
    if (field[coord[1] * fieldSize + coord[0]] / 10 == 3) field[coord[1] * fieldSize + coord[0]] -= 20;
    else if (field[coord[1] * fieldSize + coord[0]] / 10 == 1) return 5;
    return 0;
}
