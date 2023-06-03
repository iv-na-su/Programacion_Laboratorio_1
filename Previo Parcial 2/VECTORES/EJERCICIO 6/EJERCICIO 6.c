#include <stdio.h>
#include <stdlib.h>

int ASCENDENTE(long int, long int[]);

int main(){

long int N, CONTADOR;

printf("CANTIDAD DE NUMEROS ENTEROS QUE DESEAS INGRESAR: ");
scanf("%d", &N);

long int NUMEROS[N];


for(CONTADOR = 0; CONTADOR < N ; CONTADOR++){

    printf("\n%d: ", CONTADOR+1);
    scanf("%d", &NUMEROS[CONTADOR]);

}

if (ASCENDENTE(N, NUMEROS)== 1)
    printf("\nLOS NUMEROS ESTAN EN FORMA ASCENDENTE\n\n");
else
    printf("\nLOS NUMEROS NO ESTAN EN FORMA ASCENDENTE\n\n");




}

int ASCENDENTE(long int LONGITUD, long int NUMEROS[LONGITUD]){
int CONTADOR, ASC= 0;

for(CONTADOR = 0 ; CONTADOR < (LONGITUD-1)  ; CONTADOR++){

    if(NUMEROS[CONTADOR] < NUMEROS[CONTADOR+1]){
        ASC++;
//      printf("A");
    }
    else;

}

if(ASC == LONGITUD-1)
    return 1;
else
    return 0;

}
