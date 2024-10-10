// Dado un vector de 10 elementos ={1, 2, 3, 4, 4, 7, 8, 9, 5, 4}, escribir un programa en C (haciendo uso de puntero) que muestre las direcciones de memoria de cada elemento del vector

#include <stdio.h>

int main() {
    // Declarar e inicializar el vector
    int vector[10] = {1, 2, 3, 4, 4, 7, 8, 9, 5, 4};

    // Declarar un puntero
    int *ptr;

    // Recorrer el vector usando el puntero y mostrar las direcciones de memoria
    for (int i = 0; i < 10; i++) {
        ptr = &vector[i];
        printf("Dirección de memoria del elemento vector[%d] = %p\n", i, (void *)ptr);
    }

    return 0;
}
