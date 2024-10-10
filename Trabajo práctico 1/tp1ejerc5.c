#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{ int nro, exponente, cuenta;

printf("Ingrese numero: \n");
scanf("%i", &nro);
printf("Ingrese exponente: \n");
scanf("%i", &exponente);

// cuenta=nro^exponente;

printf("El resultado final es: %f \n", pow (nro,exponente));

return 0;
}
