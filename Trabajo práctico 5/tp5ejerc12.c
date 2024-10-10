// REALIZAR UNA FUNCIÓN QUE TOME COMO PARÁMETRO UN NOMBRE Y DEVUELVA “HOLA <NOMBRE>”.

#include <stdio.h>
#include <string.h>

void saludar(const char nombre[]) {
    printf("Hola %s\n", nombre);
}

int main() {
    char nombre[20];
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);

    saludar(nombre);

    return 0;
}
