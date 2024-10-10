//Escribir un programa que lea una matriz de 3 filas y 3 columnas de valores enteros.
//A continuación, el programa debe pedir el número de una fila. El programa deberá devolver el máximo de esa fila

#include <stdio.h>

int main() {
    int matriz[3][3];
    int fila;

    // Leer los valores de la matriz
    printf("Ingrese los valores de una matriz de 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Pedir al usuario el número de una fila
    printf("Ingrese el número de la fila (0-2): ");
    scanf("%d", &fila);

    // Verificar que el número de fila sea válido
    if (fila < 0 || fila > 2) {
        printf("Número de fila inválido. Debe estar entre 0 y 2.\n");
        return 1;
    }

    // Encontrar el valor máximo de la fila indicada
    int maximo = matriz[fila][0];
    for (int j = 1; j < 3; j++) {
        if (matriz[fila][j] > maximo) {
            maximo = matriz[fila][j];
        }
    }

    // Devolver el valor máximo de la fila
    printf("El valor máximo de la fila %d es: %d\n", fila, maximo);

    return 0;
}