#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LET 7
#define CANT 130


struct FECHA{
int DIA;
int MES;
int ANIO;
};

struct CLUB {
char NOMBRE[15];
char SEXO;
struct FECHA NAC;

};

void GENERADOR(struct CLUB[CANT]);
void MOSTRAR(struct CLUB[CANT], int);
void ORDENAR(struct CLUB[CANT]);
void CARGAR(struct CLUB[CANT]);

int main(){

srand(time(NULL));
struct CLUB INTEGRANTES[CANT];

GENERADOR(INTEGRANTES);
MOSTRAR(INTEGRANTES, 0);

ORDENAR(INTEGRANTES);

getchar();

MOSTRAR(INTEGRANTES, 1);


printf("\n\n\n\n\n");


}







void GENERADOR(struct CLUB IN[CANT]){

int I, J;


//PERSONAS ALEATORIAS
for(I = 0 ; I<CANT ; I++){
    IN[I].SEXO = rand()%2 ? 'M' : 'F';
    IN[I].NAC.DIA = 1+rand()%29;
    IN[I].NAC.MES = 1+rand()%12;
    IN[I].NAC.ANIO = 2000+rand()%10;
    for(J = 0 ; J<MAX_LET ; J++ ){
        IN[I].NOMBRE[J] = 65+rand()%26;


    }
}
}



void MOSTRAR(struct CLUB IN[CANT], int FLAG){

int I;

if(FLAG == 0){
    printf("\t%-25s%-10s\t\t%-24s", "NOMBRE", "SEXO", "FECHA DE NACIMIENTO");

    for(I = 0 ; I<CANT ; I++){
        printf("\n\n\t%-25s%-10c\t\t%d : %d : %d", IN[I].NOMBRE, IN[I].SEXO,
                                                    IN[I].NAC.DIA, IN[I].NAC.MES,
                                                    IN[I].NAC.ANIO);
    }
}

if(FLAG == 1){

    printf("\n\n\n\n\n\t\t\tORDENADO POR CATEGORIA\n\n");


    printf("\t\t\t\tJUVENILES\n\n");
    printf("\t%-25s%-10s\t\t%-24s", "NOMBRE", "SEXO", "FECHA DE NACIMIENTO");

    for(I = 0 ; I<CANT ; I++){
        if(IN[I].NAC.ANIO <= 2005){
            printf("\n\n\t%-25s%-10c\t\t%d : %d : %d", IN[I].NOMBRE, IN[I].SEXO,
                                                        IN[I].NAC.DIA, IN[I].NAC.MES,
                                                        IN[I].NAC.ANIO);
        }
    }

    printf("\n\n\n\t\t\t\tCADETES\n\n");
    printf("\t%-25s%-10s\t\t%-24s", "NOMBRE", "SEXO", "FECHA DE NACIMIENTO");

    for(I = 0 ; I<CANT ; I++){
        if(IN[I].NAC.ANIO > 2005 && IN[I].NAC.ANIO <= 2007 ){
            printf("\n\n\t%-25s%-10c\t\t%d : %d : %d", IN[I].NOMBRE, IN[I].SEXO,
                                                        IN[I].NAC.DIA, IN[I].NAC.MES,
                                                        IN[I].NAC.ANIO);
        }
    }


    printf("\n\n\n\t\t\t\tINFANTILES\n\n");
    printf("\t%-25s%-10s\t\t%-24s", "NOMBRE", "SEXO", "FECHA DE NACIMIENTO");

    for(I = 0 ; I<CANT ; I++){
        if(IN[I].NAC.ANIO > 2007){
            printf("\n\n\t%-25s%-10c\t\t%d : %d : %d", IN[I].NOMBRE, IN[I].SEXO,
                                                        IN[I].NAC.DIA, IN[I].NAC.MES,
                                                        IN[I].NAC.ANIO);
        }
    }




}

}

void ORDENAR(struct CLUB IN[CANT]){

int I, J;
struct CLUB AUX;

for(I = 0 ; I<CANT-1 ; I++)
    for(J = 0 ; J<CANT-I-1 ; J++)
        if(IN[J].SEXO == 'F'){

            AUX = IN[J];
            IN[J] = IN[J+1];
            IN[J+1] = AUX;

        }




}


void CARGAR(struct CLUB IN[CANT]){


int I;



for(I = 0 ; I<CANT ; I++){
    printf("\nNOMBRE: ");
    fflush(stdin);
    gets(IN[I].NOMBRE);
    printf("\nSEXO: ");
    scanf("%c", &IN[I].SEXO);
    printf("\nFECHA DE NACIMIENTO: ");
    scanf("%d:%d:%d", &IN[I].NAC.DIA, &IN[I].NAC.MES, &IN[I].NAC.ANIO);




}
}
