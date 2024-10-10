//UN MINISUPERMERCADO CUENTA CON DOS CAJERAS, CADA DÍA SE GUARDA EL TOTAL QUE CADA UNA DE LAS CAJERAS RECAUDO.
//AL FINAL DE LA SEMANA, SE REALIZA LA SUMA DEL TOTAL DE VENTAS DE CADA CAJERA Y A LA QUE MAYOR RECAUDACIÓN TIENE SE LE DA UN PREMIO.
//ADEMÁS, EL GERENTE DESEA CONOCER EL DÍA DE MENOR VENTA DE CADA CAJERA.
//ESCRIBIR UN PROGRAMA QUE PERMITA INGRESAR LA RECAUDACIÓN DIARIA DE CADA CAJERA, UTILIZANDO DOS VECTORES PARA ELLOS (CARGADOS DESDE UNA FUNCIÓN) Y LUEGO CREAR UNA FUNCIÓN QUE
//PERMITA DETERMINAR CUÁL ES LA CAJERA QUE RECIBIRÁ EL PREMIO, Y UNA TERCER FUNCIÓN QUE IMPRIMA EL DÍA DE MENOR VENTA DE CADA CAJERA.

#include <stdio.h>

#define DIAS_SEMANA 7  // Definir el número de días de la semana

// Declaración de las funciones
void cargarRecaudacionDiaria(int cajera[], int dias);
int calcularMayorRecaudacion(int cajera[], int dias);
void imprimirDiaMenorVenta(int cajera[], int dias);

int main() {
    int recaudacion_cajera1[DIAS_SEMANA];  // Vector para la recaudación diaria de la cajera 1
    int recaudacion_cajera2[DIAS_SEMANA];  // Vector para la recaudación diaria de la cajera 2
    int dia_menor_venta_cajera1, dia_menor_venta_cajera2;

    // Cargar la recaudación diaria de cada cajera
    printf("Ingrese la recaudacion diaria de la cajera 1:\n");
    cargarRecaudacionDiaria(recaudacion_cajera1, DIAS_SEMANA);

    printf("Ingrese la recaudacion diaria de la cajera 2:\n");
    cargarRecaudacionDiaria(recaudacion_cajera2, DIAS_SEMANA);

    // Determinar la cajera que recibirá el premio
    int cajera_premiada = calcularMayorRecaudacion(recaudacion_cajera1, DIAS_SEMANA);
    printf("La cajera que recibira el premio es la cajera %d.\n", cajera_premiada + 1);

    // Imprimir el día de menor venta de cada cajera
    printf("Dias de menor venta de cada cajera:\n");
    imprimirDiaMenorVenta(recaudacion_cajera1, DIAS_SEMANA);
    imprimirDiaMenorVenta(recaudacion_cajera2, DIAS_SEMANA);

    return 0;
}

// Definición de la función para cargar la recaudación diaria de cada cajera
void cargarRecaudacionDiaria(int cajera[], int dias) {
    for (int i = 0; i < dias; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%d", &cajera[i]);
    }
}

// Definición de la función para calcular la cajera con mayor recaudación
int calcularMayorRecaudacion(int cajera[], int dias) {
    int mayor_recaudacion = cajera[0];
    int cajera_premiada = 0;

    for (int i = 1; i < dias; i++) {
        if (cajera[i] > mayor_recaudacion) {
            mayor_recaudacion = cajera[i];
            cajera_premiada = i;
        }
    }

    return cajera_premiada;
}

// Definición de la función para imprimir el día de menor venta de cada cajera
void imprimirDiaMenorVenta(int cajera[], int dias) {
    int menor_venta = cajera[0];
    int dia_menor_venta = 1;

    for (int i = 1; i < dias; i++) {
        if (cajera[i] < menor_venta) {
            menor_venta = cajera[i];
            dia_menor_venta = i + 1;
        }
    }

    printf("  Dia de menor venta: %d\n", dia_menor_venta);
}
