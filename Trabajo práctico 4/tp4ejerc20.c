// Diseñar un programa que ingrese dos matrices cuadradas y muestre un menú donde se puedan seleccionar estas distintas opciones,
// 1-sumar matrices, 2-multiplicar matrices, 3-salir del programa.#include <stdio.h>

// Función para leer una matriz cuadrada
void leerMatriz(int n, int matriz[n][n], int num) {
    printf("Ingrese los elementos de la matriz %d:\n", num);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Función para imprimir una matriz cuadrada
void imprimirMatriz(int n, int matriz[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Función para sumar dos matrices cuadradas
void sumarMatrices(int n, int matriz1[n][n], int matriz2[n][n], int resultado[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

// Función para multiplicar dos matrices cuadradas
void multiplicarMatrices(int n, int matriz1[n][n], int matriz2[n][n], int resultado[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < n; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

int main() {
    int n;
    printf("Ingrese el tamaño de las matrices cuadradas: ");
    scanf("%d", &n);

    int matriz1[n][n], matriz2[n][n], resultado[n][n];

    // Leer las dos matrices
    leerMatriz(n, matriz1, 1);
 
