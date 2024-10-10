//  Diseñar un programa que cargue un arreglo con veinte valores enteros.

#include <stdio.h>

int main() {
    int numeros[20];

    // Leer 20 números del teclado y almacenarlos en el array
    printf("Ingrese 20 números enteros:\n");
    for (int i = 0; i < 20; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Imprimir los números ingresados (para chequear que haya funcionado)
    printf("Los números ingresados son:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}