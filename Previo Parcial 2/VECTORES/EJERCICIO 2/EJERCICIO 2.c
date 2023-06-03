#include <stdio.h>
#include <stdlib.h>

#define N 20

int main(){


int NUMEROS[N], cant_num, DIV, CANT_DIV=0;

printf("\tINGRESAR %d NUMEROS\n", N);

for (cant_num = 0; cant_num < N; cant_num++){

    printf("\n\t\t%d: ", cant_num+1);
    scanf("%d", &NUMEROS[cant_num]);

}

printf("\n\nINGRESAR NUMERO POR EL QUE SE DIVIDIRAN : ");
scanf("%d", &DIV);

for(cant_num = 0 ; cant_num < N ; cant_num++){

    if((NUMEROS[cant_num])%DIV == 0 )
        CANT_DIV++;


}

printf("\n\n%d NUMEROS SON DIVISIBLES POR %d", CANT_DIV, DIV);


printf("\n\n\n");

}
