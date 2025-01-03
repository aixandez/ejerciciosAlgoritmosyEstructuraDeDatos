// TERCER PARCIAL - FERNANDEZ AIXA GIOVANNA - COMISION 1 - TURNO MA�ANA

#include<stdio.h>
#include <stdlib.h>
#define cant 10

int menu();
void cargarvector(int alt, int dist, int *vx, int *vy, int j);
void informes(int *vx, int *vy, int i);

int main()
{    
    int alturas, distancias;
    int vec1[cant] = {0}, vec2[cant] = {0};
    int i = 0, opc = 0, inicio = 0, j = 0;
    
    while(inicio != 3)
    {
        printf("PROGRAMA REGISTRO DEL SENDERO\n");
        printf("********************\n\n\n");
        printf("1 - Ingresar alturas y distancias de puntos principales del sendero\n");
        printf("2 - Evaluacion de nivel de exigencia del sendero\n");
        printf("3 - Salir\n");
        scanf("%i",&opc);
        switch(opc)
        {
            case 1:
                printf("Datos:\n");
                printf("********************\n");
                printf("Ingrese la altura de puntos principales del sendero: ");
                scanf("%i", &alturas);
                printf("Ingrese la distancia de puntos principales del sendero: ");
                scanf("%i", &distancias);
                cargarvector(alturas, distancias, vec1, vec2, j);
                i++;
                break;
            case 2:
                informes(vec1, vec2, i);
                break;
            case 3:
                inicio = 3;
                break;
        }
    }
    return 0;
}

void cargarvector(int alt, int dist, int *vx, int *vy, int j)
{
    *(vx+j) = alt;
    *(vy+j) = dist;
}

void informes(int *vx, int *vy, int i) // vx = altura, vy = distancia
{
    int x=0, contbajo=0, contalto=0;
    int distanciatotal=0;
    
    for (x=0; x<i; x++)
    {
        if(*(vx+x) > 500 && *(vy+x) > 2000){
            printf("\nEl nivel de exigencia del sendero es alto\n");
            contalto++;
        } else{
            printf("\nEl nivel de exigencia del sendero es bajo\n");
            contbajo++;
        }
        
        distanciatotal += *(vy + x);
    }
    
    printf("\nLa distancia total a recorrer es de %d metros\n", distanciatotal);
    
    if(contalto > contbajo){
        printf("\nEl sendero tiene una dificultad alta\n\n");
    }
}

/*ENUNCIADO:

Soledad es aficionada al trekking de monta�a. Quiere realizar una excursi�n por un dif�cil terreno 

monta�oso y para eso quiere saber con anticipaci�n qu� nivel de exigencia tiene ese terreno. Posee un 

mapa del sendero, con los valores de alturas en distintos puntos del mismo y la distancia que debe 

recorrer para llegar a cada uno de esos puntos.

Se desea desarrollar una aplicaci�n para registrar las alturas de los distintos puntos del sendero y la 

distancia que hay que caminar para llegar a los mismos para que Soledad pueda evaluar el nivel de 

exigencia que tendr� su actividad de trekking.

Se conocen las alturas de 10 puntos del sendero, que son valores enteros positivos. Todas las alturas 

est�n expresadas en metros. Se conocen las distancias que hay que caminar para llegar a esos 10 

puntos, que son valores positivos, expresadas en metros.

El programa deber� tener un men� con las siguientes opciones:

1 - Ingresar alturas y distancias de puntos principales del sendero. 

2 - Evaluaci�n de nivel de exigencia del sendero.

3 - Salir.

Opci�n1 - Ingresar alturas de las partes principales del sendero:

Ingresar los datos de alturas de los puntos del sendero en un vector de 10 elementos. Llamar a una 

funci�n que tenga como par�metro un vector de 10 elementos y lea por teclado las 10 alturas. Ingresar 

los datos de las distancias de los puntos del sendero en un vector de 10 elementos. Llamar a la misma 

funci�n que tenga como par�metro un vector de 10 elementos y lea por teclado las 10 distancias.

Opci�n 2 - Evaluaci�n de nivel de exigencia del sendero:

Llamar a una funci�n que tenga como par�metros los vectores armados en la opci�n 1 para informar:

En cada punto del sendero: Si la altura es mayor a 500 metros y la distancia es mayor a 2000 metros, 

informar un cartel donde indique que el nivel de exigencia es alto.

De lo contrario informar que el nivel de exigencia es bajo.

Al final informar: La distancia total del sendero. Si la mayor�a de los puntos del sendero son de un 

nivel de exigencia alto, informarle a Soledad que el sendero es de dificultad alta.

Opci�n 3 - Salir

Utilizar aritm�tica de punteros en el manejo de vectores en las funciones de las opciones 1 y 2.

Definir los vectores con 10 elementos.

No se pueden utilizar variables globales. Mostrar por pantalla de forma clara y prolija.*/
