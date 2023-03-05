// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    int64_t z = 1;

    for (std::size_t i = 0; i < n; i++) {
        z *= x;
    }

    return z;
}
