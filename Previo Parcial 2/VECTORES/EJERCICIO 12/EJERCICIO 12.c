#include <stdio.h>
#include <stdlib.h>

#define N 16

void MOSTRAR(int[], int[]);
void ORDENAR_PUNTOS(int[], int[]);

int main(){

int CONTADOR;
int EQUIPOS[N];
int PUNTOS[N];

for(CONTADOR = 0 ; CONTADOR < N ; CONTADOR++){
    EQUIPOS[CONTADOR] = 1000+rand()%9000;
    PUNTOS[CONTADOR] = 1+rand()%99;

}

printf("\t\tEQUIPOS INSCRIPTOS\n\n");
MOSTRAR(EQUIPOS, PUNTOS);
getchar();

ORDENAR_PUNTOS(EQUIPOS, PUNTOS);


printf("\t\tTABLA DE POSICIONES\n\n");
MOSTRAR(EQUIPOS, PUNTOS);
getchar();

printf("\t\tPRIMERA FECHA DE PLAY OFFS\n\n");
printf("\tEQUIPO\tPUNTOS\t\tEQUIPO\tPUNTOS\n\n");


for(CONTADOR = 0 ; CONTADOR < (N/2) ; CONTADOR++){
     printf("\t|%d|\t%d\tVS\t|%d|\t%d\n", EQUIPOS[CONTADOR], PUNTOS[CONTADOR], EQUIPOS[N - CONTADOR -1], PUNTOS[N - CONTADOR -1]);





}

}


void MOSTRAR(int EQUIPOS[], int PUNTOS[]){

int CONTADOR;
printf("\t\tEQUIPO\tPUNTOS\n\n");

for(CONTADOR = 0 ; CONTADOR < N ; CONTADOR++)
    printf("\t\t|%d|\t%d\n", EQUIPOS[CONTADOR], PUNTOS[CONTADOR]);

}


void ORDENAR_PUNTOS(int EQUIPOS[], int PUNTOS[]){

int AUX_EQUIPOS;
int AUX_PUNTOS;
int I, J;

for(I=0 ; I<N-1 ; I++)
    for(J=0 ; J<N-I-1; J++)
        if(PUNTOS[J] < PUNTOS[J+1]){

            AUX_PUNTOS   = PUNTOS[J];
            PUNTOS[J]    = PUNTOS[J+1];
            PUNTOS[J+1]  = AUX_PUNTOS;

            AUX_EQUIPOS   = EQUIPOS[J];
            EQUIPOS[J]    = EQUIPOS[J+1];
            EQUIPOS[J+1]  = AUX_EQUIPOS;

        }
}
