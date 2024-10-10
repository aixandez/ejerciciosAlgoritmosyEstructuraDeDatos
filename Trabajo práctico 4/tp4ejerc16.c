#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define TAMF 4 //fila
#define TAMC 3 //columna


int mat[TAMF][TAMC],  maxfila, maxcol, max, minfila, mincol,min;
 main()
{
   
    int i,j, max, aux;
    
    for (i=0;i<TAMF;i++)
      {
       for (j=0;j<TAMC;j++)
    	{
    		printf("\n Ingrese el valor %d %d de la matriz: ", i, j);
    		scanf("%d",&mat[i][j]);  
    	}
     }
     
     printf("\n Contenido de la matriz:");
      for (i=0;i<TAMF;i++)
      {
       for (j=0;j<TAMC;j++)
    	{
    		printf("\n Elemento %d  %d es  %d ", i,j, mat[i][j]);
    	}
    	printf(" \n");
     }
    	
    	
// calculo maximo y minimo
   
      for (i=0;i<TAMF;i++)
      {
      for (j=0;j<TAMC;j++)
      {
          if (i==0 && j==0) {max=mat[0][0]; maxfila=0; maxcol=0;
                             min=mat[0][0]; minfila=0; mincol=0;}
          
          if (mat[i][j] > max) {max=mat[i][j]; maxfila=i; maxcol=j;}
          if (mat[i][j] < min) {min=mat[i][j]; maxfila=i; maxcol=j;}                   
     
      } 
      }
    
    printf("\n Maximo, minimo y sus posiciones:");       
     printf("\n Max: %d", max);
     printf("\n Pos i: %d", maxfila);
     printf("\n Pos j: %d", maxcol);
     printf("\n Min: %d", min);
     printf("\n Pos i: %d", minfila);
     printf("\n Pos j: %d", mincol);
      
   
    getch();
    
    
    
}
