#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20
#define NUM 10

void ORDENAMIENTO(char [NUM][MAX]);
void MOSTRAR(char [NUM][MAX]);
int BUSQUEDA_BINARIA(char [NUM][MAX], char [MAX]);

int main(){

char MAT[NUM][MAX], PALABRA[MAX];
int I, POS;


printf("INGRESE %d PALABRAS\n\n", NUM);


for(I= 0 ; I<NUM ; I++){
    printf("\nPALABRA %d: ", I+1);
    gets(MAT[I]);

}

ORDENAMIENTO(MAT);


printf("\nEN ORDEN ALFABETICO");

MOSTRAR(MAT);

printf("\n\nINGRESE LA PALABRA A BUSCAR: ");
gets(PALABRA);

POS =  BUSQUEDA_BINARIA(MAT, PALABRA);

if(POS == -1)
    printf("\n\nLA PALABRA %s NO SE ENCONTRO\n\n\n", PALABRA);
else
    printf("\n\nLA PALABRA %s ESTA EN LA POSICION %d\n\n\n", PALABRA, POS);




}


void ORDENAMIENTO(char MAT[NUM][MAX]){

int I, J;
char AUX[MAX];

for(I = 0 ; I<NUM-1 ; I++)
    for(J= 0 ; J < NUM - I -1; J++)
        if(strcmp(MAT[J], MAT[J+1]) > 0){
            strcpy(AUX , MAT[J]);
            strcpy(MAT[J], MAT[J+1]);
            strcpy(MAT[J+1], AUX);
        }








}

int BUSQUEDA_BINARIA(char MAT[NUM][MAX], char PALABRA[MAX]){

int PRIMERO= 0, ULTIMO= NUM-1, MEDIO;

MEDIO = (PRIMERO+ULTIMO)/2;

while(PRIMERO<=ULTIMO){
    if(strcmp(MAT[MEDIO], PALABRA) < 0)
        PRIMERO = MEDIO+1;
    else if(strcmp(MAT[MEDIO], PALABRA) == 0)
        return MEDIO+1;
    else
        ULTIMO = MEDIO-1;

    MEDIO = (PRIMERO+ULTIMO)/2;


    if(PRIMERO>ULTIMO)
        return -1;
}



}


void MOSTRAR(char MAT[NUM][MAX]){

int I;

for(I = 0 ; I<NUM ; I++)
    printf("\n\t%d: %s", I+1, MAT[I]);



}
