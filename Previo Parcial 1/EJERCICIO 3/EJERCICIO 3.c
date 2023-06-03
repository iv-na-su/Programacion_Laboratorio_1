#include <stdio.h>

int main(){

int numero;

printf("Ingresar un numero entero: ");
scanf("%d", &numero);

if(numero%2 == 0)
    printf("\nEl numero %d es par\n", numero);

else
    printf("\nEl numero %d es impar\n", numero);




}
