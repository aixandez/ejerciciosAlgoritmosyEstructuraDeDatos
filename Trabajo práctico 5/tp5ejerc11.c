// ESCRIBIR UNA FUNCIÓN PARA TRANSFORMAR UN NÚMERO ENTERO EN UNA CADENA DE CARACTERES FORMADA POR LOS DÍGITOS DEL NÚMERO ENTERO. POR EJEMPLO SE INGRESA 478 MUESTRA CUATRO SIETE OCHO

//este anda mal no se xq

#include <stdio.h>
#include <string.h>

void numeroACadena(int numero, char cadena[]);

int main() {
    int numero;
    char cadena[50]; // Longitud máxima de la cadena

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    numeroACadena(numero, cadena);

    printf("La cadena formada por los digitos del numero es: %s\n", cadena);

    return 0;
}

void numeroACadena(int numero, char cadena[]) {
    char temp[50]; // Cadena temporal para almacenar los dígitos convertidos a letras
    int indice = 0; // Índice para recorrer la cadena temporal

    // Caso especial: si el número es 0, simplemente ponemos 'Cero' en la cadena
    if (numero == 0) {
        strcpy(cadena, "Cero");
        return;
    }

    // Convertir cada dígito del número en su representación en letras
    while (numero > 0) {
        int digito = numero % 10;
        switch (digito) {
            case 0:
                strcpy(temp + indice, "Cero ");
                break;
            case 1:
                strcpy(temp + indice, "Uno ");
                break;
            case 2:
                strcpy(temp + indice, "Dos ");
                break;
            case 3:
                strcpy(temp + indice, "Tres ");
                break;
            case 4:
                strcpy(temp + indice, "Cuatro ");
                break;
            case 5:
                strcpy(temp + indice, "Cinco ");
                break;
            case 6:
                strcpy(temp + indice, "Seis ");
                break;
            case 7:
                strcpy(temp + indice, "Siete ");
                break;
            case 8:
                strcpy(temp + indice, "Ocho ");
                break;
            case 9:
                strcpy(temp + indice, "Nueve ");
                break;
        }
        indice += strlen(temp + indice);
        numero /= 10;
    }

    // Agregar el terminador nulo al final de la cadena temporal
    temp[indice] = '\0';

    // Invertir la cadena temporal para obtener los dígitos en el orden correcto
    int longitud = strlen(temp);
    for (int i = 0; i < longitud; i++) {
        cadena[i] = temp[longitud - i - 1];
    }

    // Agregar el terminador nulo al final de la cadena resultante
    cadena[longitud] = '\0';
}
