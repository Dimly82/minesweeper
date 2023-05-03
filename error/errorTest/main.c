#include "errorTest.h"

int main()
{
    char msg[100] = {};

    if (TestCheckErr(msg)) {
        printf("%s", msg);
    }

    return 0;
};