#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	
	int n;
	
	printf("Ingrese un numero para saber si es par o impar \n");
	scanf("%i", &n);
	
	
	if (n%2==0){
		printf("Par \n");
		
	}
	else{
		printf("Impar \n");
	}
	return 0;
}
