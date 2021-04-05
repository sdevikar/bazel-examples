#include <iostream>
#include "gtest-example/include/common.h"

int main(void)
{
    char *current_time = getTime();
    std::cout << "Hello world! Current time is: " << current_time << std::endl;
    return 0;
}