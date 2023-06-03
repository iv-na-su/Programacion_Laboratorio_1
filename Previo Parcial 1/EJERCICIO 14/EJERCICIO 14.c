#include <stdio.h>

int main(){

int numero, primo= 0, cont;

printf("INGRESAR UN NUMERO: ");
scanf("%d", &numero);

for(cont = 2 ; cont <= (numero/2); cont++ ){

    if(numero%cont == 0)
        primo++;
    else;



}
if(primo == 0 || numero == 2)
    printf("EL NUMERO %d ES PRIMO", numero);
else
    printf("EL NUMERO %d NO ES PRIMO", numero);


}

