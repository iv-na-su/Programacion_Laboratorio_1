#include <stdio.h>
#include <stdlib.h>

#define N 15

void MOSTRAR(int[], int[]);
void ORDENAR_PUNTOS(int[], int[]);

int main(){

int JUGADORES[N];
int PUNTOS[N] = {0};
int CONTADOR;
int GOL = 0;

for(CONTADOR = 0 ; CONTADOR < N ; CONTADOR++)
    JUGADORES[CONTADOR] = CONTADOR+1;

printf("\tCOMIENZA LA COMPETENCIA DE BUCEADORES\n\n");
MOSTRAR(JUGADORES, PUNTOS);

printf("\n\n\tQUE JUGADOR ANOTO UN PUNTO?: ");
scanf("%d", &GOL);
printf("\n");

while(GOL>0 && GOL<N+1){
    for(CONTADOR = -1 ; CONTADOR < N ; CONTADOR++)
        if(GOL == JUGADORES[CONTADOR+1])
            PUNTOS[CONTADOR+1]++;


    ORDENAR_PUNTOS(JUGADORES, PUNTOS);
    MOSTRAR(JUGADORES, PUNTOS);
    printf("\n\n\tEL JUGADOR %d VA A LA CABEZA", (JUGADORES[0]));
    printf("\n\n\tQUE JUGADOR ANOTO UN PUNTO?: ");
    scanf("%d", &GOL);
    printf("\n");
}

printf("\n\n\tCOMPETENCIA FINALIZADA, POSICIONES FINALES:\n");
MOSTRAR(JUGADORES, PUNTOS);
printf("\n\n\tEL GANADOR ES EL JUGADOR %d", (JUGADORES[0]));


}

void MOSTRAR(int JUGADORES[], int PUNTOS[]){

int CONTADOR;
printf("\t\tJUGADOR\tPUNTOS\n");

for(CONTADOR = 0 ; CONTADOR < N ; CONTADOR++)
    printf("\t\t%d\t%d\n", JUGADORES[CONTADOR], PUNTOS[CONTADOR]);

}


void ORDENAR_PUNTOS(int JUGADORES[], int PUNTOS[]){

int AUX_JUGADORES;
int AUX_PUNTOS;
int I, J;

for(I=0 ; I<N-1 ; I++)
    for(J=0 ; J<N-I-1; J++)
        if(PUNTOS[J] < PUNTOS[J+1]){

            AUX_PUNTOS   = PUNTOS[J];
            PUNTOS[J]    = PUNTOS[J+1];
            PUNTOS[J+1]  = AUX_PUNTOS;

            AUX_JUGADORES   = JUGADORES[J];
            JUGADORES[J]    = JUGADORES[J+1];
            JUGADORES[J+1]  = AUX_JUGADORES;

        }





}
