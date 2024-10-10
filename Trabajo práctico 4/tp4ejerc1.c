// Rellene un array con los números pares comprendidos entre 1 y 100 y muéstrelos en pantalla en orden ascendente. 
#include <stdio.h>

int main() {
    int pares[50]; // Hay 50 números pares entre 1 y 100
    int index = 0;

    // Rellenar el array con los números pares entre 1 y 100
    for (int i = 2; i <= 100; i += 2) {
        pares[index] = i;
        index++;
    }

    // Mostrar los números pares en orden ascendente
    printf("Números pares entre 1 y 100:\n");
    for (int i = 0; i < 50; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");

    return 0;
}