#include <stdio.h>
#include <stdlib.h>

int main()
{ float pesos;

	printf("Ingrese la cantidad en pesos: \n");
	scanf("%f", &pesos);
	
	printf("El valor de sus pesos convertidos a dolares es: %f", pesos/15,40);
	
	return 0;
}
