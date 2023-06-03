#include <stdio.h>
#include <stdlib.h>

int DADO();

int main(){
srand(11);

int CARA_DADO[6]= {0}, cant_tiradas, N , RESULTADO;

printf("CUANTAS VECES QUIERES TIRAR EL DADO?: ");
scanf("%d", &N);

for(cant_tiradas = 0 ; cant_tiradas< N; cant_tiradas++){

    RESULTADO = DADO();
    CARA_DADO[RESULTADO-1]++;
}


printf("\n\n\n");

for(cant_tiradas = 0; cant_tiradas < 6; cant_tiradas++)
    printf("CARA %d: %d[%%%.2f]\n\n", cant_tiradas+1, CARA_DADO[cant_tiradas], (CARA_DADO[cant_tiradas]*100.0/N));

}

int DADO(){
int TIRADA;

TIRADA = 1+rand()%6;


return TIRADA;
}
