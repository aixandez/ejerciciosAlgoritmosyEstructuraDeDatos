//ESCRIBIR UN PROGRAMA EN C QUE PERMITA INGRESAR LAS TRES NOTAS DE UN ALUMNO, CALCULAR EL PROMEDIO E INFORME SI ESTA APROBADO O DESAPROBADO.
//EL PROMEDIO DEBERÁ CALCULARSE EN LA FUNCIÓN PROMEDIO(), QUE RECIBIRÁ POR REFERENCIA LAS NOTAS Y DEBERÁ RETORNAR EL VALOR DEL PROMEDIO PARA EVALUAR LA CONDICIÓN EN EL CUERPO PRINCIPAL.

#include <stdio.h>

// Declaro la función para calcular el promedio
float promedio(int *nota1, int *nota2, int *nota3);

int main() {
    int nota1, nota2, nota3;
    float prom;

    // Se ingresan las tres notas del alumno
    printf("Ingrese la primera nota: ");
    scanf("%d", &nota1);
    printf("Ingrese la segunda nota: ");
    scanf("%d", &nota2);
    printf("Ingrese la tercera nota: ");
    scanf("%d", &nota3);

    // Llamo a la función promedio pasando las notas por referencia
    prom = promedio(&nota1, &nota2, &nota3);

    // Mostrar si está aprobado o desaprobado dependiendo del promedio que tenga
    if (prom >= 6.0) {
        printf("El alumno está aprobado con un promedio de %.2f\n", prom);
    } else {
        printf("El alumno está desaprobado con un promedio de %.2f\n", prom);
    }

    return 0;
}

// Defino la función promedio
float promedio(int *nota1, int *nota2, int *nota3) {
    // Calculo el promedio
    float prom = (*nota1 + *nota2 + *nota3) / 3;
    return prom;
}
