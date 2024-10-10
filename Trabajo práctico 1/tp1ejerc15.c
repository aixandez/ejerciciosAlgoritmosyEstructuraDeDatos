#include <stdio.h>

int main (){
	
	constPC = 11500;
	const CANTIDAD = 30;
	int precio1,precio2,precio3, precio4,precio5;
	
	//pc + envio + seguro
	precio1 = (PC * CANTIDAD) + ((PC*CANTIDAD)*0.05) + ((PC*CANTIDAD)*0.12);
	printf("1- Precio sin descuentos $%i \n",precio1);
	
	//pc +envio + seguro        multiplicar x 0.8 es equivalente a restar el 20%
	precio2 = ((PC * CANTIDAD)*0.8) + ((PC*CANTIDAD)*0.05) + ((PC*CANTIDAD)*0.12);
	printf("2- Precio con todos los descuentos si todas las pc llegan bien: $%i \n",precio2);
	
   //pc + envio sin seguro
	precio3 = ((PC * CANTIDAD)*0.8) + ((PC*CANTIDAD)*0.05);
	printf("3- Precio con todos los descuentos si las pc llegan mal: $%i \n",precio3);
	
	//precio del descuento
	precio4 = (((PC*CANTIDAD)/100)*20); //20%
	printf("4- Precio del descuento: $%i \n",precio4);
	
	// precio del envio
	precio5 = (((PC*CANTIDAD)/100)*5); //5%
	printf("5- Precio del envio: $%i \n",precio5);
	
	return 0;
}