#include <stdio.h>
#include <string.h>

int fieldHeight1;

int DeclareVarsAg(int fieldH)
{
    fieldHeight1 = fieldH;
    return 0;
}

int PrintField(int array[][fieldHeight1])
{
    printf("\t");
    for (int i = 0; i < fieldHeight1; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
    for (int i = 0; i < fieldHeight1; i++)
    {
        printf("%d\t", i);
        for (int j = 0; j < fieldHeight1; j++)
        {
//            printf("%d\t", array[i][j]);
            switch (array[i][j] / 10)
            {
                case 1:
                {
                    printf("%c\t", 254);
                    break;
                }
                case 2:
                {
                    if (array[i][j] == 29) printf("%c\t", 233);
                    else printf("%d\t", array[i][j] % 10);
                    break;
                }
                default: return -2;
            }
        }
        printf("\n");
    }
//    for (int i = 0; i < 255; i++)
//    {
//        printf("%d%c\n", i, i);
//    }
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
