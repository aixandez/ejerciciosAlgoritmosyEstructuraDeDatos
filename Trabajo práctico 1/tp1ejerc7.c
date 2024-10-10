#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a;
	
	printf("Introducir el importe \n");
	scanf("%f", &a);
	
	printf("El 80 por ciento de tu valor es: %f \n", a*0.80);
	printf("El 20 por ciento de tu valor es: %f \n", a*0.20);
	printf("El 15 por ciento de tu valor es: %f \n", a*0.15);
	
	return 0;
}
