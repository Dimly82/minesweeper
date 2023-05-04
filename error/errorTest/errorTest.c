#include "errorTest.h"
#include <stdio.h>
#include <string.h>

char arr[100] = {};

inline void PrintError(char arr1[]) {
    strcpy(arr, arr1);
}

int TestCheckErr(char msg[]) {

    struct ErrorText errors[6] = {
            {0, ""},
            {-1, "\nYou entered wrong difficulty.\n"},
            {-2, "\nError while printing field.\nExploding your PC..\n"},
            {-3, "\nYou entered coordinates outside the field.\n"},
            {-4, "\nYou entered incorrect symbol.\n"},
            {-5, "Unexpected error!\n"},
    };


    if (CheckErr(0)) {
        sprintf(msg, "TestCheckErr: checkErr returned %d; expected 0\n", CheckErr(0));
        return 1;
    }

    for (int i = 1; i < 6; i++) {
        CheckErr(errors[i].code);
        if (strcmp(arr, errors[i].text) != 0) {
            sprintf(msg, "TestCheckErr: checkErr returned %s; expected %s\n", arr, errors[i].text);
            return 1;
        }
    }

    return 0;
}