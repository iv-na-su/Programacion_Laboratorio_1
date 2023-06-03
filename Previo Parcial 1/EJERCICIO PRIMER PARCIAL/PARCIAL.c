#include <stdio.h>

float VOLUMEN (float, float, float);
int SELECCION (float, float, float);

int main (){

int caja_p=0, caja_m=0, caja_g=0;
float largo, ancho, alto, total, total_max=0;

printf("INGRESAR LOS 3 LADOS DE UNA CAJA (ANCHO, LARGO, ALTO)\nANCHO: ");
scanf("%f", &ancho);

printf("LARGO: ");
scanf("%f", &largo);

printf("ALTO: ");
scanf("%f", &alto);


while(ancho > 0 && largo > 0 && alto > 0){

    total = VOLUMEN(ancho, largo, alto);

    if(total >= total_max)
        total_max = total;
    else;

    if(SELECCION(ancho, largo, alto) == 0)
        caja_p++;
    else if(SELECCION(ancho, largo, alto) == 1)
        caja_m++;
    else
        caja_g++;

    printf("INGRESAR LAS MEDIDAS DE LA SIGUIENTE CAJA\n ANCHO: ");
    scanf("%f", &ancho);

    printf("LARGO: ");
    scanf("%f", &largo);

    printf("ALTO: ");
    scanf("%f", &alto);
}

printf("LA ULTIMA CAJA INGRESADA NO ES VALIDA");
printf("CAJAS PEQUEÑAS: %d\tCAJAS MEDIANAS: %d\tCAJAS GRANDES: %d", caja_p, caja_m, caja_g);
printf("LA CAJA MAS GRANDE INGRESADA TIENE UN VOLUMEN DE %f CM CUBICOS", (float)total_max);


}


int SELECCION(float A, float B, float C){

if(A<15 && B<15 && C<15)
    return 0;
else if(A <= 70 && B <=70 && C <= 70)
    return 1;
else
    return 2;

}


float VOLUMEN(float A, float B, float C){

float resultado = 0;

resultado = (A*B*C);
return resultado;







}
