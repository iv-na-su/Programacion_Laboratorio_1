#include <stdio.h>



int main(){

    int numero, max=0, primo = 0, digitos = 0, cont;

printf("INGRESAR UN NUMERO DE 4 DIGITOS: ");
scanf("%d", &numero);

while(digitos == 0 && primo == 0){

    while(digitos == 0){
            if(numero < 1000 || numero > 9999){
                printf("\nEL NUMERO NO TIENE 4 DIGITOS, INGRESAR NUEVAMENTE: ");
                scanf("%d", &numero);
            }
            else
                digitos = 1;
    }

    for(cont = 2 ; cont < numero && primo == 0 ; cont++){
        if(numero%cont == 0)
            primo = 1;
        else
            primo = 0;


    }





    if(primo == 1){
        printf("%d %d ", primo, digitos);
        printf("\nCLAVE INCORRECTA, INGRESAR NUEVAMENTE: ");
        scanf("%d", &numero);
        primo = 0;
        digitos = 0;


    }
    else{
        primo = 1;
        digitos = 1;
    }


}

printf("\n\tLA CLAVE ES CORRECTA");





}
