#include "CheckError/ce.h"

#include <stdio.h>

// this defines are pretty locked up in this source file
#define true 1
#define false 0

char ce(char error_code) {
    if (error_code == CE_OK) {
        return true;
    }
    switch (error_code) {
    case CE_WRONG_INPUT:
        printf("[ERR] Wring input args");
        return false;

    case CE_NULL_PTR:
        printf("[ERR] Working with uninitialized ptr");
        return false;

    case CE_CALC:
        printf("[ERR] Detected invalid calculation");
        return false;

    default:
        printf("[ERR] Some error with code [%d]", error_code);
        return false;
    }
    //
    return false;
}
