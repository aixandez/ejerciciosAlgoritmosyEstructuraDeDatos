#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int varones, mujeres, pago;
	
	printf("Ingresar la cantidad de varones \n");
	scanf("%i", &varones);
	printf("Ingresar la cantidad de mujeres \n");
	scanf("%i", &mujeres);
	
	if ((varones+mujeres)>=35){
		printf("Curso numeroso \n");
	}
	else{
		pago=(varones+mujeres)*55;
		printf("El total a pagar es: %i \n", pago);
	}
	
	return 0;
}
