#include <stdio.h>
#include <math.h>

int POTENCIA(int, int);

int main(){

int numero, poten;
unsigned long int resultado;


printf("INGRESAR UN NUMERO: ");
scanf("%d", &numero);

printf("INGRESAR LA POTENCIA DEL NUMERO ANTERIOR: ");
scanf("%d", &poten);

resultado = POTENCIA(numero, poten);

printf("EL RESULTADO ES: %lu", resultado);




}

int POTENCIA(int A, int B){

unsigned long int resultado;
resultado = A;
while(B>1){
    resultado = resultado * A;
    B--;


}

return resultado;

}
