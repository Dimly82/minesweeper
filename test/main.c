#include "fieldTest.h"
#include "runTest.h"
#include "errorTest.h"
#include "interactionTests.h"
#include <stdio.h>

int main()
{
    char msg[100] = {};
    if (FieldTest(msg) == -1)
    {
        printf("\033[0;31m""FieldTest: %s\n""\033[0m", msg);

        return -1;
    }
    if (TestRun(msg)) {
        printf("\033[0;31m""RunTest: %s\n""\033[0m", msg);
        return -1;
    }
    if (InteractionTest(msg))
    {
        printf("\033[0;31m""InteractionTest: %s""\033[0m", msg);
        return -1;
    }
    if (TestCheckErr(msg))
    {
        printf("\033[0;31m""ErrorTest: %s""\033[0m", msg);
        return -1;
    }

    return 0;
}
