#include <stdio.h>
int main(void) {
int N, i, j;
float VIN, tipo1 = 0, tipo2 = 0, tipo3 = 0, tipo4 = 0, anual;
printf("Ingrese el numero de anos: ");
scanf("%d", &N);
if (N > 0) {
for (i = 1; i <= N; i++) {
anual = 0;
for (j = 1; j <= 4; j++) {
printf("Litros de vino tipo %d en ano %d: ", j, i);
scanf("%f", &VIN);
if (VIN >= 0) {
anual += VIN;
if (j == 1) tipo1 += VIN;
else if (j == 2) tipo2 += VIN;
else if (j == 3) tipo3 += VIN;
else tipo4 += VIN;
} else {
printf("Cantidad invalida\n");
return 1;
}
}
printf("Produccion anual ano %d: %.2f\n", i, anual);
}
printf("Total tipo 1: %.2f\n", tipo1);
printf("Total tipo 2: %.2f\n", tipo2);
printf("Total tipo 3: %.2f\n", tipo3);
printf("Total tipo 4: %.2f\n", tipo4);
} else
printf("Numero de anos invalido\n");
return 0;
}
                        