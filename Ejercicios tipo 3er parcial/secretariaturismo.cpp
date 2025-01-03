/*
Recu 2cuatrimestre 2017
tamaño de los vectores en 50 posiciones.

*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define tam 50

void cargavector(int x, char y, int z, int w, int *vx, char *vy, int *vz, int *vw, int j);
void armarresultados(int *vx, char *vy, int *vz, int *vw, int i);
int menu();

main()
{
      int opc=0, i=0, dia, vacc, cant,vmenu;
      int vdia[tam]={0}, vvacc[tam]={0},vcant[tam]={0};
      char ctur, vctur[tam]={'\0'};
      
      vmenu=menu();
      while(vmenu!=3)
      {
         
         switch(vmenu)
         {
             case 1:
                  printf("INGRESO DE DATOS:\n");
                  printf("-------\n\n");
                  printf("Ingresar Dia: \n");
                  fflush(stdin);
                  scanf("%d",&dia);
                  printf("Ingresar Centro turistico: \n");
                  fflush(stdin);
                  scanf("%c",&ctur);
                  printf("Ingrese Via de acceso:\n");
                  fflush(stdin);
                  scanf("%d",&vacc);
                  printf("Ingrese Candidad de turistas:\n");
                  fflush(stdin);
                  scanf("%d",&cant);
                
                  cargavector(dia, ctur, vacc, cant, vdia, vctur, vvacc, vcant, i);
                  
                  i=i+1;     
                  getch();
                  system("CLS");
                  break;
             case 2:
                  
                  armarresultados(vdia, vctur, vvacc, vcant, i);
                  getch();
                  break;           
         
         }
        vmenu=menu();
}
}
////////////////////////////////////////////////////////////////////////////////
void armarresultados(int *vx, char *vy, int *vz, int *vw, int i)
{ 
     int q1, q2;
     int toturauto;
     int j;
     char centro_elegido;
    
     q1=0;
     q2=0;
     toturauto=0;
      
     printf ("Ingrese centro turistico\n");
     fflush(stdin);
     scanf ("%c", &centro_elegido);
     
        for(j=0;j<i;j++)
        { if (*(vy+j) == centro_elegido) 
		      { 
			    if (*(vx+j) >=15 )
				    {
				     q2=q2+*(vw+j);
			     	}
			    else 
				    {
					 q1=q1+*(vw+j);
					}
                if (*(vz+j)==1)
				   { toturauto=toturauto + *(vw+j);}        
              }    
		              
                                   
        }
        
        printf("Cantidad quincena 1 y quincena2 %d  %d\n", q1, q2);
        printf("Total turistas en auto %d\n", toturauto);
        system("pause");
        
     
     }

    
////////////////////////////////////////////////////////////////////////////////
void cargavector(int x, char y, int z, int w,  int *vx, char *vy, int *vz, int *vw, int j)
{
     *(vx+j)=x;
     *(vy+j)=y;
     *(vz+j)=z;
     *(vw+j)=w;
}
////////////////////////////////////////////////////////////////////////////////
int menu()
{
    int opc;
         printf("PROGRAMA CALCULO DE TURISTAS\n");
         printf("*****************\n\n\n");
         printf("1-Cargar datos\n");
         printf("2-Mostrar resultados\n");
         printf("3-Salir\n");
         scanf("%i",&opc);
         return opc;
}       
