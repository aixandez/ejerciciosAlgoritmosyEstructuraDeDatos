// Escribir un programa que lea una matriz de números enteros y que devuelva la suma de los elementos positivos de la matriz y la suma de los elementos negativos

#include <stdio.h>

int main() {
    int filas, columnas;

    // Solicitar el tamaño de la matriz
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    int matriz[filas][columnas]; // Declarar la matriz
    int sumaPositivos = 0;       // Variable para la suma de elementos positivos
    int sumaNegativos = 0;       // Variable para la suma de elementos negativos

    // Leer los valores de la matriz
    printf("Ingrese los valores de la matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            // Calcular las sumas de los elementos positivos y negativos
            if (matriz[i][j] > 0) {
                sumaPositivos += matriz[i][j];
            } else if (matriz[i][j] < 0) {
                sumaNegativos += matriz[i][j];
            }
        }
    }

    // Imprimir los resultados
    printf("La suma de los elementos positivos es: %d\n", sumaPositivos);
    printf("La suma de los elementos negativos es: %d\n", sumaNegativos);

    return 0;
}