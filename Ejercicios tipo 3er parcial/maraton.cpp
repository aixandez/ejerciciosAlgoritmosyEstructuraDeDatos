/*Ejercicio tipo evaluacion*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// obligatorioas
void calcularganadores(int *vx, char *vy,  int j);
// opcionales
int menu();
main()
{
      int opc=0, i=0, j, vmenu, k;
      char vcategmeta[50]={'Z'}, categ, rpta;
      int  vnumerometa[50]={0}, numero;
      vmenu=menu();
      while(vmenu!=3)
      {       
         switch(vmenu)
         { 
           
             case 1:
             	  // cargar maraton
             	  printf("Cargar maraton\n");
             	  j=0;
             	  
             	  do
             	  {
                  printf("Ingresar numero del corredor que llego a la meta: \n");
                  fflush(stdin);
                  scanf("%d",&numero);
                  printf("Ingresar categoria del corredor que llego a la meta: \n");
                  fflush(stdin);
                  scanf("%c",&categ);
                  
                  // guardo en vector de maraton
                  
                  vnumerometa[j]=numero;
                  vcategmeta[j]=categ;
                  j++;
                  
                printf("Desea seguir ingresando numeros s/n?: \n");
                fflush(stdin);
                scanf("%c",&rpta);
                  
                 } while (rpta=='s');
                  
                  break;
             case 2:
                  calcularganadores(vnumerometa, vcategmeta,  j);
                  getch();
                  break;    
			 case 3:   break;             
         }
        vmenu=menu();
}
}
////////////////////////////////////////////////////////////////////////////////
void calcularganadores(int *vx, char *vy,  int j)
{ 
     int numeroprimero, primero, i,k;
	 char categ;
    
        for(i=0;i<5;i++) // recorro todos los vectores, por cada categoria
        { 
        switch(i)
        {
         case 0: categ='A'; break;
         case 1: categ='B'; break;
         case 2: categ='C'; break;
         case 3: categ='D'; break;
         case 4: categ='E'; break;
		}
		k=0;
		numeroprimero=0;
	
		primero=1;
	
        
        while (k<j)  // recorro vector de maraton para buscar el primero de la categoria
        {
          if ( *(vy+k)==categ && primero==1 ) { numeroprimero=*(vx+k); primero=0;}
         
          k++;
        }
        	
		printf("Categoria %c  primero %d\n", categ, numeroprimero);
	
        system("pause");                  
        }
        
        
     system("pause");
}
////////////////////////////////////////////////////////////////////////////////
int menu()
{
    int opc;
         printf("PROGRAMA MARATON\n");
         printf("*****************\n\n");
         printf("1-Registro de la maraton de los que llegaron a la meta\n");
         printf("2-Ganadores:primeros y segundos\n");
         printf("3-Salir\n");
         scanf("%i",&opc);
         return opc;
}    

