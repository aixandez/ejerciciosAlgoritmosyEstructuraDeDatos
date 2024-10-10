//ESCRIBIR UN PROGRAMA EN C QUE PERMITA REALIZAR LA CARGA DE UN VECTOR DESDE LA FUNCIÓN CARGA(), Y LUEGO MUESTRE LOS VALORES IMPRIMIÉNDOLOS DESDE EL CUERPO PRINCIPAL.

#include <stdio.h>

// Declaro a la función carga
void carga(int *vector);

int main() {
    int vector[10];  // Hacemos un vector de tamaño 10

    // Llamada a la función carga pasando el vector por referencia
    carga(vector);

    // Imprimir los valores del vector desde el cuerpo principal
    printf("Los valores del vector son:\n");
    for (int i = 0; i < 10; i++) { // El 10 es por el tamaño del vector 
        printf("%d ", vector[i]);
    }
    printf("\n");

    return 0;
}

// Definición de la función carga
void carga(int *vector) {
    for (int i = 0; i < 10; i++) {  // Usamos el tamaño fijo 10
        printf("Ingrese el valor para la posición %d: ", i);
        scanf("%d", &vector[i]);
    }
}
