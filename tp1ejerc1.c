#include <stdlib.h>
#include <stdio.h>

int main()
{
	char nombre [10];
	char apellido[10];
	int numero=0, edad=0;
	
	printf("Introduzca su nombre \n");
	scanf("%s", &nombre);
	printf("Introduzca su apellido \n");
	scanf("%s", &apellido);
	printf("Introduzca su numero de telefono \n");
	scanf("%d", &numero);
	printf("Introduzca su edad \n");
	scanf("%d", &edad);
	
	printf("Resultados \n");
	printf("Su nombre es: %s \n", nombre);
	printf("Su apellido es: %s \n", apellido);
	printf("Su numero de telefono es: %d \n", numero);
	printf("Su edad es: %d años \n", edad);
	
	return 0;
}
