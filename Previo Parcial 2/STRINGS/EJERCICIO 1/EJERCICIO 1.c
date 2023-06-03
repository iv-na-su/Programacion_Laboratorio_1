#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char NOMBRE1[20];
char NOMBRE2[20];
char NOMBRE3[20];
char NOMBRE4[20];
char NOMBRE5[20];
char NOMBRE6[20];



printf("INGRESAR TRES NOMBRES: \n");

scanf("%s", NOMBRE1);

scanf("%s", NOMBRE2);
fflush(stdin);
scanf("%s", NOMBRE3);

fflush(stdin);
printf("\nINGRESAR LOS MISMOS TRES NOMBRES:\n");


gets(NOMBRE4);

gets(NOMBRE5);

gets(NOMBRE6);




printf("\n\nCON SCANF \n%s\n%s\n%s", NOMBRE1, NOMBRE2, NOMBRE3);



printf("\n\nCON GETS\n%s\n%s\n%s", NOMBRE4, NOMBRE5, NOMBRE6);


}
