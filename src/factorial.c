//
// Created by Administrator on 2022/2/1.
//

#include "../include/factorial.h"

unsigned int Factorial(unsigned int n) {

    if (n == 0) {
        return 1;
    } else {
        return n * Factorial(n - 1);
    }
}