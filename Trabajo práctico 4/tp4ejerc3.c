//) Lea 10 números por teclado, almacénelos en un array y muestre la suma, resta, multiplicación y división de todos.

#include <stdio.h>

int main() {
    int numeros[10];
    int suma = 0;
    int resta = 0;
    int multiplicacion = 1;  // Iniciar multiplicación con 1 porque es el elemento neutro multiplicativo
    float division; // Usamos float para manejar la división

    // Leer 10 números del teclado y almacenarlos en el array
    printf("Ingrese 10 números:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializar valores para las operaciones
    suma = numeros[0];
    resta = numeros[0];
    multiplicacion = numeros[0];
    division = (float)numeros[0]; // Convertir el primer número a float para la división

    // Calcular suma, resta, multiplicación y división
    for (int i = 1; i < 10; i++) {
        suma += numeros[i];
        resta -= numeros[i];
        multiplicacion *= numeros[i];
        if (numeros[i] != 0) { // Evitar división por cero
            division /= numeros[i];
        } else {
            printf("División por cero no permitida.\n");
            return 1; // Terminar el programa en caso de división por cero
        }
    }

    // Imprimir los resultados
    printf("Suma: %d\n", suma);
    printf("Resta: %d\n", resta);
    printf("Multiplicación: %d\n", multiplicacion);
    printf("División: %f\n", division);

    return 0;
}