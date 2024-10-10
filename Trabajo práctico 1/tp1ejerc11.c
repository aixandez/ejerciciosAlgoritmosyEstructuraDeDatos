#include <stdio.h>
#include <math.h>

int main (){
	float celcius, fahrenheit, kelvin;
	
	printf("ingrese temperatura en grados celcius: \n");
	scanf("%f", &celcius);
	
	fahrenheit = (celcius * 1.8) + 32;
	kelvin = celcius + 273.15;
	
	printf("La temperatura en grados fahrenheit es de: %1.2f \n", fahrenheit);
	printf("La temperatura en grados kelvin es de: %1.2f \n", kelvin);
	
	return 0;
}
