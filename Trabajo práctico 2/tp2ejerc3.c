#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int n1, n2, n3;
	
	printf("Escribir el valor del primer numero \n");
	scanf("%i", &n1);
	printf("Escribir el valor del segundo numero \n");
	scanf("%i", &n2);
	printf("Escribir el valor del tercer numero \n");
	scanf("%i", &n3);
	
	if (n1<n2){
		if (n2<n3){
			printf("Los numeros estan en orden ascendiente \n");
		}
		else{
			printf("Los numeros no estan en orden ascendiente \n");
		}
	}
	else{
		printf("Sus tres numeros no estan en orden ascendiente \n");
	}
	return 0;
}
