#include <stdio.h>

int main(){

int filas, cont_filas, cont_num, espacio, numerito;

printf("INGRESE LA CANTIDAD DE FILAS PARA EL ARBOL NUMERICO: ");
scanf("%d", &filas);
espacio = filas;

for(cont_filas = 1 ; cont_filas <= filas ; cont_filas++){

    for(cont_num = 1 ; cont_num < espacio ; cont_num++){

        printf (" ");
    }
    espacio--;

    for(numerito = 0 ; numerito < cont_filas ; numerito++){
        printf("%d ", cont_filas);


    }

    printf("\n");



}








}
