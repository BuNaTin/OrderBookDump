#include "CheckError/ce.h"

#include <stdio.h>

char ce(char error_code) {
    if (error_code == 0) {
        return 1;
    }
    printf("Some error [%d]", error_code);

    return 0;
}
