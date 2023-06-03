#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20
#define NUM 10

void ORDENAMIENTO(char [NUM][MAX], float[NUM]);
void MOSTRAR(char [NUM][MAX]);

int main(){

char MAT[NUM][MAX];
int I, POS;
float PROMEDIO[NUM];


printf("INGRESE LOS NOMBRES Y NOTAS DE LOS %d ALUMNOS\n\n", NUM);


for(I= 0 ; I<NUM ; I++){
    printf("\nALUMNO %d: ", I+1);
    gets(MAT[I]);
    printf("\nPROMEDIO: ", I+1);
    scanf("%f", &PROMEDIO[I]);
    PROMEDIO[I] =  PROMEDIO[I]/1.0;
    fflush(stdin);

}

ORDENAMIENTO(MAT, PROMEDIO);

printf("\n\nEL ALUMNO CON EL PROMEDIO MAS ALTO ES %s CON UN PROMEDIO DE %.2f\n\n", MAT[NUM-1], PROMEDIO[NUM-1]);



}


void ORDENAMIENTO(char MAT[NUM][MAX], float PROMEDIO[NUM]){

int I, J;
char AUX_MAT[MAX];
float AUX_PROMEDIO;

for(I = 0 ; I<NUM-1 ; I++)
    if(PROMEDIO[I] > PROMEDIO[I+1]){

        AUX_PROMEDIO = PROMEDIO[I];
        PROMEDIO[I] = PROMEDIO[I+1];
        PROMEDIO[I+1] = AUX_PROMEDIO;

        strcpy(AUX_MAT , MAT[I]);
        strcpy(MAT[I], MAT[I+1]);
        strcpy(MAT[I+1], AUX_MAT);
        }








}


void MOSTRAR(char MAT[NUM][MAX]){

int I;

for(I = 0 ; I<NUM ; I++)
    printf("\n\t%d: %s", I+1, MAT[I]);



}
