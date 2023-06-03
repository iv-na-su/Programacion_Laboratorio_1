#include <stdio.h>
#include <stdlib.h>

#define N 20


int main(){
int NUMEROS[N], cant_num;

printf("\tINGRESAR %d NUMEROS\n", N);

for (cant_num = 0; cant_num < N; cant_num++){

    printf("\n\t\t%d: ", cant_num+1);
    scanf("%d", &NUMEROS[cant_num]);
}

printf("\n\n\tMOSTRANDO NUMEROS EN ORDEN QUE SE INGRESARON:\n\n\t\t");

for(cant_num = 0; cant_num < N ; cant_num++)
    printf("|%d| ", NUMEROS[cant_num]);


printf("\n\n\tMOSTRANDO NUMEROS EN ORDEN INVERSO AL QUE SE INGRESARON:\n\n\t\t");

for(cant_num = N; cant_num > 0 ; cant_num--)
    printf("|%d| ", NUMEROS[cant_num-1]);


printf("\n\n\n");
}


