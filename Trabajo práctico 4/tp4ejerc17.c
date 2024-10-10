// scribir un programa que lea del teclado una cadena y muestre en la pantalla la cantidad de consonantes y de vocales que contiene.

#include <stdio.h>
#include <ctype.h> // Para la función tolower()

int main() {
    char cadena[100]; // Arreglo para almacenar la cadena
    int vocales = 0, consonantes = 0; // Contadores de vocales y consonantes

    // Leer la cadena desde el teclado
    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    // Recorrer la cadena y contar vocales y consonantes
    for (int i = 0; cadena[i] != '\0' && cadena[i] != '\n'; i++) {
        char c = tolower(cadena[i]); // Convertir el carácter a minúscula

        if (c >= 'a' && c <= 'z') { // Verificar si es una letra
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vocales++;
            } else {
                consonantes++;
            }
        }
    }

    // Imprimir los resultados
    printf("La cadena contiene %d vocales y %d consonantes.\n", vocales, consonantes);

    return 0;
}