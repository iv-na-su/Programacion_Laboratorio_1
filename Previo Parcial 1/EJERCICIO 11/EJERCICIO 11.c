#include <stdio.h>

int main(){

int  anio_ingresado, BISIESTO=0;

printf("INGRESAR UN A%cO: ", 165);
scanf("%d", &anio_ingresado);


if(anio_ingresado%400 == 0){
    if(anio_ingresado%100 != 0){
        if(anio_ingresado%4 == 0)
            BISIESTO = 1;
        else
            BISIESTO = 0;
    }
    else{
        if(anio_ingresado%4 == 0)
            BISIESTO = 1;
        else
            BISIESTO = 0;

}}
else{
    if(anio_ingresado%100 != 0){
        if(anio_ingresado%4 == 0)
            BISIESTO = 1;
        else
            BISIESTO = 0;
    }
    else
        BISIESTO = 0;
}


if(BISIESTO == 1)
    printf("EL A%cO %d ES BISIESTO", 165, anio_ingresado);
else
    printf("EL A%cO %d NO ES BISIESTO", 165, anio_ingresado);

}
