// Escribir un programa que lea del teclado dos cadenas, las muestre en pantalla e informe si las cadenas ingresadas son iguales o no. 

#include <stdio.h>
#include <string.h> // Para la función strcmp

int main() {
    char cadena1[100];
    char cadena2[100];

    // Leer las dos cadenas desde el teclado
    printf("Ingrese la primera cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    printf("Ingrese la segunda cadena: ");
    fgets(cadena2, sizeof(cadena2), stdin);

    // Eliminar el carácter de nueva línea si está presente
    cadena1[strcspn(cadena1, "\n")] = '\0';
    cadena2[strcspn(cadena2, "\n")] = '\0';

    // Mostrar las cadenas ingresadas
    printf("Primera cadena: %s\n", cadena1);
    printf("Segunda cadena: %s\n", cadena2);

    // Comparar las cadenas
    if (strcmp(cadena1, cadena2) == 0) {
        printf("Las cadenas ingresadas son iguales.\n");
    } else {
        printf("Las cadenas ingresadas son diferentes.\n");
    }

    return 0;
}
