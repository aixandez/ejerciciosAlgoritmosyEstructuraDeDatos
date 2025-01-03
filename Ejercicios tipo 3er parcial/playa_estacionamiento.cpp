#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// opcionales
float monto_estacionamiento(char , float  );
// obligatorias, así hay funciones que devuelven valor y void
int menu();
void carga(char x, float y, char *vx , float *vy, int j);
void resumen (char *vx, float *vy, int i);

int main(){
    int i=0, vmenu;  // i se usa como desplazamiento
    char tipov, vtipov[50]={' '};
    char patente[20];  
    float hs,  monto, vmonto[50]={0};
    
    vmenu=menu();
    while(vmenu!=3)
    {
    switch(vmenu)
	{		
    	case 1: printf("\t\t\nIngrese Patente: ");
    	fflush(stdin);
    	scanf("%s",&patente);
    	printf("\t\t\nIngrese tipo de vehículo: ");
    	fflush(stdin);
    	scanf("%c",&tipov);
    	printf("\t\t\nHoras de permanencia ");
    	fflush(stdin);
    	scanf("%f",&hs);	
    
    	// cálculo del gasto de estacionamiento
    	monto=monto_estacionamiento(tipov,hs);
       
    	printf("Monto a pagar por el vehículo %f\n", monto);                                   
     
        carga(tipov, monto, vtipov, vmonto, i);
        i++;  // el desplazamiento
        break;
    	case 2: resumen(vtipov, vmonto, i);
	} // fin del switch
             
    vmenu=menu();   
    system("cls");
    }  // fin del while
    
    system("pause");
    }  // fin del main
    
 void carga(char x, float y, char *vx, float *vy, int j) // accedo a los vectores a través de los punteros
 {
 	*(vx+j)=x;   // Al contenido de donde apunta vx+j asigno el valor de x
 	*(vy+j)=y;
 } 
 
 void resumen(char *vx, float*vy, int i)  // *vx son los tipos vehiculos, *vy son montos
 { int x, bandera=1;
   float acuc=0, acua=0, acum=0;
   float min;
   
   for(x=0;x<i; x++)
   {
   	switch(*(vx+x))   // calculo monto ingresado en playa de estacionamiento
   	{                 // por tipo de vehículo
   		case 'c': acuc=acuc+*(vy+x);  // monto es el contenido de donde apunta vy+x
   		          break;
   		case 'a': acua=acua+*(vy+x);
   		          break;
		case 'm': acum=acum+*(vy+x);
   		          break;			           
	}
	
	if ((*vx+x) == 'c')   // calculo minimo gasto de camioneta
	  {
	  	if (bandera==1) { bandera=0; min=*(vy+x);}
	  	else if (*(vy+x) < min) { min=*(vy+x);}
	  }
	
   } // fin del for
 
   printf("Monto ingresado en playa %f\n", acuc+acua+acum);
   printf("Monto ingresado en playa por camioneta %f\n", acuc);
   printf("Monto ingresado en playa por auto %f\n", acua);
   printf("Monto ingresado en playa por moto %f\n", acum);
   
   printf("Minimo valor camioneta %f\n", min);
 }
 
float monto_estacionamiento( char a, float c)
{
      float resul;   
      switch(a)
      {
	   case 'm': resul=50*c;
        break;
       case 'a': resul=100*c;
        break;
       case 'c': resul=200*c;
        break;
	  }
      return resul;    
}     

int menu()
{
    int opc;
         printf("PROGRAMA ESTACIONAMIENTO\n");
         printf("*****************\n\n\n");
         printf("1-Salida de vehículo y cálculo de gasto de estacionamiento\n");
         printf("2-Resumen del dia\n");  
         printf("3-Salir\n");
         scanf("%i",&opc);
         return opc;
}
   
   
