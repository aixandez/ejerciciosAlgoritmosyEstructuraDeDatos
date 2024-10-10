// Dado el vector T de tamaño n. Si el tamaño es par invertir los elementos de la mitad de los elementos.

#include <stdio.h>

void imprimirVector(int T[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Leer el tamaño del vector
    printf("Ingrese el tamaño del vector (n): ");
    scanf("%d", &n);

    // Verificar si el tamaño es válido
    if (n <= 0) {
        printf("El tamaño del vector debe ser mayor que cero.\n");
        return 1;
    }

    int T[n];

    // Leer los elementos del vector
    printf("Ingrese los %d elementos del vector:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &T[i]);
    }

    // Imprimir el vector original
    printf("Vector original: ");
    imprimirVector(T, n);

    // Verificar si el tamaño es par
    if (n % 2 == 0) {
        // Invertir los elementos de la primera mitad del vector
        int mitad = n / 2;
        for (int i = 0; i < mitad / 2; i++) {
            int temp = T[i];
            T[i] = T[mitad - i - 1];
            T[mitad - i - 1] = temp;
        }
    } else {
        printf("El tamaño del vector no es par, no se realizará la inversión.\n");
        return 1;
    }

    // Imprimir el vector modificado
    printf("Vector modificado: ");
    imprimirVector(T, n);

    return 0;
}