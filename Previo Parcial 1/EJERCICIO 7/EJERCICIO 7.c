#include <stdio.h>

int main(){

int cateto, asterisco, cont, espacio, cont_cateto;

printf("ingresar el tamaño de los catetos: ");
scanf("%d", &cateto);
printf("\n");
espacio = cateto;

for(cont_cateto=1 ; cont_cateto <= cateto ; cont_cateto++){

    for(cont = 1 ; cont < espacio ; cont++){
        printf(" ");

    }
    espacio--;


    for(asterisco = 0; asterisco < cateto - espacio; asterisco++){
        printf("*");

    }
//printf("\tESPACIOS: %d\tASTERISCOS: %d", espacio, asterisco);
printf("\n");

}
}

