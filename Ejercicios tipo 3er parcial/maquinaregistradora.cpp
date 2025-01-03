#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define cant 50

float calculo(float a, float b, char c);

void fcargarvector(float op1, float op2, char op, float *vop1, float *vop2, char *vop, int i);

void mostrar_resultados(float *vx, float *vy, char *vz, int i);


main()
{
      int inicio=0,opc=0, i=0, j, cs=0, cr=0, cm=0, cd=0;
      float ope1, ope2, vope1[cant]={0}, vope2[cant]={0},resu=0;
      char op, vop[cant]={'z'};
           
      while(inicio!=3)
      {
      	// Armo menu de opciones
         printf("PROGRAMA CALCULO\n");
         printf("*****************\n\n\n");
         printf("1-Efectuar calculo\n");
         printf("2-Informar operaciones del dia\n");
         printf("3-Salir\n");
         scanf("%i",&opc);
         switch(opc)
         {
             case 1:
                  printf("CALCULO:\n");
                  printf("-------\n\n");
                  printf("Ingresar el Primer Operando: \n");
                  scanf("%f",&ope1);
                  printf("Ingresar el Segundo Operando: \n");
                  scanf("%f",&ope2);
                  printf("Ingrese la Operacion aritmetica a realizar:\n");
                  printf("s-SUMA\n");
                   printf("r-RESTA\n");
                  printf("m-MULTIPLICACION\n");
                  printf("d-DIVISION\n");
                  fflush(stdin);
                  scanf("%c",&op);
                  resu=calculo(ope1,ope2,op);  // calculo es una funcion que devuelve un valor
                  printf("El resultado de la operacion es: %f",resu);
                  
                  // cargo los vectores con los valores leídos en una función
                  
                  fcargarvector(ope1, ope2, op, vope1, vope2, vop, i);  // llamo a la funcion cargar datos con argumentos
     			
                  i=i+1;   // sumo 1 para tener la posicion del primer valor libre de los vectores  
                  getch();
                  system("CLS");
                  break;
             case 2:
				 // calcular y mostrar resultados en función
				 
                mostrar_resultados(vope1, vope2, vop, i);
    
                break;
             case 3:
                  inicio=3;
                  break;
         
      }
}
} // main
////////////////////////////////////////////////////////////////////////////////
float calculo(float a, float b, char c)
{
      float total;
      switch(c)
      {
          case 's':
               total=a+b;
               break;
          case 'r':
               total=a-b;
               break;
          case 'm':
               total=a*b;
               break;
          case 'd':
               total=a/b;
               break;
      }
      return total;
}

void fcargarvector(float op1, float op2, char op, float *vop1, float *vop2, char *vop, int i)
{
	*(vop1+i)=op1;
	*(vop2+i)=op2;
	*(vop+i)=op;
	
}

void mostrar_resultados( float *vx, float *vy, char *vz, int i)
{
	int cs=0, cr=0, cm=0, cd=0, j;
                for (j=0;j<i;j++)  // me conviene usar for para recorrer vectores
           
             	{
             		// informo operaciones del dia
             		//printf("Operacion %c  operando1 %f operando2 %f\n", *vz, *vx, *vy);
             		printf("Operacion %c  operando1 %f operando2 %f\n", *(vz+j), *(vx+j), *(vy+j));
             		if (*(vz+j)=='s') {cs=cs+1;}
             		else if (*(vz+j)=='r') {cr=cr+1;}
             		    else if (*(vz+j)=='m'){cm=cm+1;}
             		         else {cd=cd+1;}
                      
                          						          		
				}
				 
	printf("Cantidad de sumas: %d\n", cs);
	printf("Cantidad de restas: %d\n", cr);
	printf("Cantidad de multiplicaciones: %d\n", cm);
	printf("Cantidad de divisiones: %d\n", cd);
}
