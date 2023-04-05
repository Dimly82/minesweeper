#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckErr(int code)
{
    if (code < 0)
    {
        switch (code)
        {
            case -1:
            {
                printf("\nYou entered wrong difficulty.\n");
                return true;
            }
            case -2:
            {
                printf("\nYou entered wrong difficulty.\nExploding your PC..\n");
                exit(-2);
            }
            case -3:
            {
                printf("\nYou entered coordinates outside the field.\n");
                return true;
            }
            default:
                printf("Unexpected error!\n");
                exit(-492606545);
        }

    }
    return false;
}