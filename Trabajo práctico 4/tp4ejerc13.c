// Diseñar un programa que permita responder a las preguntas ¿Cuál es su nombre? Y ¿Qué edad tiene?
// Mostrar el resultado en pantalla (para almacenar el nombre debe utilizar un arreglo de tipo char p/ej.: char arraynombre[13] y usar scanf(“%s”, arraynombre ).

#include <stdio.h>

int main() {
    char arraynombre[13]; // Arreglo para almacenar el nombre (máximo 12 caracteres + '\0')
    int edad;             // Variable para almacenar la edad

    // Preguntar por el nombre y leerlo desde el teclado
    printf("¿Cuál es su nombre? ");
    scanf("%12s", arraynombre); // Leer el nombre, asegurándonos de no exceder el tamaño del arreglo

    // Preguntar por la edad y leerla desde el teclado
    printf("¿Qué edad tiene? ");
    scanf("%d", &edad); // Leer la edad

    // Mostrar el nombre y la edad en la pantalla
    printf("Su nombre es %s y tiene %d años.\n", arraynombre, edad);

    return 0;
}