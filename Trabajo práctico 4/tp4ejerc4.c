// Escribir un programa que pida 10 números enteros por teclado, los cargue en un vector
//y que imprima por pantalla:
//i. Cuántos de esos números son pares.
//ii. Cuál es el valor del número máximo.
//iii. Cuál es el valor del número mínimo. 

#include <stdio.h>

int main() {
    int numeros[10];
    int pares = 0;
    int max, min;

    // Leer 10 números del teclado y almacenarlos en el vector
    printf("Ingrese 10 números enteros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializar max y min con el primer elemento del vector
    max = numeros[0];
    min = numeros[0];

    // Procesar los números
    for (int i = 0; i < 10; i++) {
        // Contar los números pares
        if (numeros[i] % 2 == 0) {
            pares++;
        }
        // Encontrar el número máximo
        if (numeros[i] > max) {
            max = numeros[i];
        }
        // Encontrar el número mínimo
        if (numeros[i] < min) {
            min = numeros[i];
        }
    }

    // Imprimir los resultados
    printf("Cantidad de números pares: %d\n", pares);
    printf("Número máximo: %d\n", max);
    printf("Número mínimo: %d\n", min);

    return 0;
}