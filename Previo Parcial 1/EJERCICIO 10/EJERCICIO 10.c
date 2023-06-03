#include <stdio.h>

int main(){

float factura, porcentaje, precio_final;

printf("\nINGRESAR EL VALOR TOTAL DE LA FACTURA (SEPARADO PESOS DE CENTAVOS CON UN .): $");
scanf("%f", &factura);

printf("\nINGRESAR CANTIDAD DE DESCUENTO (SEPARADO ENTERO DE DECIMAL CON UN .): %%");
scanf("%f", &porcentaje);

precio_final = factura -(factura / 100 * porcentaje);

//printf("VALOR DE FACTURA: $%.2f\tCANTIDAD DE DESCUENTO: %%%f", factura, porcentaje);
printf("\n\tEL TOTAL A PAGAR ES DE: $%.2f\n", precio_final);





}
