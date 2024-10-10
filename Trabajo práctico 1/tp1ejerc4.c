#include <stdio.h>
#include <stdlib.h>

int main()
{ float v1, v2, calculo;

printf("Ingrese valor 1: \n");
scanf("%f", &v1);
printf("Ingrese valor 2: \n");
scanf("%f", &v2);

calculo=(v1+v2)*(v1-v2);

printf("El resultado del calculo es: %f \n", calculo);

return 0;
}
