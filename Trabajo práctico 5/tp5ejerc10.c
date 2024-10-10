//ESCRIBIR UNA FUNCIÓN LLAMADA "CANTIDAD" QUE RECIBA COMO PARÁMETROS UN NÚMERO ENTERO Y UNA CADENA
//Y QUE LUEGO DIGA SI LA CADENA TIENE LA MISMA CANTIDAD DE LETRAS QUE EL NÚMERO ENTERO INGRESADO.

#include <stdio.h>
#include <string.h>

int cantidad(int numero, char cadena[]);

int main() {
    char cadena[100]; // Se asume que la cadena tiene como máximo 100 caracteres
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    printf("Ingrese una cadena de caracteres: ");
    scanf("%s", cadena);

    if (cantidad(numero, cadena)) {
        printf("La cadena tiene la misma cantidad de letras que el numero.\n");
    } else {
        printf("La cadena no tiene la misma cantidad de letras que el numero.\n");
    }

    return 0;
}

int cantidad(int numero, char cadena[]) {
    int longitud = strlen(cadena);

    return (longitud == numero);
}
