#include "fieldTest.h"

int TestCheckForWin(char msg[]) {
    int fieldSize = 2;
    int field[] = {20, 39, 20, 39};
    if (!CheckForWin(field, fieldSize)) {
        sprintf(msg, "TestCheckForWin: CheckForWin returned 0, expected 1");
        return -1;
    }
    return 0;
}

int TestGenerateField(char msg[]) {
    int fieldSize = 4;
    int field[fieldSize * fieldSize];
    GenerateField(field, fieldSize, fieldSize);
    int count = 0;
    for (int i = 0; i < fieldSize * fieldSize; i++) {
        if (field[i] == 19) count++;
    }
    if (count != fieldSize) {
        sprintf(msg, "TestGenerateField: GenerateField generated %d mines, expected %d", count, fieldSize);
        return -1;
    }
    return 0;
}

int TestOpenAllCells(char msg[]) {
    int fieldSize = 4;
    int field[] = {12, 19, 29, 10,
                   10, 10, 10, 10,
                   10, 10, 10, 10,
                   10, 10, 10, 10};
    OpenAllCells(field, fieldSize);
    for (int i = 0; i < fieldSize * fieldSize; i++) {
        if (field[i] / 10 != 2) {
            sprintf(msg, "TestOpenAllCells: Did not open all cells");
            return -1;
        }
    }
    return 0;
}

int TestOpenEmptyNearbyCells(char msg[]) {
    int fieldSize = 4;
    int field[] = {11, 19, 19, 11,
                   11, 12, 12, 11,
                   11, 11, 20, 10,
                   19, 11, 10, 10};
    int expected[] = {11, 19, 19, 11,
                      11, 22, 22, 21,
                      11, 21, 20, 20,
                      19, 21, 20, 20};
    OpenEmptyNearbyCells(field, fieldSize, 2, 2);
    for (int i = 0; i < fieldSize * fieldSize; i++) {
        if (field[i] != expected[i]) {
            sprintf(msg, "TestOpenEmptyNearbyCells: Did not open all empty cells");
            return -1;
        }
    }
    return 0;
}

int TestOpenCell(char msg[]) {
    int fieldSize = 4;
    int field[] = {11, 19, 19, 11,
                   11, 12, 12, 11,
                   11, 11, 20, 10,
                   19, 11, 10, 10};
    int expected[] = {21, 19, 19, 11,
                      11, 12, 12, 11,
                      11, 11, 10, 10,
                      19, 11, 10, 10};
    int coord[] = {0, 0};
    OpenCell(field, fieldSize, coord);
    if (field[coord[0] * fieldSize + coord[1]] != expected[coord[0] * fieldSize + coord[1]]) {
        sprintf(msg, "TestOpenCell: Did not open cell");
        return -1;
    }
    return 0;
}

int TestSetFlag(char msg[]) {
    int fieldSize = 2;
    int quantityOfMines = 2;
    int field[] = {11, 19, 19, 11};
    int expected[] = {11, 39, 19, 11};
    int coord[] = {1, 0};
    SetFlag(field, fieldSize, coord, &quantityOfMines);
    if (field[coord[0] * fieldSize + coord[1]] != expected[coord[0] * fieldSize + coord[1]]) {
        sprintf(msg, "TestSetFlag: Did not set flag");
        return -1;
    }
    if (quantityOfMines != 1) {
        sprintf(msg, "TestSetFlag: Did not decrement quantityOfMines");
        return -1;
    }
    return 0;
}

int TestRemoveFlag(char msg[]) {
    int fieldSize = 2;
    int quantityOfMines = 1;
    int field[] = {11, 39, 19, 11};
    int expected[] = {11, 19, 19, 11};
    int coord[] = {1, 0};
    RemoveFlag(field, fieldSize, coord, &quantityOfMines);
    if (field[coord[0] * fieldSize + coord[1]] != expected[coord[0] * fieldSize + coord[1]]) {
        sprintf(msg, "TestSetFlag: Did not remove flag");
        return -1;
    }
    if (quantityOfMines != 2) {
        sprintf(msg, "TestRemoveFlag: Did not increment quantityOfMines");
        return -1;
    }
    return 0;
}