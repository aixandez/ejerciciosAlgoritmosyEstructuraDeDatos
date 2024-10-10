#include <stdio.h>
#include <string.h>

/*Calcula y devuelve el recibo con los descuentos apropiados.*/
float calcularDescuento(int contCombos, char diaSemana[], float recibo, char nombreCliente[]){

    float descuento=0;

    /*Se suma a la variable descuento el %10 del recibo si es una familia(cantidad de combos pedidos mayor o igual a cuatro).*/
    if(contCombos >= 4){
        descuento += recibo * 0.1;
    }

    /*Se suma a la variable descuento el %5 del recibo si es fin de semana(si es sabado o domingo).*/
    if(strcmp(diaSemana, "Sabado") == 0 || strcmp(diaSemana, "Domingo") == 0){
        descuento += recibo * 0.05;
    }

    /*Se le resta al recibo el descuento calculado.*/
    recibo -= descuento;

    if(strcmp(nombreCliente, "Pedro") == 0){
        recibo = recibo * 3;
    }

    return recibo;
}

void mostrarDatosDia(float recaudadoDia, int combo1, int combo2, int combo3, int combo4, char diaSemana[]){
    printf("Total recaudado en el dia %s: $%.2f\n", diaSemana, recaudadoDia);
    printf("Cantidad de combos 1 pedidos: %d\n", combo1);
    printf("Cantidad de combos 2 pedidos: %d\n", combo2);
    printf("Cantidad de combos 3 pedidos: %d\n", combo3);
    printf("Cantidad de combos 4 pedidos: %d\n", combo4);
}

void mostrarDatosSemana(int cantFamilias, float recaudacionDiaMax, char diaSemanaMax[], float recaudacionDiaMin, char diaSemanaMin[]){
    printf("Cantidad de descuentos por familia: %d\n", cantFamilias);
    printf("Dia en el que mas se recaudó: %s\n", diaSemanaMax);
    printf("Total recaudado ese dia: $%.2f\n", recaudacionDiaMax);
    printf("Dia en el que menos se recaudó: %s\n", diaSemanaMin);
    printf("Total recaudado ese dia: $%.2f\n", recaudacionDiaMin);
}


int main(){

    /*Inicio de las variables.*/
    char opc, diaSemana[20], nombreCliente[20], diaSemanaMax[20], diaSemanaMin[20];
    int cont=0, cantCombo, combo1, combo2, combo3, combo4, contCombos, cantFamilias=0;
    float recibo, descuento, recaudadoDia, recaudacionDiaMax, recaudacionDiaMin, pagoCliente=0;

    /*Ingreso de datos para la semana.*/
    do{

        printf("Dia de la semana(Lunes/Martes/Miercoles/Jueves/Viernes/Sabado/Domingo): ");
        scanf(" %s", diaSemana);

        /*las variables vuelven a 0 por cada nuevo día ingresado.*/
        combo1=0, combo2=0, combo3=0, combo4=0, recaudadoDia=0;

        /*Ingreso de datos para el dia seleccionado.*/
        do{
            /*las variables vuelven a 0 por cada ingreso de datos.*/
            cantCombo=0, recibo=0, contCombos=0;

            printf("Nombre del cliente: \n");
            scanf(" %s", nombreCliente);

            /*For para preguntar la cantidad de cada combo al cliente (Total de 4 veces).*/
            for(int i = 1; i <= 4; i++){

                printf("Cantidad de combos %d: \n", i);
                scanf("%d", &cantCombo);

                /*combo1, combo2, combo3, combo4, es para calcular la cantidad de combos vendidos en el día*/
                /*recibo es la suma total de la cantidad de los combos elegidos por su determinado precio.*/
                /*si contCombos es igual o mayor a 4 cuenta como familia y se hace descuento.*/
                switch(i){
                    case 1:
                        combo1+=cantCombo;
                        recibo+=2500*(float)cantCombo;
                        contCombos+=cantCombo;
                        break;
                    case 2:
                        combo2+=cantCombo;
                        recibo+=3000*(float)cantCombo;
                        contCombos+=cantCombo;
                        break;
                    case 3:
                        combo3+=cantCombo;
                        recibo+=3500*(float)cantCombo;
                        contCombos+=cantCombo;
                        break;
                    case 4:
                        combo4+=cantCombo;
                        recibo+=4000*(float)cantCombo;
                        contCombos+=cantCombo;
                    break;
                }
            }

            /*cantidad de familias totales que realizaron compras durante la semana.*/
            if(contCombos >= 4){
                cantFamilias++;
            }

            /*Se llama a la funcion para calcular el recibo haciendo los descuentos apropiados.*/
            recibo = calcularDescuento(contCombos, diaSemana, recibo, nombreCliente);

            /*Recaudacion total del dia.*/
            recaudadoDia += recibo;      
            
            printf("Cliente: %s\n", nombreCliente);
            printf("Precio a pagar de $%.2f\n", recibo);

            /*Pide pago al cliente hasta que el dinero ingresado es igual o mayor al recibo.*/

            do{

                printf("Monto recibido del cliente: ");
                scanf("%f", &pagoCliente);

                if(pagoCliente < recibo){
                    printf("Pago insuficiente.\n");
                }

            }while(pagoCliente < recibo);

            /*Calcula el vuelto y se lo comunica al cliente.*/
            printf("Vuelto: $%.2f\n", pagoCliente-recibo);

            /*Pregunta si el usuario quiere seguir ingresando los datos del dia.*/
            printf("Seguir ingresando datos del dia?(S/N): ");
            scanf(" %c", &opc);

        }while(opc=='S' || opc=='s');

        /*Día de mayor recaudación.*/
        if(recaudadoDia > recaudacionDiaMax){

            recaudacionDiaMax = recaudadoDia;
            strcpy(diaSemanaMax, diaSemana);
        }

        /*Día de mayor recaudación.*/
        if(recaudadoDia < recaudacionDiaMin || cont == 0){

            recaudacionDiaMin = recaudadoDia;
            strcpy(diaSemanaMin, diaSemana);
        }

        mostrarDatosDia(recaudadoDia, combo1, combo2, combo3, combo4, diaSemana);

        /*Contador de cantidad de dias ingresados.*/
        cont++;

        /*Pregunta si el usuario quiere seguir ingresando los datos de la semana.*/
        printf("Seguir ingresando datos de la semana?(S/N): ");
        scanf(" %c", &opc);

    }while(opc=='S' || opc=='s');

    mostrarDatosSemana(cantFamilias, recaudacionDiaMax, diaSemanaMax, recaudacionDiaMin, diaSemanaMin);

}