#include <iostream>
#include <assert.h>
#include <array>
#include "test_array.h"

using namespace std;

int main(int args, char** argc)
{    
    TestArray arrayTests = TestArray();
    arrayTests.Run();
    return 0;
}
