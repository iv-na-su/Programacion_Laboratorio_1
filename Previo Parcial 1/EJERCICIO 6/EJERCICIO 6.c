#include <stdio.h>

int main(){

int cateto, asterisco, cont=0;

printf("ingresar el tamaño de los catetos: ");
scanf("%d", &cateto);
printf("\n");

for(asterisco=1 ; asterisco <= cateto ; asterisco++){

    if(cont<asterisco){
        printf("*");
        asterisco--;
        cont++;
    }
    else{
        printf("\n");
        cont = 0;
    }

}






}
