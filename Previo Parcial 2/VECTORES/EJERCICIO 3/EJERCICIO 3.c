#include <stdio.h>
#include <stdlib.h>

float PROMEDIO (int, int[]);

int main(){

int N, cant_num;

printf("\tCUANTOS NUMEROS QUIERES INGRESAR?: ");
scanf("%d", &N);

int  NUMEROS[N];

for (cant_num = 0; cant_num < N; cant_num++){

    printf("\n\t\t%d: ", cant_num+1);
    scanf("%d", &NUMEROS[cant_num]);

}

printf("\n\nEL PROMEDIO DE TODOS LOS NUMEROS ES: %.2f", PROMEDIO(N, NUMEROS));






}


float PROMEDIO(int NUM, int NUMEROS[NUM]){
int  cant_num;
float PROM = 0;

for(cant_num= 0 ; cant_num < NUM; cant_num++){

    PROM = PROM + NUMEROS[cant_num] ;

}

PROM = PROM/NUM;

return PROM;
}
