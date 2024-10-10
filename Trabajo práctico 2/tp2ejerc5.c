#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int nota;
	printf("Ingrese una nota \n");
	scanf("%i",&nota);
	
	if (nota>=7){
		printf("Aprobo \n");
	}
	else{
		printf(" No aprobo \n");

	}
	return 0;
}


