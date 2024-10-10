//ESCRIBIR UN PROGRAMA QUE CARGUE 100 NÚMEROS ALEATORIAMENTE EN UN VECTOR. UTILIZANDO LA FUNCIÓN CONTAR(), INDICAR CUANTOS NÚMEROS PARES HAY EN EL VECTOR Y CUANTOS IMPARES.

//este ejercicio no lo entendiiiii

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANO_VECTOR 100  // Tamaño del vector

// Declaración de la función contar
void contar(int vector[], int tamano, int *pares, int *impares);

int main() {
    int vector[TAMANO_VECTOR];  // Vector de tamaño fijo
    int pares = 0, impares = 0;

    // Semilla para generar números aleatorios
    srand(time(NULL));

    // Cargar números aleatorios en el vector
    for (int i = 0; i < TAMANO_VECTOR; i++) {
        vector[i] = rand() % 1000;  // Generar números aleatorios entre 0 y 999
    }

    // Llamada a la función contar para contar números pares e impares
    contar(vector, TAMANO_VECTOR, &pares, &impares);

    // Mostrar el resultado
    printf("En el vector hay %d números pares y %d números impares.\n", pares, impares);

    return 0;
}

// Definición de la función contar
void contar(int vector[], int tamano, int *pares, int *impares) {
    for (int i = 0; i < tamano; i++) {
        if (vector[i] % 2 == 0) {
            (*pares)++;
        } else {
            (*impares)++;
        }
    }
}
