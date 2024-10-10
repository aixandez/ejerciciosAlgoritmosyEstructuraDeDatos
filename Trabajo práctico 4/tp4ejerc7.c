// Dado un vector de 20 números. Hallar el promedio de los elementos positivos y el porcentaje de los negativos.

#include <stdio.h>

int main() {
    int numeros[20];
    int sumaPositivos = 0;
    int cuentaPositivos = 0;
    int cuentaNegativos = 0;

    // Leer 20 números del teclado y almacenarlos en el array
    printf("Ingrese 20 números:\n");
    for (int i = 0; i < 20; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Procesar los números
    for (int i = 0; i < 20; i++) {
        if (numeros[i] > 0) {
            sumaPositivos += numeros[i];
            cuentaPositivos++;
        } else if (numeros[i] < 0) {
            cuentaNegativos++;
        }
    }

    // Calcular el promedio de los números positivos
    double promedioPositivos = 0.0;
    if (cuentaPositivos > 0) {
        promedioPositivos = (double)sumaPositivos / cuentaPositivos;
    }

    // Calcular el porcentaje de números negativos
    double porcentajeNegativos = ((double)cuentaNegativos / 20) * 100;

    // Imprimir los resultados
    printf("Promedio de los números positivos: %.2f\n", promedioPositivos);
    printf("Porcentaje de los números negativos: %.2f%%\n", porcentajeNegativos);

    return 0;
}