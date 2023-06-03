#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_MAT 20
#define MAX_LET 7
#define CANT 80

struct FECHA{
int DIA;
int MES;
int ANIO;
};

struct CARRERA{
char NOMBRE[20];
char SEXO;
int MATERIA[20];
struct FECHA NAC;
};

void CARGAR(struct CARRERA[CANT]);//LISTO
void GENERADOR(struct CARRERA[CANT]);//LISTO
void MOSTRAR(struct CARRERA[CANT], int);//LISTO
void BUSCAR_NOM(struct CARRERA[CANT], char[20]);//LISTO
void BUSCAR_MAT(struct CARRERA[CANT], int);//LISTO


int main(){

srand(time(NULL));

char ALUM_BUS[20];
int CODIGO, FLAG=0;
struct CARRERA ALUMNOS[CANT];

GENERADOR(ALUMNOS);
MOSTRAR(ALUMNOS, 0);
MOSTRAR(ALUMNOS, 1);

while(FLAG != 3){
    printf("\n\n\n\n\n\tBUSCAR PROMEDIO DE UN ALUMNO(1)\t\tBUSCAR NOTAS DE UNA MATERIA(2)\t\tNADA(3)\n\n\t\t\t\t\tQUE DESEA HACER?: ");
    scanf("%d", &FLAG);



    if(FLAG == 1){
        fflush(stdin);
        printf("\n\n\t\t\t\tINGRESAR EL NOMBRE DEL ALUMNO: ");
        gets(ALUM_BUS);
        BUSCAR_NOM(ALUMNOS, ALUM_BUS);


    }


    if(FLAG == 2){
        printf("\n\n\n\t\t\tINGRESAR CODIGO DE MATERIA (1 A %d): ", MAX_MAT);
        scanf("%d", &CODIGO);
        BUSCAR_MAT(ALUMNOS, CODIGO);
    }


}

printf("\n\n\n\n\n\n");
}








void GENERADOR(struct CARRERA AL[CANT]){

int I, J;


//PERSONAS ALEATORIAS
for(I = 0 ; I<CANT ; I++){
    AL[I].SEXO = rand()%2 ? 'F' : 'M';
    AL[I].NAC.DIA = 1+rand()%29;
    AL[I].NAC.MES = 1+rand()%12;
    AL[I].NAC.ANIO = 1970+rand()%30;
    for(J = 0 ; J<MAX_LET ; J++ ){
        AL[I].NOMBRE[J] = 65+rand()%26;
    }
    for(J = 0 ; J<MAX_MAT ; J++ ){
        AL[I].MATERIA[J] = 1+rand()%10;

    }




}

}




void CARGAR(struct CARRERA AL[CANT]){


int I, J;



for(I = 0 ; I<CANT ; I++){
    printf("\nNOMBRE: ");
    fflush(stdin);
    gets(AL[I].NOMBRE);
    printf("\nSEXO: ");
    scanf("%c", &AL[I].SEXO);
    printf("\nFECHA DE NACIMIENTO: ");
    scanf("%d:%d:%d", &AL[I].NAC.DIA, &AL[I].NAC.MES, &AL[I].NAC.ANIO);

    for(J = 0 ; J<MAX_MAT ; J++){
        printf("\nNOTA DE LA MATERIA %d: ", J+1);
        scanf("%d", &AL[I].MATERIA[J]);
   }

}
printf("\n\n\n\n\n\n");
}


void MOSTRAR(struct CARRERA AL[CANT], int FLAG){

int I, J, DIV_M=0, DIV_F=0;
float PROM = 0, PROM_M = 0, PROM_F = 0, PROM_MAX = 0;
struct CARRERA AUX;

if(FLAG == 0){
    printf("\t\t\t\tALUMNOS");
    printf("\n\n%-15s%-6s\t%-24s\t\t\t%-20s", "NOMBRE", "SEXO", "FECHA DE NACIMIENTO", "NOTAS");

    for(I = 0 ; I<CANT ; I++){
        printf("\n\n%-15s%-6c\t%d : %d : %d\t\t", AL[I].NOMBRE, AL[I].SEXO, AL[I].NAC.DIA, AL[I].NAC.MES, AL[I].NAC.ANIO  );
        for(J = 0 ; J<MAX_MAT ; J++){
            printf("%-4d", AL[I].MATERIA[J]);


        }
        printf("\n\n");

    }


}

if(FLAG == 1 ){

   for(I = 0 ; I<CANT ; I++){
        for(J = 0 ; J<MAX_MAT ; J++){
            PROM = PROM + AL[I].MATERIA[J];
        }
        PROM = (PROM/MAX_MAT);
        /*if(PROM > PROM_MAX){
            PROM_MAX = PROM;
            AUX = AL[I];
        }
        else;*/

        if(AL[I].SEXO == 'M'){
            PROM_M = PROM_M + PROM;
            DIV_M++;

        }
        if(AL[I].SEXO == 'F'){
            PROM_F = PROM_F + PROM;
            DIV_F++;

        }
        PROM = 0;




   }
   PROM_F = (PROM_F/DIV_F);
   PROM_M = (PROM_M/DIV_M);
   printf("\n\nEL PROMEDIO ESTUDIANTES MASCULINOS: %.2f\t\tPROMEDIO ESTUDIANTES FEMENINAS: %.2f", PROM_M, PROM_F);
   //printf("\n\n\t\tEL ALUMNO CON MEJOR PROMEDIO ES %s CON UN PROMEDIO DE %.2f", AUX.NOMBRE, PROM_MAX);









}



}


void BUSCAR_NOM(struct CARRERA AL[CANT], char ALUM[20]){

int I, J;
float PROMEDIO= 0;

for(I = 0 ; I<CANT ; I++){
    if(strcmp(AL[I].NOMBRE, ALUM) == 0){
        for(J = 0 ; J<MAX_MAT ; J++)
            PROMEDIO = PROMEDIO + AL[I].MATERIA[J];
        PROMEDIO = PROMEDIO/MAX_MAT;
        printf("\n\n\t\t\t\tEL PROMEDIO DE %s ES %.2f", ALUM, PROMEDIO);
        return;

    }


}
printf("\n\n\t\t\t\tEL ALUMNO %s NO EXISTE", ALUM);




}

void BUSCAR_MAT(struct CARRERA AL[CANT], int COD){

int I, J;
struct CARRERA COPIA_AL[CANT];
struct CARRERA AUX;



for(I = 0 ; I<CANT ; I++)
    COPIA_AL[I] = AL[I];

for(I = 0 ; I<CANT-1 ; I++)
    for(J = 0 ; J<CANT-I-1 ; J++){
        if(COPIA_AL[J].MATERIA[COD-1] < COPIA_AL[J+1].MATERIA[COD-1]){

            AUX = COPIA_AL[J];
            COPIA_AL[J] = COPIA_AL[J+1];
            COPIA_AL[J+1] = AUX;
        }
   }






printf("\n\n%-15s%-6s\t%-24s\t%-20s", "NOMBRE", "SEXO", "FECHA DE NACIMIENTO", "NOTAS");

for(I = 0 ; I<CANT ; I++){
    printf("\n\n%-15s%-6c\t%d : %d : %d\t\t\t%-d", COPIA_AL[I].NOMBRE, COPIA_AL[I].SEXO, COPIA_AL[I].NAC.DIA, COPIA_AL[I].NAC.MES, COPIA_AL[I].NAC.ANIO, COPIA_AL[I].MATERIA[COD-1]);



        }





}



