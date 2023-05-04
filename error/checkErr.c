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
                char error[] = "\nYou entered wrong difficulty.\n";
                PrintError(error);
                return 1;
            }
            case -2:
            {
                char error[] = "\nError while printing field.\nExploding your PC..\n";
                PrintError(error);
                return -2;
            }
            case -3:
            {
                char error[] = "\nYou entered coordinates outside the field.\n";
                PrintError(error);
                return 1;
            }
            case -4:
            {
                char error[] = "\nYou entered incorrect symbol.\n";
                PrintError(error);
                return 1;
            }
            default:
            {
                char error[] = "Unexpected error!\n";
                PrintError(error);
                return -999;
            }
        }

    }
    return 0;
}