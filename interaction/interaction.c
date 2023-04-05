#include <stdio.h>
#include <string.h>
#include "interaction.h"

int PrintField(const int field[], int fieldSize)
{
    printf("\t");
    for (int i = 0; i < fieldSize; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
    for (int i = 0; i < fieldSize; i++)
    {
        printf("%d\t", i);
        for (int j = 0; j < fieldSize; j++)
        {
            switch (field[i * fieldSize + j] / 10)
            {
                case 1:
                {
                    printf("%c\t", 254);
                    break;
                }
                case 2:
                {
                    if (field[i * fieldSize + j] == 29) printf("%c\t", 207);
                    else printf("%d\t", field[i * fieldSize + j] % 10);
                    break;
                }
                default:
                    return -2;
            }
        }
        printf("\n");
    }
    return 0;
}

int LevelDifficulty()
{
    char difficulty[1000] = {};
    printf("Choose difficulty (easy/hard): ");
    scanf("%s", difficulty);

    if (strcmp(difficulty, "easy") == 0)
    {
        return 0;
    } else if (strcmp(difficulty, "hard") == 0)
    {
        return 1;
    } else
    {
        return -1;
    }
}

int NextMove(int arr[])
{
    printf("Enter the coordinates of the x point: ");
    scanf("%d", &arr[0]);
    printf("Enter the coordinates of the y point: ");
    scanf("%d", &arr[1]);
    return 0;
}

int CheckGameStatus(int field[], int fieldSize, int code)
{
    switch (code)
    {
        case 1:
        {
            printf("The cell is already open!\n");
            return 1;
        }
        case 2:
        {
            printf("You blew up :(\n");
            PrintField(field, fieldSize);
            return 2;
        }
        default:
            return 0;
    }
}
