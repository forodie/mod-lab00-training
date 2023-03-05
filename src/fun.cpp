// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    if (n == 0) {
        return 1;
    }
    return x * power(x, n-1);
}
