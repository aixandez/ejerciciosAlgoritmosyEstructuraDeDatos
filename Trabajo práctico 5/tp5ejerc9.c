//REALIZAR UNA FUNCIÓN LLAMADA LETRAS, QUE TOMA UNA CADENA DE CARACTERES COMO PARÁMETRO, Y DEVUELVE UN NÚMERO ENTERO QUE ES EL NÚMERO DE CARACTERES QUE TIENE DICHA CADENA.

#include <stdio.h>

int letras(char cadena[]);

int main() {
    char cadena[100]; // Se asume que la cadena tiene como máximo 100 caracteres

    printf("Ingrese una cadena de caracteres: ");
    scanf("%s", cadena);

    int longitud = letras(cadena);
    printf("La cadena tiene %d caracteres.\n", longitud);

    return 0;
}

int letras(char cadena[]) {
    int longitud = 0;

    // Recorrer la cadena hasta encontrar el carácter nulo '\0'
    while (cadena[longitud] != '\0') {
        longitud++;
    }

    return longitud;
}
