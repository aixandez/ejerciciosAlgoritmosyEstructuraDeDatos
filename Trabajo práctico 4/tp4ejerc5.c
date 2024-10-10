// Escribir un programa que lea 10 números por teclado y los cargue en un vector.
// Luego lea un número más e indique si está entre los anteriores.

#include<stdio.h>
#include<conio.h>
#define indice 10 
//define variable constante, significa que cuando yo llame a indice va a valer 10

main()
{
	int vec[indice], i, num, bandera=0;  // inicializo en cero
	
	for(i=0; i<indice; i++)
	{
		printf("Ingrese numero %d: ", i+1);
		scanf("%d", &vec[i]);
	}

	
	printf("Compare un valor con los anteriores\n");
	scanf("%d", &num);
	
	for(i=0; i<indice; i++)
	{
		if(vec[i]==num) {bandera=1;}  // agregué que a bandera le asigno 1
		
	}
	if(bandera==1){
		printf("El numero %d se encuentra entre los anteriors\n", num);
	}else{printf("El numero %d NO se encuentra entre los anteriores\n", num); // agregué cartel que no se encuentra
	}
	getch();
}
