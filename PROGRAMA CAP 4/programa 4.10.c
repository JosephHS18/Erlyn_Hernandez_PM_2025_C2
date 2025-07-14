#include <stdio.h>

int multiplo(int, int);

int main(void) {
int NU1, NU2, RES;
printf("\nIngresa los dos nmeros: ");
scanf("%d %d", &NU1, &NU2);
RES = multiplo(NU1, NU2);
if (RES)
printf("\nEl segundo nmero es mltiplo del primero");
else
printf("\nEl segundo nmero no es mltiplo del primero");
return 0;
}

int multiplo(int N1, int N2) {
int RES;
if ((N2 % N1) == 0)
RES = 1;
else
RES = 0;
return (RES);
}
    