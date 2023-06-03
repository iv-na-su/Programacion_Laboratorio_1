#include <stdio.h>


int hay_primos(int, int);
int main(){

int numero1, numero2, primos;

printf("INGRESAR DOS NUMEROS (EMPEZANDO POR EL MAS PEQUE%cO)\n1:", 165);
scanf("%d", &numero1);

printf("\n2:");
scanf("%d", &numero2);



primos = hay_primos(numero1, numero2);






printf("\n\tHAY %d NUMEROS ENTRE EL %d Y EL %d\n", primos, numero1, numero2 );




}

int hay_primos (int numerito1, int numerito2){
int contar=0, cant_primos=0, flag=0;


for(numerito1= numerito1  ; numerito1 <= numerito2 ; numerito1++){

        if(numerito1 == 1)
            numerito1++;
        else;

    for(contar = 2 ; contar <= (numerito1 / 2) && flag == 0; contar++){

        if(numerito1%contar == 0){
            flag = 1;
        }
        else;

    }

    if(flag == 0)
        cant_primos++;
    else
        flag = 0;




}

return cant_primos;


}
