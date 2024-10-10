// Dado un vector con 5 notas de alumnos. Determinar cuántas notas son mayores a 6

#include <stdio.h>

main()
{
      int vec[5] /*declaro vector*/, contadornota=0,i;
      
      
      for(i=0;i<5;i++)
      {
          printf("Ingrese el nota: \n",i);
          scanf("%i",&vec[i]);
      }
      
       
      
      for(i=0;i<5;i++)//recorro vector con mismo indice
      {
         if(vec[i]>6)
         {
            contadornota=contadornota+1;
         }
      }
    printf("\n\n\tLa cantidad de notas mayores a 6 es: %i\n", contadornota);  
}




