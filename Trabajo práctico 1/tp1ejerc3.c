#include <stdio.h>
#include <stdlib.h>

int main()
{
	 float a, b, suma, resta, div, mult, aux;
	 
	 printf("Ingrese la variable a: \n");
	 scanf("%f", &a);
	 printf("Ingrese la variable b: \n");
	 scanf("%f", &b);
	 
	 suma=a+b;
	 resta=a-b;
	 div=a/b;
	 mult=a*b;
	 
	 printf(" La suma es %f\n", suma);
	 printf(" La resta es %f\n", resta);
	 printf(" La multiplicacion es %f\n", mult);
	 printf(" La division es %f\n", div);
	 
	 aux=a;
	 a=b;
	 b=aux;
	 
	 printf(" La variable a intercambiada contiene: %f\n", a);
	 printf(" La variable b intercambiada contiene: %f\n", b);
	 
	 system("pause");
}
