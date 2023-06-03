#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//HAY UN ERROR INDEFINIDO

#define CANTIDAD_P 2

#define LETRAS 20

int COMPARAR(char [CANTIDAD_P][LETRAS]);

int main(){


int CONTADOR;
char PALABRAS[CANTIDAD_P][LETRAS];

printf("INGRESAR %d PALABRAS: \n", CANTIDAD_P);

for(CONTADOR= 0 ; CONTADOR < CANTIDAD_P ; CONTADOR++){
    printf("\n%d: ", CONTADOR+1);
    gets(PALABRAS[CONTADOR]);




}


printf("\n\n%s ESTA PRIMERO EN ORDEN ALFABETICO\n\n", PALABRAS[COMPARAR(PALABRAS)]);

}

int COMPARAR(char PALABRAS[CANTIDAD_P][LETRAS]){


int I, J, MIN=1;


for(I = 0 ; I < CANTIDAD_P-1 ; I++){
    for(J = 0 ; J < LETRAS-1 ; J++){
        if(strcmp(! PALABRAS[I][J] , PALABRAS[I+1][J+1])){
            if(strcmp(! PALABRAS[I][J] , "Ñ" ||strcmp(! PALABRAS[I+1][J+1] , "Ñ"  ){
                PALABRAS[I][J] = PALABRAS[I][J] - 85;
                PALABRAS[I+1][J+1] = PALABRAS[I+1][J+1] - 85;
                if(PALABRAS[I][J] > 79 || PALABRAS[I+1][J+1]== 79 ){
                    PALABRAS[I][J]++;
                    PALABRAS[I+1][J+1]++;
                }
            }
            if(strcmp(! PALABRAS[I][J] , "ñ" || strcmp(! PALABRAS[I+1][J+1] , "ñ" ){
                PALABRAS[I][J] = PALABRAS[I][J] - 53;
                PALABRAS[I+1][J+1] = PALABRAS[I+1][J+1] - 53;
                if(PALABRAS[I][J] > 111 || PALABRAS[I+1][J+1] > 111 ){
                    PALABRAS[I][J]++;
                    PALABRAS[I+1][J+1]++;
                }
            }


        }


     if(strcmp(! PALABRAS[I][J] , PALABRAS[I+1][J+1])){
        MIN = I;
        J = LETRAS;
     }
    }



}


return MIN;

}
