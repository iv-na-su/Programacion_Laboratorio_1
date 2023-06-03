#include <stdio.h>
#include <stdlib.h>

#define N 10

void MOSTRAR(int[], char[], float[]);
void ORDENAR_SALDO(int[], char[], float[]);

int main(){
int RAND, CONTADOR;
int CUENTA[N];
char TIPO [N];
float SALDO [N];
int MAXIMO;

srand(121);



for(CONTADOR= 0 ; CONTADOR < N ; CONTADOR++ ){

    CUENTA[CONTADOR] = (100+rand()%900);

    RAND = (1+rand()%3);
    if (RAND == 1 )
        TIPO[CONTADOR] = 'A';
    if (RAND == 2)
      TIPO[CONTADOR] = 'B';
    if (RAND == 3)
      TIPO[CONTADOR] = 'C';


SALDO[CONTADOR] = (1000+rand()%9000)/10.0;


}

MOSTRAR(CUENTA, TIPO, SALDO);

getchar();
printf("\n\n");

ORDENAR_SALDO(CUENTA, TIPO, SALDO);

for(CONTADOR = 0 ; CONTADOR < N ; CONTADOR++)
    if(SALDO[CONTADOR]> 500.0)
        printf("\t%d\t%c\t%.2f\n", CUENTA[CONTADOR], TIPO[CONTADOR], SALDO[CONTADOR]);


}





void MOSTRAR(int CUENTA[], char TIPO[], float SALDO[]){

int CONTADOR;
printf("\tCUENTA\tTIPO\tSALDO\n");

for(CONTADOR = 0 ; CONTADOR < N ; CONTADOR++)
    printf("\t%d\t%c\t%.2f\n", CUENTA[CONTADOR], TIPO[CONTADOR], SALDO[CONTADOR]);

}


void ORDENAR_SALDO(int CUENTA[], char TIPO[], float SALDO[]){

int AUX_CUENTA;
char AUX_TIPO;
float AUX_SALDO;
int I, J;

for(I=0 ; I<N-1 ; I++)
    for(J=0 ; J<N-I-1; J++)
        if(SALDO[J] < SALDO[J+1]){

            AUX_SALDO   = SALDO[J];
            SALDO[J]    = SALDO[J+1];
            SALDO[J+1] = AUX_SALDO;

            AUX_CUENTA   = CUENTA[J];
            CUENTA[J]    = CUENTA[J+1];
            CUENTA[J+1] = AUX_CUENTA;

            AUX_TIPO   = TIPO[J];
            TIPO[J]    = TIPO[J+1];
            TIPO[J+1] = AUX_TIPO;
        }





}

