#include <stdio.h>
#include <stdlib.h>



int COMPARACION(long int, long int[], long int[]);

int main(){

long int N, CONTADOR;

printf("CANTIDAD DE NUMEROS ENTEROS QUE DESEAS INGRESAR PARA COMPARAR: ");
scanf("%d", &N);

long int NUMEROS1[N], NUMEROS2[N];

printf("\n\nINGRESAR PRIMER GRUPO DE NUMEROS\n");

for(CONTADOR = 0; CONTADOR < N ; CONTADOR++){

    printf("\n%d: ", CONTADOR+1);
    scanf("%d", &NUMEROS1[CONTADOR]);

}

printf("\n\nINGRESAR SEGUNDO GRUPO DE NUMEROS\n");

for(CONTADOR = 0; CONTADOR < N ; CONTADOR++){

    printf("\n%d: ", CONTADOR+1);
    scanf("%d", &NUMEROS2[CONTADOR]);

}

if (COMPARACION(N, NUMEROS1, NUMEROS2)== 1)
    printf("\nLOS NUMEROS SON IGUALES\n\n");
else
    printf("\n\nLOS NUMEROS NO SON IGUALES\n\n");




}

int COMPARACION(long int LONGITUD, long int NUMEROS1[LONGITUD], long int NUMEROS2[LONGITUD]){
int CONTADOR, COMP= 0;

for(CONTADOR = 0 ; CONTADOR < (LONGITUD-1)  ; CONTADOR++){

    if(NUMEROS1[CONTADOR] == NUMEROS2[CONTADOR]){
        COMP++;
//      printf("A");
    }
    else;

}

if(COMP == LONGITUD-1)
    return 1;
else
    return 0;

}






