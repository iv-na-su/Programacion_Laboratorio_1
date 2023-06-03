#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 8
#define COLUMNAS 8
#define CANT_1 2

void CARGAR(int[FILAS][COLUMNAS]);
void MOSTRAR(int[FILAS][COLUMNAS]);
int COMPARTEN(int[FILAS][COLUMNAS]);

int main(){

srand(time(NULL));

int TABLA[FILAS][COLUMNAS];
int CONTADOR, FLAG_F=79, FLAG_C=79, FLAG_D=79, CORROBORADOR;


CARGAR(TABLA);
MOSTRAR(TABLA);


printf("\n\n");

CORROBORADOR = COMPARTEN(TABLA);

if(CORROBORADOR == 1)
    FLAG_F = 157;
if(CORROBORADOR == 2)
    FLAG_C = 157;
if(CORROBORADOR == 3)
    FLAG_D = 157;


printf("\n\t\t\t   LOS NUMEROS 1 ALEATORIOS COMPARTEN:\n\n\t\t      FILAS |%c|\tCOLUMNAS |%c|\tDIAGONAL |%c|", FLAG_F, FLAG_C, FLAG_D);
printf("\n\n\n");
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
    printf("\n\n\t\t");
    for(J = 0 ; J < COLUMNAS ; J++ )
        printf("%6d", TABLA[I][J]);
}


}

int COMPARTEN(int TABLA[FILAS][COLUMNAS]){

int I, J, AUX_I, AUX_J;

for(I = 0 ; I<FILAS ; I++)
    for(J = 0 ; J < COLUMNAS ; J++ )
        if(TABLA[I][J] == 1){
            AUX_I = I;
            AUX_J = J;
            I = 8;
        }

I = AUX_I;
J = AUX_J;



//FILAS IGUALES

for(J = AUX_J+1 ; J < FILAS ; J++)
    if(TABLA[I][J]== CANT_1-1)
        return 1;


I = AUX_I;
J = AUX_J;

//COLUMNAS IGUALES


for(I = AUX_I+1 ; I < COLUMNAS ; I++)
    if(TABLA[I][J]== CANT_1-1)
        return 2;



I = AUX_I;
J = AUX_J;

//DIAGONALES IGUALES

for(I = AUX_I+1, J = AUX_J+1 ; I < FILAS && J < COLUMNAS; I++, J++)
    if(TABLA[I][J]== CANT_1-1)
        return 3;

I = AUX_I;
J = AUX_J;

for(I = AUX_I+1, J = AUX_J-1 ; J >=0 && I < FILAS; I++, J--)
    if(TABLA[I][J]== CANT_1-1)
        return 3;





return 0;


}
