// Calcular e informar el promedio de los valores y el producto de los mismos.

#include <stdio.h>

int main() {
    int numeros[20];
    int suma = 0;
    long long producto = 1; // Usar un tipo más grande para evitar el desbordamiento
    double promedio;

    // Leer 20 números del teclado y almacenarlos en el array (lo mismo del punto anterior)
    printf("Ingrese 20 números enteros:\n");
    for (int i = 0; i < 20; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Calcular la suma y el producto de los valores
    for (int i = 0; i < 20; i++) {
        suma += numeros[i];
        producto *= numeros[i];
    }

    // Calcular el promedio
    promedio = (double)suma / 20;

    // Imprimir los resultados
    printf("El promedio de los valores es: %.2f\n", promedio);
    printf("El producto de los valores es: %lld\n", producto);

    return 0;
}