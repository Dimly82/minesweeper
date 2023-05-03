#include <stdio.h>
#include <string.h>
#include "../checkErr.h"

struct ErrorText {
    int code;
    char text[100];
};

int TestCheckErr(char *msg);