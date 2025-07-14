#include <stdio.h>

int main(void) {
float BAS, ALT, SUP;
printf("Ingrese la base y la altura del tringulo: ");
scanf("%f %f", &BAS, &ALT);
SUP = BAS * ALT / 2.0;
printf("\nLa superficie del tringulo es: %5.2f", SUP);
return 0;
}
    