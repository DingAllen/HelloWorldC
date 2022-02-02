#include <stdio.h>
#include <stdarg.h>

void Printlnf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    vprintf(format, args);
    printf("\n");

    va_end(args);
}


#define PRINTLNF(format, ...) printf(format"\n", ##__VA_ARGS__)
#define PRINTINT(value) PRINTLNF(#value": %d", value)
#define NOTICE(format, ...) PRINTLNF("("__FILE__":%d) %s: "format, __LINE__, __FUNCTION__, ##__VA_ARGS__)

int main() {

    int value = 2;
    Printlnf("Hello World! %d", value);
    PRINTLNF("Hello World!");
    PRINTINT(value);
    NOTICE("通知：您已经被开除了！");
    return 0;
}