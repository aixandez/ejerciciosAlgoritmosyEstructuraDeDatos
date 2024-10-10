#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, res;
	
	printf("Introducir el primer numero \n");
	scanf("%i", &a);
	printf("Introducir el segundo numero \n");
	scanf("%i", &b);
	printf("Introducir el tercer numero \n");
	scanf("%i", &c);
	
	printf("El doble del primer numero es: %i \n", a*2);
	printf("El triple del primer numero es: %i \n", a*3);
	printf("La mitad del primer numero es: %i \n", a/2);
	
	printf("El doble del segundo numero es: %i \n", b*2);
	printf("El triple del segundo numero es: %i \n", b*3);
	printf("La mitad del segundo numero es: %i \n", b/2);
	
	printf("El doble del tercer numero es: %i \n", c*2);
	printf("El triple del tercer numero es: %i \n", c*3);
	printf("La mitad del tercer numero es: %i \n", c/2);
	
	return 0;
	
}
