#include "errorTest.h"
#include <stdio.h>
#include <string.h>


//inline void PrintError(char *arr1) {
//    strcpy(arr, arr1);
//}

int TestCheckErr(char msg[]) {

    struct ErrorText errors[6] = {
            {0, ""},
            {-1, "\fYou entered wrong difficulty."},
            {-2, "\fError while printing field. Exploding your PC.."},
            {-3, "\fYou entered coordinates outside the field."},
            {-4, "\fYou entered incorrect symbol."},
            {-5, "\fUnexpected error!"},
    };


    if (CheckErr(0)) {
        sprintf(msg, "TestCheckErr: checkErr returned %d; expected 0", CheckErr(0));
        return 1;
    }
    for (int i = 1; i < 6; i++) {
        freopen("for_errorTest.txt","w+",stdout);
        CheckErr(errors[i].code);
        freopen("CON","w",stdout);
        char arr[100] = {};
        FILE *file_res;
        FILE *file_exp;
        file_res = fopen("for_errorTest.txt", "r");
        fgets(arr, 100, file_res);
        if (strcmp(arr, errors[i].text) != 0) {
            sprintf(msg, "TestCheckErr: checkErr returned <%s>; expected <%s>\n", arr, errors[i].text);
            return 1;
        }
        fclose(file_res);
    }

    return 0;
}