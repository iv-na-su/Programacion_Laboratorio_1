#include <stdio.h>

int main(){

float notas = 0, promedio, total_notas=0 ;
int cant_notas=0;

printf("INGRESAR NOTAS DEL ALUMNO (PARA FINALIZAR, INGRESAR UN -1)\n%c ", 26);
scanf("%f", &notas);

if(notas>=0)
    total_notas = total_notas + notas;
else;

for(cant_notas = 1 ; notas >= 0 ; cant_notas++){
    printf("%c ", 26);
    scanf("%f", &notas);

    if(notas>=0)
        total_notas = total_notas + notas;
    else;



}
if(notas<0)
    cant_notas--;
else;

//printf("%f", total_notas);

promedio = (total_notas / cant_notas);

printf("\n\t    EL PROMEDIO DE LAS %d NOTAS ES: %.2f", cant_notas, (float)promedio);

if(promedio >= 4.0)
    printf("\n\t\t\tAPROBADO\n");
else
    printf("\n\t\t\tDESAPROBADO\n");


}
