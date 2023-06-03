#include <stdio.h>
#include <stdlib.h>

#define N 10

void MOSTRAR(int[], char[], float[]);

int main(){
int RAND, CONTADOR;
int CUENTA[N];
char TIPO [N];
float SALDO [N];





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

for(CONTADOR= 0 ; CONTADOR < N ; CONTADOR++ ){
    if(TIPO[CONTADOR] == 'A')
       printf("\t%d\t%c\t%.2f\n", CUENTA[CONTADOR], TIPO[CONTADOR], SALDO[CONTADOR]);



}


}


void MOSTRAR(int CUENTA[], char TIPO[], float SALDO[]){

int CONTADOR;
printf("\tCUENTA\tTIPO\tSALDO\n");

for(CONTADOR = 0 ; CONTADOR < N ; CONTADOR++)
    printf("\t%d\t%c\t%.2f\n", CUENTA[CONTADOR], TIPO[CONTADOR], SALDO[CONTADOR]);



}
