#include <stdio.h>
#include <stdlib.h>
#include "checkErr.h"

int CheckErr(int code)
{
    if (code < 0)
    {
        switch (code)
        {
            case -1:
            {
                printf("\nYou entered wrong difficulty.\n");
                return 1;
            }
            case -2:
            {
                printf("\nError while printing field.\nExploding your PC..\n");
                exit(-2);
            }
            case -3:
            {
                printf("\nYou entered coordinates outside the field.\n");
                return 1;
            }
            case -4:
            {
                printf("\nYou entered incorrect symbol.\n");
                return 1;
            }
            default:
                printf("Unexpected error!\n");
                exit(-492606545);
        }

    }
    return 0;
}