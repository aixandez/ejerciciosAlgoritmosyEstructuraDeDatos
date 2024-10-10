//Escribir un programa que ingrese una palabra y a continuación muestre la palabra y la cantidad de letras que compone la palabra.

#include <stdio.h>
#include <string.h> // Para la función strlen

int main() {
    char palabra[100]; // Arreglo para almacenar la palabra

    // Leer la palabra desde el teclado
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    // Calcular la cantidad de letras en la palabra
    int longitud = strlen(palabra);

    // Mostrar la palabra y la cantidad de letras
    printf("La palabra \"%s\" tiene %d letras.\n", palabra, longitud);

    return 0;
}
