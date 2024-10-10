#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int nota=0, legajo=0;
	
	printf("Ingrese la nota del alumno \n");
	scanf("%i", &nota);
	printf("Ingrese el legajo del alumno\n");
	scanf ("%i", &legajo);
	
	if (nota>=7){
		printf("El legajo del alumno es %i y la nota es superior a 6", legajo);
	}
		else{
		
		printf("El legajo del alumno es %i y la nota es inferior a 6", legajo);
	}
	return 0;
}
