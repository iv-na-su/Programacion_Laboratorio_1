#include <stdio.h>

int main(){

int filas, cont_filas, cont_num, espacio, asterisco;

printf("INGRESE LA CANTIDAD DE RENGLONES PARA EL ARBOL DE NAVIDAD: ");
scanf("%d", &filas);
espacio = filas;

for(cont_filas = 1 ; cont_filas <= filas ; cont_filas++){

    for(cont_num = 1 ; cont_num < espacio ; cont_num++){

        printf (" ");
    }
    espacio--;

    for(asterisco = 0 ; asterisco < cont_filas ; asterisco++){
        printf("* ");


    }

    printf("\n");



}








}

