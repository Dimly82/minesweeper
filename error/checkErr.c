#include <stdio.h>
#include <stdlib.h>
#include "checkErr.h"
#include "interaction.h"

int CheckErr(int code)
{
    if (code < 0)
    {
        switch (code)
        {
            case -1:
            {
                char error[] = "You entered wrong difficulty.";
                PrintError(error);
                return 1;
            }
            case -2:
            {
                char error[] = "Error while printing field. Exploding your PC..";
                PrintError(error);
                return -2;
            }
            case -3:
            {
                char error[] = "You entered coordinates outside the field.";
                PrintError(error);
                return 1;
            }
            case -4:
            {
                char error[] = "You entered incorrect symbol.";
                PrintError(error);
                return 1;
            }
            default:
            {
                char error[] = "Unexpected error!";
                PrintError(error);
                return -999;
            }
        }

    }
    return 0;
}