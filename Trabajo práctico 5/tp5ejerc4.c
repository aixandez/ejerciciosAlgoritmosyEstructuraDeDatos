//CREAR UN PROGRAMA QUE CONTENGA UNA FUNCIÓN LLAMADA COPIARVECTOR()
//QUE RECIBA DOS VECTORES Y EL TAMAÑO DE LOS MISMOS (DEBEN SER DEL MISMO TAMAÑO) Y QUE CONSIGA COPIAR EN EL SEGUNDO VECTOR EL CONTENIDO DEL PRIMERO

//deberia pedir al usuario que ingrese los numeros o los ingreso yo en el programa???

#include <stdio.h>

#define TAMANO 5  // Definir un tamaño fijo para los vectores

// Declaración de la función copiarVector
void copiarVector(int *vector_origen, int *vector_destino);

int main() {
    int vector_origen[TAMANO] = {1, 2, 3, 4, 5};  // Primer vector
    int vector_destino[TAMANO];  // Segundo vector, inicialmente vacío

    // Llamada a la función copiarVector para copiar vector_origen a vector_destino
    copiarVector(vector_origen, vector_destino);

    // Imprimir los valores del vector copiado (vector_destino)
    printf("El segundo vector copiado es:\n");
    for (int i = 0; i < TAMANO; i++) {
        printf("%d ", vector_destino[i]);
    }
    printf("\n");

    return 0;
}

// Definición de la función copiarVector
void copiarVector(int *vector_origen, int *vector_destino) {
    for (int i = 0; i < TAMANO; i++) {
        vector_destino[i] = vector_origen[i];  // Copiar cada elemento de vector_origen a vector_destino
    }
}


//si el que ingresa los valores es el usuario deberia quedar asi:

#include <stdio.h>
#include <stdlib.h>  // Necesario para la función malloc

// Declaración de la función copiarVector
void copiarVector(int *vector_origen, int *vector_destino, int tamano);

int main() {
    int tamano;  // Variable para almacenar el tamaño de los vectores

    // Solicitar al usuario que ingrese el tamaño de los vectores
    printf("Ingrese el tamaño de los vectores: ");
    scanf("%d", &tamano);

    // Crear los vectores utilizando la función malloc
    int *vector_origen = (int *)malloc(tamano * sizeof(int));
    int *vector_destino = (int *)malloc(tamano * sizeof(int));

    // Comprobar si la memoria se asignó correctamente
    if (vector_origen == NULL || vector_destino == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;  // Salir del programa con un código de error
    }

    // Solicitar al usuario que ingrese los valores del primer vector
    printf("Ingrese los valores del primer vector:\n");
    for (int i = 0; i < tamano; i++) {
        printf("Ingrese el valor para la posición %d: ", i);
        scanf("%d", &vector_origen[i]);
    }

    // Llamada a la función copiarVector para copiar vector_origen a vector_destino
    copiarVector(vector_origen, vector_destino, tamano);

    // Imprimir los valores del segundo vector (vector_destino)
    printf("El segundo vector copiado es:\n");
    for (int i = 0; i < tamano; i++) {
        printf("%d ", vector_destino[i]);
    }
    printf("\n");

    // Liberar la memoria asignada a los vectores
    free(vector_origen);
    free(vector_destino);

    return 0;
}

// Definición de la función copiarVector
void copiarVector(int *vector_origen, int *vector_destino, int tamano) {
    for (int i = 0; i < tamano; i++) {
        vector_destino[i] = vector_origen[i];  // Copiar cada elemento de vector_origen a vector_destino
    }
}
