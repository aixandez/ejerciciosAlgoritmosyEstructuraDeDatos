#include <stdio.h>


int main(){
	float numero1, numero2, res;
	char operacion;
	printf("ingrese el primer numero: \n");
	scanf("%f", &numero1);
	printf("ingrese el segundo numero: \n");
	scanf("%f", &numero2);
	
	printf("s= suma, r=resta, m=multiplicacion, d=division \n");
	fflush(stdin); //ES NECESARIO LIMPIAR BUFFER O NO FUNCIONA EL PROGRAMA
	scanf("%c", &operacion);
	
	switch(operacion){
		case 's':
			res = numero1+numero2;
			break;
		
		case 'r':
			res = numero1-numero2;
			break;
		
		case 'm':
			res = numero1 * numero2;
			break;
		
		case 'd':
			res = numero1 /numero2;
			break;
	}
	
	printf("resultado: %.2f",res);
	
	return 0;
}
