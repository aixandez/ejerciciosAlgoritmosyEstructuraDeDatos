#include <stdio.h>
#include <math.h>

int main (){
	const float PI = 3.1415;
	float radio, altura, area, volumen;
	
	printf("Ingresar radio en cm: \n");
	scanf("%f", &radio);
	printf("Ingresar altura en cm: \n");
	scanf("%f", &altura);
	
	
	area = 2 * PI * radio * (radio+altura); //para esto usar lib math.h
	volumen = PI * pow(radio,2) * altura;
	
	printf ("el area es: %1.3f \n", area);
	printf ("el volumen es: %f1.3 cm3", volumen);
	return 0;
}
