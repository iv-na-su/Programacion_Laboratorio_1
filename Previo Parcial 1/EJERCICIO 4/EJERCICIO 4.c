#include <stdio.h>
/*4) Pedir al usuario una fecha, en este formato: 30/4/2013
Indicar si la fecha es válida o no. Chequear lo siguiente:
-que la función scanf pudo leer 3 valores
-que el mes sea válido
-que el día exista en ese mes
-que el año esté entre 1900 y 2100*/


int main() {

int mes, anio, dia, validador_dia=0, validador_mes=0, validador_anio=0;

printf("Ingresar una fecha entre el anio 1900 y 2100, separando con / cada numero (dd/mm/aa): ");
scanf("%d/%d/%d", &dia, &mes, &anio);



if(dia<=31 && dia>0)
    validador_dia++;
else
    validador_dia--;

if(mes>0 && mes<=12)
    validador_mes++;
else
    validador_mes--;


if(anio>=1900 && anio<=2100)
    validador_anio++;
else
    validador_anio--;



if(mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia>0 && dia<=30);

else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12  && dia>0 && dia<=31);

else if(mes == 2 && dia>0 && dia<=28);

else if(anio%4 == 0 && dia == 29);

else
    validador_dia--;



if(validador_dia == 1 && validador_mes == 1 && validador_anio == 1)
    printf("\n\t\tLA FECHA %d/%d/%d ES VALIDA\n", dia, mes, anio);

else
    printf("\n\t\tLA FECHA %d/%d/%d ES INVALIDA\n", dia, mes, anio);


if(validador_dia == 1)
    printf("\tDIA: VALIDO");
else
    printf("\tDIA: INVALIDO");

if(validador_mes == 1)
    printf("\tMES: VALIDO");
else
    printf("\tMES: INVALIDO");

if(validador_anio == 1)
    printf("\tANIO: VALIDO\n");
else
    printf("\tANIO: INVALIDO\n");




}
