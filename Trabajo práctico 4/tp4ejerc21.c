/* El siguiente programa contiene errores, corrígelo:
#define <stdio.h>
#define <stdlib.h>
#include Tope 10;
main()
{int tabla [tope], i, aux;
for (i=0; i<Tope; i++)
{ tabla[i]=i;
i=i+1;
}
i=0;
while (i<=Tope)
{ aux=tau[i];
tabla[i]=tabla[i+1];
tabla[i+1]=aux;
}
printf("\n\n");
system ("PAUSE");
} */

//Programa corregido:

#include <stdio.h>
#include <stdlib.h>

#define Tope 10

int main()
{
    int tabla[Tope], i, aux;
    
    // Llenar el array con valores secuenciales
    for (i = 0; i < Tope; i++)
    {
        tabla[i] = i;
    }

    // Intercambiar valores de pares de elementos consecutivos
    for (i = 0; i < Tope - 1; i += 2)
    {
        aux = tabla[i];
        tabla[i] = tabla[i + 1];
        tabla[i + 1] = aux;
    }

    // Imprimir el array resultante
    for (i = 0; i < Tope; i++)
    {
        printf("%d ", tabla[i]);
    }
    printf("\n\n");

    system("PAUSE");
    return 0;
}
