#include <stdio.h>
#include "app.h"
#include "suma.h"

void run_app() {
    int a = 5;
    int b = 3;

    int resultado = suma(a, b);

    printf("Resultado de %d + %d = %d\n", a, b, resultado);
}