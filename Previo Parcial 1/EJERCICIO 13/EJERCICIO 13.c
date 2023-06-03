#include <stdio.h>

int main(){

float monto, pagado, vuelto;
int peso=0, cent10=0, cent25=0, cent50=0;

printf("INGRESAR MONTO A PAGAR: $");
scanf("%f", &monto);

printf("CON CUANTO VAS A PAGAR?: $");
scanf("%f", &pagado);

vuelto = (-monto + pagado);

printf("\n\tVUELTO: $%.2f", vuelto);

while(vuelto>0.00){

    if(vuelto >= 1.00){
        peso++;
        vuelto = (vuelto - 1.00);
    }
    else if(vuelto >= 0.50){
        cent50++;
        vuelto = (vuelto - 0.50);
    }
    else if(vuelto >= 0.25){
        cent25++;
        vuelto = (vuelto - 0.25);
    }
    else{
        cent10++;
        vuelto = (vuelto - 0.10);
    }

}



printf("\n1 PESO: %d\n50 CENTAVOS: %d\n25 CENTAVOS: %d\n10 CENTAVOS: %d\n", peso, cent50, cent25, cent10);


}

