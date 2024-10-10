#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// Ej para clase del 20/10 Lo hacemos sin vector de nombres
int main()
{
     float matlitros[24][8]={0}, vectipo[8]={0};
     
     int i=0, tipo, maxtipo;
     float litros, maxlitros;
  
     
    for (i=0; i<24; i++)   // Por cada provincia de 0 a 23
    {
	    printf ("Provincia %d\n", i);
    	printf ("Ingrese tipo de bebida: de 0 a 7, -1 para cambiar de provincia\n");
        fflush(stdin);
    	scanf("%d", &tipo);
      	while (tipo != -1)
      	{
      	 printf ("Ingrese litros\n");
         fflush(stdin);
    	 scanf("%f", &litros);
    	 
    	// Guardo los litros
    	 
    	 matlitros[i][tipo]=matlitros[i][tipo]+ litros; // Puede ser que ingrese una vez o si son varias acumulo
    	
    	 vectipo[tipo]=vectipo[tipo]+ litros;
    	 
    	printf ("Ingrese tipo de bebida: de 0 a 7, -1 para cambiar de provincia\n");
         fflush(stdin);
    	 scanf("%d", &tipo);
		}
	} // fin del for
	
	
	maxlitros=vectipo[0];
	maxtipo=0;
	
	for (i=0;i<8;i++)  // numero de 0 a 24 los vendedores
	{

		if (vectipo[i]> maxlitros) { maxlitros=vectipo[i]; maxtipo=i;}

	}
    
	printf("Tipo de bebida %d cantidad máxima litros %f\n", maxtipo, maxlitros);	
  
    system("pause");
}
