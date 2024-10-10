#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int n1, n2, resultado;
	
	printf("Ingrese su primer numero \n");
	scanf("%i", &n1);
	printf("Ingrese su segundo numero \n");
	scanf("%i", &n2);
	
	if (n1>n2){
		resultado=n1-n2;
	}
	else{
		resultado=n1*n2;
	}
	printf("El resultado es: %i \n", resultado);
	
	return 0;
}
