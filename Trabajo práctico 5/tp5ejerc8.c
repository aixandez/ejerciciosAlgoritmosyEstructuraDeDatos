//REALIZAR UNA FUNCIÓN LLAMADA ULTIMALETRA, QUE TOMA UNA CADENA DE HASTA 10 CARACTERES COMO PARÁMETRO, Y DEVUELVE EL ÚLTIMO CARÁCTER.

#include <stdio.h>

char ultimaLetra(char cadena[]);

int main() {
    char cadena[11];

    printf("Ingrese una cadena de hasta 10 caracteres: ");
    scanf("%s", cadena);

    char ultima = ultimaLetra(cadena);
    printf("El ultimo caracter de la cadena es: %c\n", ultima);

    return 0;
}

char ultimaLetra(char cadena[]) {
    int longitud = 0;

    // Calcular la longitud de la cadena
    while (cadena[longitud] != '\0' && longitud < 10) {
        longitud++;
    }

    // El último carácter está en la posición longitud - 1
    return cadena[longitud - 1];
}

