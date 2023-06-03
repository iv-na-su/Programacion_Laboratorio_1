#include <stdio.h>



int main(){



long int numero, divisores, suma= 0;


printf("INGRESAR UN NUMERO: ");
scanf("%d", &numero);


for(divisores = 1 ; divisores <= (numero/2) ; divisores++){

    if(numero%divisores == 0){
        suma = suma+divisores;
    }
    else;

}
    //printf("%d %d", numero, suma);
    if(suma == numero)
        printf("EL NUMERO %d ES UN NUMERO PERFECTO", numero);
    else
        printf("EL NUMERO %d NO ES UN NUMERO PERFECTO", numero);

}
