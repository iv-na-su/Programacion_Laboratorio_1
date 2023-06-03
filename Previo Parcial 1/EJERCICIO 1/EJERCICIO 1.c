#include <stdio.h>

int main () {

int numero, cantidad_num, num_mayor, contador;

printf("Ingresar cantidad de numeros a comparar: ");
scanf("%d", &cantidad_num);


for (contador=1; contador <= cantidad_num; contador++){
    printf("%d: ", contador);
    scanf("%d", &numero);

    if(numero>num_mayor)
        num_mayor = numero;

    else;

}

printf("El numero mas grande fue el: %d", num_mayor);
}
