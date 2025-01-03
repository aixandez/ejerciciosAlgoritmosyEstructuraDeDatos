#include<stdio.h>

int main(){
	int prod, zona, dia, cuadro[8][10]={0}, i,z,j, cv=0;
	float vec[10]={0}, factura, ft=0;
	char rta;
	printf("Desea ingresar una venta?(s/n)\n");
	fflush(stdin);
	scanf("%c",&rta);
	while(rta=='s'){
		printf("Ingrese el importe de factura: ");
		scanf("%f",&factura);
		printf("Ingrese el codigo del producto (del 1 al 8): ");
		scanf("%d",&prod);
		printf("Ingrese la zona (del 1 al 10): ");
		scanf("%d",&zona);
		printf("Ingrese el dia del mes (del 1 al 31): ");
		scanf("%d",&dia);
		cuadro[prod-1][zona-1]=cuadro[prod-1][zona-1]+1;
		vec[zona-1]=vec[zona-1]+factura;
		
		printf("Ingresa otra venta?(s/n)\n");
		fflush(stdin);
		scanf("%c",&rta);
	}
	printf("\n");
	printf("       ZONA:\t");
	for(z=0;z<10;z++){
		printf("%d\t",z+1);
	}
	printf("\n");
		for(i=0;i<8;i++){
		printf("COD PRODUCTO: %d\t",i+1);
		for(j=0;j<10;j++){
			printf("%d\t",cuadro[i][j]);
			cv=cv+cuadro[i][j];		}
		printf("\n");
	}
	
	printf("\tFacturacion total\n");
	for(i=0;i<10;i++){
		printf("Zona %d:\t%.2f$\n",i+1,vec[i]);
		ft=ft+vec[i];
		}
	
	printf("total de ventas: %d, total de facturacion %f \n",cv, ft);
}
