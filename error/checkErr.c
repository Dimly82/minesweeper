#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void CheckErr(int code, bool *flag
{
    if (code < 0)
    {
        switch (code)
        {
            case -1:
            {
                printf("\nYou entered wrong difficulty.\nExploding your PC...");
                exit(-1);
            }
        }
    }
}