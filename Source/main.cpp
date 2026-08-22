#include <iostream>

#include "build.h"
#include "config.h"

int main(int, char**){
    #if QUARTZ_CONFIG_PRINT_HEADER
        std::cout << QUARTZ_BUILD_EXTRA_DETAILED << std::endl;
    #endif
}
