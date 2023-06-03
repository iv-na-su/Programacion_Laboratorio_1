#include <stdio.h>
#include <math.h>

int num_perfecto(int);

int main(){

    int num1, num2, suma1=0, suma2=0;

printf("INGRESAR DOS NUMEROS Y TE HARE SABER SI LOS NUMEROS SON AMIGOS: \n\n%c", 26);
scanf("%d", &num1);

printf("\n%c", 26);
scanf("%d", &num2);

suma1 = suma1 + num_perfecto(num1);
suma2 = suma2 + num_perfecto(num2);

if(suma1 == num2 && suma2 == num1)
    printf("\n\tLOS NUMEROS %d Y %d SON AMIGOS\n", num1, num2);
else
    printf("\n\tLOS NUMEROS %d Y %d NO SON AMIGOS\n", num1, num2);

//printf("\nel resultado es %d %d", suma1, suma2);





}

int num_perfecto(int NUMERO){
    int divisores, suma=0;

for(divisores = 1 ; divisores <= (NUMERO/2) ; divisores++){

    if(NUMERO%divisores == 0){
        suma = suma+divisores;
    }
    else;

}



return suma;

}
