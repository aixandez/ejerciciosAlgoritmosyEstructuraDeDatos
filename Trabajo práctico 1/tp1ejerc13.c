#include <stdio.h>

int main (){
	float num1, num2, num3, promedio;
	
	printf("ingrese 3 numeros para obtener el promedio: \n");
	scanf("%f %f %f", &num1, &num2, &num3);
	
	promedio = (num1+num2+num3)/3;
	printf("El promedio de los 3 numeros es de: %1.2f ", promedio);
	
	return 0;
}
