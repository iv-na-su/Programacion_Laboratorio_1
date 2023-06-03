#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 8
#define COLUMNAS 8
#define CANT_1 2

void CARGAR(int[FILAS][COLUMNAS]);
void MOSTRAR(int[FILAS][COLUMNAS]);

int main(){

srand(time(NULL));

int TABLA[FILAS][COLUMNAS];
int CONTADOR;


CARGAR(TABLA);
MOSTRAR(TABLA);


printf("\n\n");
}

void CARGAR(int TABLA[FILAS][COLUMNAS]){

int I, J, CONTADOR;

for(I = 0 ; I<FILAS ; I++)
    for(J = 0 ; J < COLUMNAS ; J++ )
        TABLA[I][J] = 0;

for(CONTADOR = 0 ; CONTADOR < CANT_1 ; CONTADOR++){
    I = rand()%FILAS;
    J = rand()%COLUMNAS;
    if(TABLA[I][J] == 0)
        TABLA[I][J] = 1;
    else
        CONTADOR--;

}



}

void MOSTRAR(int TABLA[FILAS][COLUMNAS]){

int I, J;

for(I = 0 ; I<FILAS ; I++){
    printf("\n\t\t");
    for(J = 0 ; J < COLUMNAS ; J++ )
        printf("%4d", TABLA[I][J]);
}


}
