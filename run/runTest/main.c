#include "runTest.h"

int main()
{
    char msg[100] = {};
    if(TestRun(msg))
    {
        printf("%s\n", msg);
        return 1;
    }
    return 0;
}