//Escribir un programa que lea un vector de 10 elementos. Deberá imprimir el mismo vector por pantalla pero invertido.
//Ejemplo: dado el vector 1 2 3 4 5 6 7 8 9 10 el programa debería imprimir 10 9 8 7 6 5 4 3 2 1.

#include <stdio.h>

int main() {
    int vector[10];

    // Leer los 10 elementos del vector desde el teclado
    printf("Ingrese 10 elementos del vector:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    // Imprimir el vector en orden inverso
    printf("Vector en orden inverso:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    return 0;
}