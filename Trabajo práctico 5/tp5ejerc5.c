//ESCRIBIR UN PROGRAMA EN C QUE PERMITA REALIZAR LA CARGA DE UN VECTOR DESDE LA FUNCIÓN CARGA(), Y LUEGO MOSTRAR CUAL ES EL MAYOR NUMERO DEL VECTOR,
//UTILIZANDO PARA ENCONTRARLO LA FUNCIÓN ENCONTRARMAX(), QUE NO DEBERÁ DEVOLVER NINGÚN VALOR. EL VALOR MAXIMO DEBERA SER INFORMADO EN EL CUERPO PRINCIPAL.

#include <stdio.h>

#define TAMANO_VECTOR 5  // Tamaño del vector

// Declaración de la función carga
void carga(int vector[], int tamano);

// Declaración de la función encontrarMax
void encontrarMax(int vector[], int tamano);

int main() {
    int vector[TAMANO_VECTOR];  // Vector de tamaño fijo
    int maximo;

    // Llamada a la función carga para cargar el vector
    carga(vector, TAMANO_VECTOR);

    // Llamada a la función encontrarMax para encontrar el máximo
    encontrarMax(vector, TAMANO_VECTOR);

    return 0;
}

// Definición de la función carga
void carga(int vector[], int tamano) {
    printf("Ingrese %d números para el vector:\n", tamano);
    for (int i = 0; i < tamano; i++) {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
}

// Definición de la función encontrarMax
void encontrarMax(int vector[], int tamano) {
    int maximo = vector[0];  // Asignar el primer elemento como máximo inicialmente

    // Encontrar el máximo en el vector
    for (int i = 1; i < tamano; i++) {
        if (vector[i] > maximo) {
            maximo = vector[i];
        }
    }

    // Mostrar el máximo encontrado
    printf("El máximo número del vector es: %d\n", maximo);
}
