#include <stdio.h>



int main(){

int cantidad_per=0, perfectos=4, divisores, suma= 0;
long int cont;

for(cont=2 ; cantidad_per < perfectos; cont = cont+2){

    for(divisores = 1 ; divisores <= (cont/2) ; divisores++){

        if(cont%divisores == 0){
            suma = suma+divisores;
        }
        else;

        if(suma == cont && divisores == (cont/2)){
            cantidad_per++;
            printf("%d ", suma);
            suma = 0;

        }
        else;


    }
    suma = 0;

}






}
