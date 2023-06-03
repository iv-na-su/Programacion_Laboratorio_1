#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LET 7
#define CANT 100

struct FECHA{
int DIA;
int MES;
int ANIO;
};

struct MEDICIONES {
char SENSOR[10];
struct FECHA DIA_MEDICION;
float TEMPERATURA;
};

void GENERADOR(struct MEDICIONES[CANT]);
void MOSTRAR(struct MEDICIONES[CANT]);
struct MEDICIONES MAS_BAJA(struct MEDICIONES [CANT], int);
void REGISTRO(struct MEDICIONES[CANT], int , char[10]);

int main(){

srand(time(NULL));
struct MEDICIONES VOLCAN[CANT];
struct MEDICIONES AUX;
char CODIGO[10];



GENERADOR(VOLCAN);
MOSTRAR(VOLCAN);

AUX = MAS_BAJA(VOLCAN, CANT);

printf("\n\nEL SENSOR QUE RECIBIO LA TEMPERATURA MAS BAJA FUE %s CON UNA TEMPERATURA DE %.2f EN LA FECHA %d : %d : %d",
        AUX.SENSOR, AUX.TEMPERATURA, AUX.DIA_MEDICION.DIA, AUX.DIA_MEDICION.MES, AUX.DIA_MEDICION.ANIO);

 printf("\n\n\n\n\n\n");


printf("INGRESAR EL NOMBRE DEL SENSOR QUE DESEAS VER SUS REGISTROS: ");
gets(CODIGO);


REGISTRO(VOLCAN, CANT, CODIGO);
printf("\n\n\n\n\n\n");
}


void GENERADOR(struct MEDICIONES V[CANT]){//GENERADOR AUTOMATICO DE DATOS

int I, J;
char NOMB_SENSOR[10][10] = {"AASWWDD", "DDDAAASS", "FFFAA", "GGGSDV", "HJHHGF",
                            "KKHGG", "FDDD", "LLLHJG", "FVCCVBN", "NDFDF"};
//ASIGNO NOMBRES PREDEFINIDOS PARA QUE SIEMPRE HAYA MAS DE UN REGISTRO POR SENSOR


for(I = 0 ; I<CANT ; I++){
        V[I].TEMPERATURA = (3000+rand()%20000)/100.0;
        V[I].DIA_MEDICION.DIA = 1+rand()%29;
        V[I].DIA_MEDICION.MES = 1+rand()%12;
        V[I].DIA_MEDICION.ANIO = 1990+rand()%10;
        strcpy(V[I].SENSOR, NOMB_SENSOR[rand()%10]);
    }

}


void MOSTRAR(struct MEDICIONES V[CANT]){




int I, J;


    printf("\t%-25s%-10s\t\t%-24s", "CODIGO SENSOR", "TEMPERATURA", "FECHA DE MEDICION");

    for(I = 0 ; I<CANT ; I++)
            printf("\n\n\t%-25s%-7.2f%cC\t\t%d : %d : %d", V[I].SENSOR, V[I].TEMPERATURA, 248/*SIMBOLO DE º*/,
                                                        V[I].DIA_MEDICION.DIA, V[I].DIA_MEDICION.MES,
                                                        V[I].DIA_MEDICION.ANIO);

}

struct MEDICIONES MAS_BAJA(struct MEDICIONES V[CANT], int N){

int CONTADOR, MED_MIN = 0;
float TEMP_MIN;

TEMP_MIN = V[0].TEMPERATURA;//LO NORMAL SERIA NO TENER ESE [0] EN TEMPERATURA

for(CONTADOR = 1 ; CONTADOR<N ; CONTADOR++)
    if(V[CONTADOR].TEMPERATURA < TEMP_MIN){
        TEMP_MIN = V[CONTADOR].TEMPERATURA;
        MED_MIN = CONTADOR;

    }



return V[MED_MIN];




}

void REGISTRO(struct MEDICIONES V[CANT], int N, char COD[10]){

int I, J, FLAG = 0;
struct MEDICIONES AUX;


for(I = 0 ; I<N-1 ; I++)
    for(J = 0 ; J<N-I-1; J++){
        if(V[J].DIA_MEDICION.ANIO > V[J+1].DIA_MEDICION.ANIO){

            AUX = V[J];
            V[J] = V[J+1];
            V[J+1] = AUX;


        }
        if(V[J].DIA_MEDICION.ANIO == V[J+1].DIA_MEDICION.ANIO && V[J].DIA_MEDICION.MES > V[J+1].DIA_MEDICION.MES){

            AUX = V[J];
            V[J] = V[J+1];
            V[J+1] = AUX;


        }
        if(V[J].DIA_MEDICION.ANIO == V[J+1].DIA_MEDICION.ANIO && V[J].DIA_MEDICION.MES == V[J+1].DIA_MEDICION.MES && V[J].DIA_MEDICION.DIA > V[J+1].DIA_MEDICION.DIA ){

            AUX = V[J];
            V[J] = V[J+1];
            V[J+1] = AUX;


        }





}

for(I = 0 ; I<N ; I++){
    if(strcmp(V[I].SENSOR, COD) == 0){
        printf("\n\n%3d : %3d : %3d \t %7.2f%cC", V[I].DIA_MEDICION.DIA, V[I].DIA_MEDICION.MES, V[I].DIA_MEDICION.ANIO, V[I].TEMPERATURA, 248);
        FLAG = 1;
    }
}


if(FLAG == 0)
    printf("\n\n%s NO REGISTRO NINGUNA MEDICION", COD);

}

