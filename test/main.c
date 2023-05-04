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
        printf("FieldTest: %s\n", msg);
        return -1;
    }
    if (TestRun(msg)) {
        printf("RunTest: %s\n", msg);
        return -1;
    }
//    if (InteractionTest(msg))
//    {
//        printf("InteractionTest: %s", msg);
//        return -1;
//    }
//    if (TestCheckErr(msg))
//    {
//        printf("ErrorTest: %s", msg);
//        return -1;
//    }

    return 0;
}
