#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(){

int numero, primo = 0, cont;

for(cont = 3 ; cont <= MAX ; cont++){

    for(numero = 2 ; numero < cont && primo == 0 ; numero++){

        if(cont%numero == 0){
            primo = 1;
        }
        else;
    }

if(primo != 1)
    printf("\t%d", cont);
else;


primo = 0;



}







}
