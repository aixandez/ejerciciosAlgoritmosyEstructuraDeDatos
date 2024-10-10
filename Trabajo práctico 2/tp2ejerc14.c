#include <stdio.h>

int main (){
		
	int i, contadora, contadorb;
	char voto;
	float porcentajea, porcentajeb;
	contadora = 0; contadorb = 0;
	
	for (i=0; i < 100; i++){
		printf("\n a quien desea votar? a/b: ");
		fflush(stdin);
		scanf("%c", &voto);
		if (voto == 'a'){
			contadora += 1;
		}else {
			contadorb += 1;
		}
	}
	
	porcentajea = ((contadora*100)/(contadora+contadorb));
    porcentajeb = ((contadorb*100)/(contadora+contadorb));
	
	printf("votos de A: %i \n",contadora);
	printf("votos de B: %i \n",contadorb);
	printf("Porcentaje de votos de A: %% %.2f \n", porcentajea);
	printf("Porcentaje de votos de B: %% %.2f \n", porcentajeb);

	return 0; 
}
