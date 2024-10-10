#include <stdio.h>

//19. CREAR UN PROGRAMA EN C QUE PIDA POR PANTALLA UN NÚMERO DEL 1 AL 10 Y 
//MEDIANTE UNA FUNCIÓN MUESTRE POR PANTALLA EL NÚMERO ESCRITO EN LETRAS
void convertir_nroletras (int n); //funcion
int main (){
	int numero;
	
	printf("Ingrese un numero del uno al diez: \n");
	scanf("%i", &numero);
	convertir_nroletras(numero); //llamo a la funcion
	
	return 0;
}

void convertir_nroletras (int n){ // la funcion en cuestion jajaj
	
	switch(n){
		case 1:
			printf("uno");
			break;
		case 2:
			printf("dos");
			break;
		case 3:
			printf("tres");
			break;
		case 4:
			printf("cuatro");
			break;
		case 5:
			printf("cinco");
			break;
		case 6:
			printf("seis");
			break;
		case 7:
			printf("siete");
			break;
		case 8:
			printf("ocho");
			break;
		case 9:
			printf("nueve");
			break;
		case 10:
			printf("diez");
			break;
		default:
			printf("ERROR el numero no es del 1 al 10");
	}
	
	
}
