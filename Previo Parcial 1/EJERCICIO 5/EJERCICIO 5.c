#include <stdio.h>

/*El usuario ingresará 6 números enteros. El programa debe indicar si el ingreso
constituye una serie creciente, decreciente, o ninguna de las anteriores.*/

int main(){

int numero, numero_anterior, cont, validador=0;

printf("ingresar 6 numeros enteros de forma creciente o decreciente\n\n1: ");
scanf("%d", &numero_anterior);

for(cont = 2; cont<=6; cont++){
    printf("\n%d: ", cont);
    scanf("%d", &numero);

    if(numero>numero_anterior){
        numero_anterior = numero;
        validador++;}
    else if(numero<numero_anterior){
        numero_anterior = numero;
        validador--;}
    else;



}

if(validador == 5)
    printf("\nLos numeros fueron ingresados de forma creciente\n");
else if(validador == -5)
    printf("\nLos numeros fueron ingresados de forma decreciente\n");
else
    printf("\nLa secuencia de numeros ingresados no es creciente ni decreciente\n");


}
