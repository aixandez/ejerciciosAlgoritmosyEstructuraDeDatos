#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	int n;
	
	printf("Ingrese un numero \n");
	scanf("%i",&n);
	
	if(n==0){
		
		printf("Valor nulo \n");
	}
	else if (n>0){
		printf("Valor positivo \n");
	}
	
	else printf("Valor negativo \n");
	
	return 0;
}


