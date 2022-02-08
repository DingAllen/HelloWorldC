#include <stdio.h>
#include <Windows.h>
// #include "dlltest/subtract.h"
// #pragma comment(lib, "dlltest.lib")

#define PRINTLNF(format, ...) printf(format"\n", ##__VA_ARGS__)

typedef int (*lpsubtract)(int,int);

int main() {

    HINSTANCE hModule = LoadLibrary("H:\\clion_projects\\HelloWorldC\\dlltest\\cmake-build-release\\dlltest.dll");
    lpsubtract subtract = (lpsubtract)GetProcAddress(hModule, "subtract");
    PRINTLNF("%d", subtract(2, 1));
    return 0;
}