#include <stdio.h>
#include <math.h>
// 1 milla = 1609 | 1 pulgada = 0.0254 metros 
// 1 yarda = 3pies | 1 pie = 12 pulgadas

	float a,b,suma;
	float sumapulgadas,sumamillas,sumayardas;
	printf("ingresar cantidad en pies:\n");
	scanf("%f", &a);
	printf("ingresar cantidad en metros: \n");
	scanf("%f", &b);
	
	
	a = a /3.28; //pase de pies a metros
	suma = a+b; //valor en metros
	sumapulgadas = suma /0.0254;
	sumayardas = suma * 1.09361;
	sumamillas = suma / 1609;
	
	printf("la suma en metros es: %f \n" , suma);
	printf("la suma en pulgadas es: %f \n" ,sumapulgadas);
	printf("la suma en yardas es: %f \n" , sumayardas);
	printf("la suma en millas es: %f \n" , sumamillas);
	
	return 0;
}
