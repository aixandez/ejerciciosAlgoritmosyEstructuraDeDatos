//ESCRIBIR UN PROGRAMA EN C QUE RECIBA DOS NÚMEROS DEL USUARIO REALICE LA SUMA Y LA MUESTRE POR PANTALLA. LA SUMA DEBERÁ HACERSE EN LA FUNCIÓN SUMA(),
//QUE RECIBIRÁ COMO PARÁMETROS POR REFERENCIA LOS NUM1 Y NUM2. EL RESULTADO DEBE IMPRIMIRSE DESDE LA FUNCIÓN

#include <stdio.h>

// Declaro la función para la suma
void suma(int *num1, int *num2, int *resultado);

int main() {
    int num1, num2, resultado;

    //Ingresar los dos numeros
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    // Llamo a la función suma pasando los números por referencia
    suma(&num1, &num2, &resultado);

    // Imprimir el resultado de la suma desde la función
    return 0;
}

// Defino lo que hace la función suma
void suma(int *num1, int *num2, int *resultado) {
    *resultado = *num1 + *num2;
    // Imprime el resultado
    printf("La suma de los numeros es: %d\n", *resultado);
}
