#include <stdio.h>
#include <stdlib.h>


void ALEATORIOS(int, int[]);

int main(){

srand(11);
int N, cant_num;

printf("INDICAR CANTIDAD DE NUMEROS ALEATORIOS ENTRE O Y 100 QUE NECESITES: ");
scanf("%d", &N);

int NUMEROS[N];

ALEATORIOS(N, NUMEROS);


for (cant_num = 0; cant_num < N; cant_num++){

    printf("\n\t\t%d: %d",cant_num+1, NUMEROS[cant_num] );

}

    printf("\n\n\n");




}



void ALEATORIOS(int NUM, int NUMEROS[NUM]){
int cant_num;

for(cant_num= 0 ; cant_num < NUM; cant_num++)
    NUMEROS[cant_num] = rand()%100;


return;
}
