#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LET 7
#define CANT 16

struct TORNEO{
char NOMBRE[20];
char SEXO;
int HANDICAP;
};

void CARGAR(struct TORNEO[CANT]);
void GENERADOR(struct TORNEO[CANT]);
void MOSTRAR(struct TORNEO[CANT], int);
void ORDENAR(struct TORNEO[CANT]);


int main(){

srand(time(NULL));

struct TORNEO INTEGRANTES[CANT];

GENERADOR(INTEGRANTES);
MOSTRAR(INTEGRANTES, 0);


ORDENAR(INTEGRANTES);
getchar();
printf("\n\n\n\n");
MOSTRAR(INTEGRANTES, 1);
printf("\n\n\n\n");


}


void GENERADOR(struct TORNEO IN[CANT]){

int I, J, FLAG_SEXO;


//PERSONAS ALEATORIAS
for(I = 0 ; I<CANT ; I++){
    IN[I].SEXO = 'M';
    IN[I].HANDICAP = 1+rand()%20;
    for(J = 0 ; J<MAX_LET ; J++ ){
        IN[I].NOMBRE[J] = 65+rand()%26;


    }




}

for(I = 0 ; I<CANT/2 ; I++){
    FLAG_SEXO = rand()%CANT;
    if(IN[FLAG_SEXO].SEXO == 'M')
        IN[FLAG_SEXO].SEXO = 'F';
    else
        I--;


}
}



void CARGAR(struct TORNEO IN[CANT]){


int I;



for(I = 0 ; I<CANT ; I++){
    printf("\nNOMBRE: ");
    fflush(stdin);
    gets(IN[I].NOMBRE);
    printf("\nSEXO: ");
    scanf("%c", &IN[I].SEXO);
    printf("\nHANDICAP: ");
    scanf("%d", &IN[I].HANDICAP);


}
}


void MOSTRAR(struct TORNEO IN[CANT], int FLAG){

int I;
long int HANDI_MAX = 0;
struct TORNEO AUX_H[2];

if(FLAG == 0){
    printf("\t\t\t\tPARTICIPANTES DEL TORNEO");
    printf("\n\n\t%-25s%-10s\t\t%-24s", "NOMBRE", "SEXO", "HANDICAP");

    for(I = 0 ; I<CANT ; I++){
        printf("\n\n\t%-25s%-10c\t\t%d", IN[I].NOMBRE, IN[I].SEXO, IN[I].HANDICAP );
    }
}


if(FLAG == 1){


printf("\t\t\t\t\t\tEQUIPOS");

for(I = 0 ; I<(CANT/2) ; I++){
    printf("\n\nEQUIPO %d: %-20s%-5c\t\t%5d   &   %-20s%-5c\t\t%5d", I+1, IN[I].NOMBRE, IN[I].SEXO, IN[I].HANDICAP, IN[CANT-I-1].NOMBRE, IN[CANT-I-1].SEXO, IN[CANT-I-1].HANDICAP);

    if ((IN[I].HANDICAP + IN[CANT-I-1].HANDICAP) > HANDI_MAX){
        HANDI_MAX = IN[I].HANDICAP + IN[CANT-I-1].HANDICAP;
        AUX_H[0] = IN[I];
        AUX_H[1] = IN[CANT-I-1];
    }
}

printf("\n\n\n\nEL EQUIPO CON EL HANDICAP MAS ALTO ES EL DE: |%s|   &   |%s|  CON UN TOTAL DE |%d| PUNTOS", AUX_H[0].NOMBRE, AUX_H[1].NOMBRE, HANDI_MAX );







}




}


void ORDENAR(struct TORNEO IN[CANT]){

int I, J;
struct TORNEO AUX;

for(I = 0 ; I<CANT-1 ; I++)
    for(J = 0 ; J<CANT-I-1 ; J++)
        if(IN[J].SEXO == 'F'){

            AUX = IN[J];
            IN[J] = IN[J+1];
            IN[J+1] = AUX;

        }


for(I = 0 ; I<(CANT/2)-1 ; I++){
    for(J = 0 ; J<(CANT/2)-I-1 ; J++)
        if(IN[J].HANDICAP < IN[J+1].HANDICAP && IN[J+1].SEXO == 'M' ){

            AUX = IN[J];
            IN[J] = IN[J+1];
            IN[J+1] = AUX;

        }
    for(J = (CANT/2) ; J<CANT-I-1 ; J++)
        if(IN[J].HANDICAP < IN[J+1].HANDICAP && IN[J+1].SEXO == 'F' ){

            AUX = IN[J];
            IN[J] = IN[J+1];
            IN[J+1] = AUX;

        }


}
}




