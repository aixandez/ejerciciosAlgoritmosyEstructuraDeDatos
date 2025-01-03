/*
Tercer parcial TN 1c 2023
tamaño de los vectores en 50 posiciones.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define tam 50

// funciones pedidas

void cargavector(int x, char y, int z,  int *vx, char *vy,  int *vz, int j);

int calculo_costo(char x, int y);  // opcional?

void armarresultados(int *vx, char *vy, int *vz, int i);

int menu();  // opcional esta función menú despliega el menú, se ingresa opción y devuelve ese valor al main

// programa principal

main()
{
      int opc=0, i=0, nro_celular, zona;
      int vnro_celular[tam]={0},vzona[tam]={0};
      char  tipo, vtipo[tam]={'z'};         
      
      opc=menu();
         
      while(opc!=3)
      {      
         switch(opc)
         {
             case 1:
                  printf("Ingresar datos:\n");
                  printf("-------\n\n");
                  printf("Número de celular: \n");
                  fflush(stdin);
                  scanf("%d",&nro_celular);     
                  printf("Tipo de negocio: N L D O  \n");
                  fflush(stdin);
                  scanf("%c",&tipo);      
                  if (tipo=='D') // Ingreso zona si es depósito o galpón
                  {
                  printf("Zona urbana 1 si 0 no:\n");
                  fflush(stdin);
                  scanf("%d",&zona);}
                  else zona=1;
                     
                  cargavector(nro_celular, tipo, zona, vnro_celular, vtipo, vzona, i);
                  
                  i=i+1;     
                  getch();
                  system("CLS");
                  break;
             case 2:
                  armarresultados(vnro_celular, vtipo, vzona, i);
                  getch();
                  break;                               
         }
         opc=menu();
}
}
////////////////////////////////////////////////////////////////////////////////
// Funcion de cálculo del costo del seguro
int calculo_costo(char x, int y)
{
	int costo;
	switch(x)
	{
		case 'N': costo=50000; break;
		case 'L': costo=40000; break;
		case 'D' : costo=80000; break;
		case 'O' : costo=30000; break;
	}
	if (y==0) costo=costo+5000;
	return costo;
}

void armarresultados(int *vx, char *vy, int *vz, int i)
{ 
     int j, costo, cant=0;
      
     for(j=0;j<i;j++)
        {      
		// invoco a la función calculo_costo, guardando el valor que devuelve en una variable.
		
		costo=calculo_costo(*(vy+j), *(vz+j));
		  
        printf("Nro. de celular %d\t cotización del kit de seguridad %d\n",*(vx+j), costo);
         
		// cantidad de depósitos galpones en zona urbana
		     
		if (*(vy+j)=='D' && *(vz+j)==0)
	    cant=cant+1;
		                              
        }  // fin del for
        
        printf("Cantidad de depositos/galpones en zona no urbana %d\n", cant);
        system("pause");
}
////////////////////////////////////////////////////////////////////////////////
void cargavector (int x, char y, int z,  int *vx, char *vy, int *vz,  int j)
{
     *(vx+j)=x;
     *(vy+j)=y;
     *(vz+j)=z;
}
int menu() {
	     int opc;
	     printf("PROGRAMA COTIZACION DE ALARMAS\n");
         printf("***************************\n\n\n");
         printf("1-Cargar datos de pedidos a cotizar\n"); 
         printf("2-Mostrar cotizaciones\n");
         printf("3-Salir\n");
         scanf("%i",&opc);
         return opc;
}

