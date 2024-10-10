#include <stdio.h>

int main () {
	int precio, cantidad, total;
	char nombre[10];
	
	printf("ingrese nombre del producto: \n");
	scanf("%s", &nombre);
	printf("ingrese precio del producto: \n");
	scanf("%i", &precio);
	printf("ingrese cantidad de unidades: \n");
	scanf("%i", &cantidad);
	
	total = precio * cantidad;
	printf("El total a pagar es de $:%i \n", total);
	
	return 0;
}
