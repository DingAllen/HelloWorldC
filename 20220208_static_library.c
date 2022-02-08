#include <stdio.h>
#include "staticlibtest/add.h"
#pragma comment(lib, "H:\\clion_projects\\HelloWorldC\\staticlibtest\\cmake-build-release\\staticlibtest.lib")

#define PRINTLNF(format, ...) printf(format"\n", ##__VA_ARGS__)

int main() {

    PRINTLNF("%d", add(2, 1));
    return 0;
}