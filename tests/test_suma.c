#include <stdio.h>
#include "suma.h"

int main() {

    int resultado = suma(2,3);

    if(resultado == 5) {
        printf("Test OK\n");
        return 0;
    }

    printf("Test FAIL\n");
    return 1;
}