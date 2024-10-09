#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, e, f; // Coeficientes de las ecuaciones

    printf("Ingrese los coeficientes de la primera ecuación (ax + by = c):\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Ingrese los coeficientes de la segunda ecuación (dx + ey = f):\n");
    scanf("%d %d %d", &d, &e, &f);

    printf("Buscando soluciones por fuerza bruta...\n");

    for (int x = -1000; x <= 1000; x++) {
        for (int y = -1000; y <= 1000; y++) {
            if (a * x + b * y == c && d * x + e * y == f) {
                printf("Solución encontrada: x = %d, y = %d\n", x, y);
                return 0; // Terminar el programa después de encontrar una solución
            }
        }
    }

    printf("No se encontraron soluciones dentro del rango dado.\n");

    return 0;
}
